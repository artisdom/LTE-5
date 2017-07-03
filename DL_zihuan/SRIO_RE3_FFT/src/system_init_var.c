/***********************************************/
/*system_init                                  */
/*功能：系统初始化全局变量文件                 */
/***********************************************/
#include "system_init.h"
#include "pl_comm.h"
#include "PHY_PHYADP_interfaceV3.h"

unsigned int DFT_sz_list[50]=
{
  4, 8,
    16, 32, 64, 128, 256, 512,
    1024, 2048, 4096, 8192, 12, 24,
    48, 96, 192, 384, 768, 1536,
    3072,6144, 36, 72, 144, 288,
    576, 1152, 108, 216, 432, 864,
    324, 648, 1296, 972, 60, 120,
    240, 480, 960, 180, 360, 720,
    540, 1080, 300, 600, 900, 1200
};


/* Global variable declaration */
Cppi_Handle     glbBCPCdmaHdl;
Bcp_LldObj      glbBcpLldObj;
int             glbCoreId;


#pragma DATA_SECTION(srcBuf, ".testData")
unsigned int srcBuf[BCP_MAX_NUM_FD][INBUF_SIZE];
#pragma DATA_SECTION(dstBuf, ".testData")
unsigned int dstBuf[BCP_MAX_NUM_FD][OUTBUF_SIZE];

Bcp_LldObj    * pBcpLldObj;

unsigned int fftcInstNum;


#pragma DATA_ALIGN (gRxBuffer, 32)
#pragma DATA_SECTION(gRxBuffer, ".testData")
unsigned int gRxBuffer[NUM_RX_DESC][CPPI_FFTC_BUF_LEN];


#pragma DATA_ALIGN (gTxBuffer, 32)
#pragma DATA_SECTION(gTxBuffer, ".testData")
unsigned char gTxBuffer[NUM_TX_DESC][CPPI_FFTC_BUF_LEN];


#pragma DATA_SECTION(vxx_cell_para, ".shareddata")
CELL_PARA vxx_cell_para;
#pragma DATA_SECTION(vxx_user_para, ".shareddata")
USER_PARA vxx_user_para[1];
/*lycan 2015-9-23 加用户参数buffer*/
#pragma DATA_SECTION(vxx_user_para_buffer, ".shareddata")
USER_PARA vxx_user_para_buffer[2];
#pragma DATA_SECTION(vxx_config_para_init, ".shareddata")
CONFIG_PARA vxx_config_para_init;
#pragma DATA_SECTION(rsgen_output, ".testData")
unsigned char rsgen_output[20][3][220];
unsigned char vxx_user_num = 1;
//#pragma DATA_SECTION(vxx_fft_lay_buffer, ".SL2TestData")
FFT_LAY_BLOCK vxx_fft_lay_buffer;
#pragma DATA_ALIGN (vxx_che_crs_buffer, 4)
//#pragma DATA_SECTION(vxx_che_crs_buffer, ".SL2TestData")
CHE_CRS_BLOCK vxx_che_crs_buffer;
#pragma DATA_ALIGN (vxx_desramble_tb_buffer, 4)
//#pragma DATA_SECTION(vxx_desramble_tb_buffer, ".SL2TestData")
SCRAM_TB_BLOCK vxx_desramble_tb_buffer;
//#pragma DATA_SECTION(vxx_demodu_rm_buffer, ".SL2TestData")
DEMODU_RM_BLOCK vxx_demodu_rm_buffer;
#pragma DATA_ALIGN (fft_data, 128)
#pragma DATA_SECTION(fft_data, ".shareddata")
unsigned int fft_data[NUM_MAX_ANTENNA][2 * N_SYM_PER_SLOT * N_DL_RB * N_SC_PER_RB];/*FFT后数据*/


#pragma DATA_ALIGN (che_interp_data, 128)
#pragma DATA_SECTION(che_interp_data, ".shareddata")
signed int che_interp_data[NUM_ANTENNA_PORT_2][NUM_MAX_ANTENNA][N_SYM_PER_SLOT * 2][N_SC_PER_RB * N_DL_RB];/*插值后的信道估计*/
#pragma DATA_ALIGN (demodulation_data, 4)
#pragma DATA_SECTION(demodulation_data, ".shareddata")
signed char demodulation_data[4][NUM_CODEWORD_2][N_SC_PER_RB * N_DL_RB * 4 * QAM64];/*解调 每个core最多做4个符号*/
#pragma DATA_ALIGN (pdsch_pseudo, 4)
#pragma DATA_SECTION(pdsch_pseudo, ".shareddata")
signed char pdsch_pseudo[NUM_CODEWORD_2][PDSCH_PSEUDO_LENGTH];/*解扰生成的扰码*/
#if 0
#pragma DATA_ALIGN (tb_buffer, 4)
unsigned int tb_buffer[NUM_CODEWORD_2 * ((MAX_TB_BLOCK_SIZE + ETHERNET_PACK_LEN - 1)/32)];/*考虑TB块加上CRC长度*/
#endif
#pragma DATA_ALIGN (prbdemapping_crs_data, 4)
//#pragma DATA_SECTION(prbdemapping_crs_data, ".testData")
signed int prbdemapping_crs_data[NUM_ANTENNA_PORT_2][NUM_MAX_ANTENNA][CRS_SYMB_NUM_NORMCP_1MS][CRS_SUBCARR_NUM_20M];/*导频解资源映射*/
#pragma DATA_ALIGN (crs_che_data, 4)
//#pragma DATA_SECTION(crs_che_data, ".testData")
unsigned int crs_che_data[NUM_ANTENNA_PORT_2][NUM_MAX_ANTENNA][CRS_SYMB_NUM_NORMCP_1MS][CRS_SUBCARR_NUM_20M];/*插值前的信道估计*/
#pragma DATA_ALIGN (vxx_pbch_freq_lay_data, 4)
#pragma DATA_SECTION(vxx_pbch_freq_lay_data, ".testData")
PBCH_FREQ_DATA_LAY_BLOCK vxx_pbch_freq_lay_data;
#pragma DATA_ALIGN (vxx_pbch_che_llr_data, 4)
#pragma DATA_SECTION(vxx_pbch_che_llr_data, ".testData")
PBCH_CHE_LLR_BLOCK vxx_pbch_che_llr_data;
#pragma DATA_SECTION(pbch_pcfich_pdcch_llr_data, ".testData")
signed short  pbch_pcfich_pdcch_llr_data[3600];
#pragma DATA_ALIGN (vxx_precoding_demod_data, 4)
#pragma DATA_SECTION(vxx_precoding_demod_data, ".testData")
PBCH_PRECODING_DEMOD_BLOCK vxx_precoding_demod_data;
//#pragma DATA_SECTION(g_dl_resource_mapping, ".testData")
DL_resource_mapping_struct g_dl_resource_mapping;
DL_phich_para_struct vxx_phich_para;
unsigned int g_phich_freq_data[50 * 12];//待映射频域数据 50=ceil(2*(100/8))*2;2是mi的最大值
#pragma DATA_ALIGN (g_cch_data_buffer, 8)
#pragma DATA_SECTION(g_cch_data_buffer, ".shareddata")
DL_cch_data_struct g_cch_data_buffer;
#pragma DATA_SECTION(pdcch_data_after_descram, ".shareddata")
char pdcch_data_after_descram[800 * 8];
char g_N_group_phich[MAX_SUBFN_NUM];
int TXEmac;
signed char vxx_max_shift_factor;
unsigned int gxx_symbol0_flag = 0;
unsigned int gxx_symbol11_flag = 0;
unsigned int gxx_symbol13_flag = 0;
unsigned int gxx_symbol6_flag = 0;
char g_pdcch_dci_bit_length_table[12];
#pragma DATA_SECTION(g_dci_rel_data_buffer, ".shareddata")
union dci_data_format g_dci_rel_data_buffer[50];
#pragma DATA_ALIGN(TxBuff, 16)
#pragma DATA_SECTION(TxBuff, ".fardata")
signed char vxx_shift_factor[NUM_MAX_ANTENNA][N_SYM_PER_SLOT * 2];
#pragma DATA_SECTION(pdsch_pseudo_ddr, ".testData")
unsigned char pdsch_pseudo_ddr[10][NUM_CODEWORD_2][PDSCH_PSEUDO_LENGTH];
unsigned char TxBuff[ETHERNET_PACK_LEN + ETHERNET_PACK_HEAD_LEN] =
{
		0x00, 0x22, 0x68, 0x20, 0x7D, 0x1A,
		0x00, 0x01, 0x02, 0x03, 0x04, 0x05,                      /* Src MAC  */
		0x08, 0x00,                                              /* Ethertype = IPv4 */
		0x45, 0x00, 0x00, 0x6c,                                  /* IP version, services, total length */
		0x00, 0x00, 0x00, 0x00,                                  /* IP ID, flags, fragment offset */
		0x05, 0x11, 0x32, 0x26,                                  /* IP ttl, protocol (UDP), header checksum */
		0xc0, 0xa8, 0x01, 0x01,                                  /* Source IP address */
		0xc0, 0xa8, 0x01, 0x0a,                                  /* Destination IP address */
		0x12, 0x34, 0x56, 0x78,                                  /* UDP source port, dest port */
		0x00, 0x58, 0x1d, 0x18,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};


#pragma DATA_ALIGN (tb_buffer, 4)
unsigned int tb_buffer_total[10][NUM_CODEWORD_2 * ((MAX_TB_BLOCK_SIZE + ETHERNET_PACK_LEN - 1)/32)];
#pragma DATA_SECTION(vec_flag, ".shareddata")
volatile int vec_flag = 1;
volatile int slot_flag = 0;
volatile int symbol_flag=-1;//代表符号序号，从零开始，接收到中断加1.

#pragma DATA_ALIGN (testdata_receive, 256)
#pragma DATA_SECTION(testdata_receive, ".testData")
unsigned int testdata_receive[10*61440];

/*2015.3.25添加 */
#pragma DATA_ALIGN (mactophytype1, 256)
#pragma DATA_SECTION(mactophytype1,".shareddata")
volatile UEPHYADPtoPHYType1 mactophytype1[PARA_LEN];
#pragma DATA_ALIGN (mactophytype3, 256)
#pragma DATA_SECTION(mactophytype3,".shareddata")
volatile UEPHYADPtoPHYType3 mactophytype3;

#pragma DATA_ALIGN (phytomactype2, 256)
#pragma DATA_SECTION(phytomactype2,".shareddata")
volatile UEPHYADPtoPHYType2 phytomactype2;
#pragma DATA_SECTION(phytomac_pbchd,".shareddata")
volatile UE_DL_TYPE2_PBCH_D phytomac_pbchd;
#pragma DATA_SECTION(phytomac_phichd,".shareddata")
volatile UE_DL_TYPE2_PHICH_D phytomac_phichd;
#pragma DATA_SECTION(phytomac_pdcchc,".shareddata")
volatile UE_DL_TYPE2_PDCCH_C phytomac_pdcchc;
#pragma DATA_SECTION(phytomac_pdcchd,".shareddata")
volatile UE_DL_TYPE2_PDCCH_D phytomac_pdcchd;
#pragma DATA_SECTION(phytomac_pdschc,".shareddata")
volatile UE_DL_TYPE2_PDSCH_C phytomac_pdschc;
#pragma DATA_ALIGN (tb_buffer, 4)
#pragma DATA_SECTION(tb_buffer,".shareddata")
unsigned int tb_buffer[NUM_CODEWORD_2 * ((MAX_TB_BLOCK_SIZE + ETHERNET_PACK_LEN - 1)/32)];/*考虑TB块加上CRC长度*/

#pragma DATA_ALIGN (UEphyto719_pbch, 256)
#pragma DATA_SECTION(UEphyto719_pbch, ".shareddata")
unsigned int UEphyto719_pbch[4];

#pragma DATA_ALIGN (pdsch_pseudo_init, 256)
#pragma DATA_SECTION(pdsch_pseudo_init, ".testData")
unsigned char pdsch_pseudo_init[5][10][NUM_CODEWORD_2][PDSCH_PSEUDO_LENGTH];


