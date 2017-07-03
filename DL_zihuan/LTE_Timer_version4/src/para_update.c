/***********************************************/
/*para_update.c                                */
/*功能：小区和用户参数更新                     */
/***********************************************/
#include "system_init.h"
#include "pl_comm.h"
#include "PHY_PHYADP_interfaceV3.h"
#include "TSC.h"



//#define SINGLE_USER //单用户测试，注销表示是多用户测试
#define SUBCARR_NUM_PRB_DATA 8
#define I_PHICH 0
#define N_group_PHICH 8
#define N_PHICH_SF 4
unsigned volatile int ue_index=0;
unsigned volatile int ue_index1=0;
unsigned volatile int ue_index2=0;
unsigned volatile int countnum=0;

#pragma DATA_ALIGN (gxx_flag_core1, 128)     //8.12JX加
#pragma DATA_SECTION(gxx_flag_core1, ".shareddata")
volatile int gxx_flag_core1=0;

volatile int send_flag = 1;//8.12JX加

int dl_mod_format[3]={2,4,6};

unsigned volatile int dl_pdcch_num;
unsigned volatile int dl_phich_num;
unsigned volatile int pbchdata;

#pragma DATA_ALIGN (sfn, 256)
unsigned volatile short  sfn = 0;
unsigned volatile short  slot_idx = 0;
unsigned volatile short  subframeN = 0;
//unsigned int iii=0;
unsigned int start1;
unsigned int rec_cycle;
unsigned int count_number=0;

int sfhnx[10]={0,1,2,3,4,5,6,7,8,9};
int sfcount=0;

#if 1
/******Type1参数指针************/
volatile ENBPHYADPtoPHYType1* ADPtoPHY_type1;
volatile ENB_DL_TYPE1_PBCH_C* type1_pbch_c;
volatile ENB_DL_TYPE1_PBCH_D* type1_pbch_d;
volatile ENB_DL_TYPE1_PHICH_C* type1_phich_c;
volatile ENB_DL_TYPE1_PHICH_D* type1_phich_d;
volatile ENB_DL_TYPE1_PDCCH_C* type1_pdcch_c;
volatile ENB_DL_TYPE1_PDCCH_D* type1_pdcch_d;
volatile ENB_DL_TYPE1_PDSCH_C* type1_pdsch_c;
volatile ENB_DL_TYPE1_PDSCH_D* type1_pdsch_d;
/******Type3参数指针************/
volatile ENBPHYADPtoPHYType3* ADPtoPHY_type3;
volatile ENB_DL_TYPE3_PDCCH_C* type3_pdcch_c;
volatile ENB_DL_TYPE3_PDSCH_C* type3_pdsch_c;
#endif


extern void read_cell_para_config(FILE* fp,
        CELL_PARA* cell_para_ptr);
extern void read_user_para_config(FILE* fp,USER_PARA* user_para_ptr,CELL_PARA* cell_para_ptr);
/*int bitmap[USER_NUM1] = {
    0xc0000000,//prb0~7
    0x38000000,//prb8~19
    0x06000000,//prb20~27
    0x01c00000,//prb28~39
    0x00300000,//prb40~47
    0x000e0000,//prb48~59
    0x00018000,//prb60~67
    0x00007000,//prb68~79
    0x00000c00,//prb80~87
    0x00000380//prb88~99
};*/
//五用户，把之前的参数注掉，增加如下：
int bitmap[USER_NUM] = {
    0xF8000000,//prb0~19
    0x07C00000,//prb20~39
    0x003E0000,//prb40~59
    0x0001F000,//prb60~79
    0x00000F80,//prb80~99
};

/*short tbSize[USER_NUM1] = {
2280,3496,2280,3496,2280,3496,2280,3496,2280,3496
};
short tbSize_subframe0[USER_NUM1] = {
2280,3496,2280,3496,2280,3496,2280,3496,2280,3496
};
short tbSize_subframe1[USER_NUM1] = {
1384,2088,1384,2088,1384,2088,1384,2088,1384,2088
};
*/
short tbSize[USER_NUM] = {
5736,5736,5736,5736,5736
};
short tbSize_subframe0[USER_NUM] = {
5736,5736,5736,5736,5736
};
/*short tbSize_subframe1[USER_NUM] = {
3496,3496,3496,3496,3496
};*/
short tbSize_subframe1[USER_NUM] = {
4264,4264,4264,4264,4264
};//参照213协议7.1.7

//修改五用户的DCI_data部分
int DCI_data[USER_NUM] = {
0x8ED8F080,//1 0 0 0 1 1 1 0 1 1 0 1 1 0 0 0 1 1 1 1 0 0 0 0 1 0 0 0 0 0 0 ,按照32bit输入，低位补0
0x8F00F080,//1 0 0 0 1 1 1 1 0 0 0 0 0 0 0 0 1 1 1 1 0 0 0 0 1 0 0 0 0 0 0
0x8F28F080,//1 0 0 0 1 1 1 1 0 0 1 0 1 0 0 0 1 1 1 1 0 0 0 0 1 0 0 0 0 0 0
0x8F50F080,//1 0 0 0 1 1 1 1 0 1 0 1 0 0 0 0 1 1 1 1 0 0 0 0 1 0 0 0 0 0 0
0x8F78F080,//1 0 0 0 1 1 1 1 0 1 1 1 1 0 0 0 1 1 1 1 0 0 0 0 1 0 0 0 0 0 0 0
};
int DCI_data_s[USER_NUM] = {
0x8ED8B080,//1 0 0 0 0 1 0 1 0 1 1 1 1 0 0 0 1 0 1 1 0 0 0 0 1 0 0 0 0 0 0
0x8F00B080,//1 0 0 0 1 0 0 0 1 0 1 0 1 0 0 0 1 0 1 1 0 0 0 0 1 0 0 0 0 0 0
0x8F28B080,//1 0 0 0 0 1 0 1 1 0 1 0 0 0 0 0 1 0 1 1 0 0 0 0 1 0 0 0 0 0 0
0x8F50B080,//1 0 0 0 1 0 0 0 1 1 0 1 0 0 0 0 1 0 1 1 0 0 0 0 1 0 0 0 0 0 0
0x8F78B080,//1 0 0 0 0 1 0 1 1 1 0 0 1 0 0 0 1 0 1 1 0 0 0 0 1 0 0 0 0 0 0
};
/*
 第3~15位为计算出来的RIV值,如:
 第一个为700=100*(8-1)+0；
 第二个1108=100*(12-1)+8；
 第三个720=100*(8-1)+8+12;
 第四个1128=100*(12-1)+28;
 ...
*/
/*int DCI_data[USER_NUM] = {
0x8578F080,//1 0 0 0 0 1 0 1 0 1 1 1 1 0 0 0 1 1 1 1 0 0 0 0 1 0 0 0 0 0 0,按照32bit输入，低位补0
0x88A8F080,//1 0 0 0 1 0 0 0 1 0 1 0 1 0 0 0 1 1 1 1 0 0 0 0 1 0 0 0 0 0 0
0x85A0F080,//1 0 0 0 0 1 0 1 1 0 1 0 0 0 0 0 1 1 1 1 0 0 0 0 1 0 0 0 0 0 0
0x88D0F080,//1 0 0 0 1 0 0 0 1 1 0 1 0 0 0 0 1 1 1 1 0 0 0 0 1 0 0 0 0 0 0
0x85C8F080,//1 0 0 0 0 1 0 1 1 1 0 0 1 0 0 0 1 1 1 1 0 0 0 0 1 0 0 0 0 0 0
0x88F8F080,//1 0 0 0 1 0 0 0 1 1 1 1 1 0 0 0 1 1 1 1 0 0 0 0 1 0 0 0 0 0 0
0x85F0F080,//1 0 0 0 0 1 0 1 1 1 1 1 0 0 0 0 1 1 1 1 0 0 0 0 1 0 0 0 0 0 0
0x8920F080,//1 0 0 0 1 0 0 1 0 0 1 0 0 0 0 0 1 1 1 1 0 0 0 0 1 0 0 0 0 0 0
0x8618F080,//1 0 0 0 0 1 1 0 0 0 0 1 1 0 0 0 1 1 1 1 0 0 0 0 1 0 0 0 0 0 0
0x8948F080 //1 0 0 0 1 0 0 1 0 1 0 0 1 0 0 0 1 1 1 1 0 0 0 0 1 0 0 0 0 0 0

};
*/

/*
int DCI_data_s[USER_NUM] = {
0x8578B080,//1 0 0 0 0 1 0 1 0 1 1 1 1 0 0 0 1 0 1 1 0 0 0 0 1 0 0 0 0 0 0
0x88A8B080,//1 0 0 0 1 0 0 0 1 0 1 0 1 0 0 0 1 0 1 1 0 0 0 0 1 0 0 0 0 0 0
0x85A0B080,//1 0 0 0 0 1 0 1 1 0 1 0 0 0 0 0 1 0 1 1 0 0 0 0 1 0 0 0 0 0 0
0x88D0B080,//1 0 0 0 1 0 0 0 1 1 0 1 0 0 0 0 1 0 1 1 0 0 0 0 1 0 0 0 0 0 0
0x85C8B080,//1 0 0 0 0 1 0 1 1 1 0 0 1 0 0 0 1 0 1 1 0 0 0 0 1 0 0 0 0 0 0
0x88F8B080,//1 0 0 0 1 0 0 0 1 1 1 1 1 0 0 0 1 0 1 1 0 0 0 0 1 0 0 0 0 0 0
0x85F0B080,//1 0 0 0 0 1 0 1 1 1 1 1 0 0 0 0 1 0 1 1 0 0 0 0 1 0 0 0 0 0 0
0x8920B080,//1 0 0 0 1 0 0 1 0 0 1 0 0 0 0 0 1 0 1 1 0 0 0 0 1 0 0 0 0 0 0
0x8618B080,//1 0 0 0 0 1 1 0 0 0 0 1 1 0 0 0 1 0 1 1 0 0 0 0 1 0 0 0 0 0 0
0x8948B080//1 0 0 0 1 0 0 1 0 1 0 0 1 0 0 0 1 0 1 1 0 0 0 0 1 0 0 0 0 0 0
};
*/

/*short num_PRB[USER_NUM1] = {
8,12,8,12,8,12,8,12,8,12
};
*/
short num_PRB[USER_NUM] = {
20,20,20,20,20
};

void get_flag()
{

#if 0
	if(send_flag==1)
	{
	    gxx_flag_core1=1;
		CACHE_wbL2((void *)&gxx_flag_core1,sizeof(gxx_flag_core1),CACHE_WAIT);
		send_flag=0;
	}
#endif
    gxx_flag_core1=1;
	CACHE_wbL2((void *)&gxx_flag_core1,sizeof(gxx_flag_core1),CACHE_WAIT);
}
#ifdef SINGLE_USER
void para_init(CONFIG_PARA* config_para_ptr,CELL_PARA* cell_para_ptr)
{
    char i;
    vxx_user_num = 1;
    config_para_ptr[0].num_code_word = NUM_CODEWORD_2;

    config_para_ptr[0].ueTransMode = SPATIAL_MULTIPLEXING;
    config_para_ptr[0].modulation[0] = QAM64;
    config_para_ptr[0].modulation[1] = QAM64;
    config_para_ptr[0].rnti = 61;
    config_para_ptr[0].num_PRB = 100;
    config_para_ptr[0].rvIdx = 0;
    config_para_ptr[0].tbSize[0] = 75376;
    config_para_ptr[0].tbSize[1] = 75376;
    config_para_ptr[0].tbSize_subframe0[0] = 63776;
    config_para_ptr[0].tbSize_subframe0[1] = 63776;
    config_para_ptr[0].tbSize_subframe1[0] = 55056;
    config_para_ptr[0].tbSize_subframe1[1] = 55056;
    config_para_ptr[0].bitmap = 0xffffff80;//与num_PRB配合使用,表示起始prb是0
    for(i = 0;i < 10;i++)
    {
      config_para_ptr[0].subframe_direction[i] = up_down_config[2][i];
    }
    //与config_para_ptr->tbSize_subframe0 = 63776对应
    config_para_ptr[0].frame_config = 2;
    config_para_ptr[0].pdcch_num = vxx_user_num;
    config_para_ptr[0].pdcch_para[0].pdcch_format = 0;
    config_para_ptr[0].pdcch_para[0].DCI_format = Dci2A;
    config_para_ptr[0].pdcch_para[0].dci_bit_len = 51;
    config_para_ptr[0].pdcch_para[0].rnti = 61;
    config_para_ptr[0].pdcch_para[0].start_CCE = 0;
    config_para_ptr[0].pdcch_para[0].common_pdcch = 0;
    config_para_ptr[0].pdcch_para[0].DCI_data[0] = _bitr(0x7FFFFFC0);
    config_para_ptr[0].pdcch_para[0].DCI_data[1] = _bitr(0x1b1b0000);

    //与config_para_ptr->tbSize_subframe1 = 55056对应
    config_para_ptr[0].frame_config = 2;
    config_para_ptr[0].pdcch_num = vxx_user_num;
    config_para_ptr[0].pdcch_para[1].pdcch_format = 0;
    config_para_ptr[0].pdcch_para[1].DCI_format = Dci2A;
    config_para_ptr[0].pdcch_para[1].dci_bit_len = 51;
    config_para_ptr[0].pdcch_para[1].rnti = 61;
    config_para_ptr[0].pdcch_para[1].start_CCE = 0;
    config_para_ptr[0].pdcch_para[1].common_pdcch = 0;
    config_para_ptr[0].pdcch_para[1].DCI_data[0] = _bitr(0x7FFFFFC0);
    config_para_ptr[0].pdcch_para[1].DCI_data[1] = _bitr(0x18180000);

    //与config_para_ptr->tbSize = 75376对应
    config_para_ptr[0].frame_config = 2;
    config_para_ptr[0].pdcch_num = vxx_user_num;
    config_para_ptr[0].pdcch_para[2].pdcch_format = 0;
    config_para_ptr[0].pdcch_para[2].DCI_format = Dci2A;
    config_para_ptr[0].pdcch_para[2].dci_bit_len = 51;
    config_para_ptr[0].pdcch_para[2].rnti = 61;
    config_para_ptr[0].pdcch_para[2].start_CCE = 0;
    config_para_ptr[0].pdcch_para[2].common_pdcch = 0;
    config_para_ptr[0].pdcch_para[2].DCI_data[0] = _bitr(0x7FFFFFC0);
    config_para_ptr[0].pdcch_para[2].DCI_data[1] = _bitr(0x1c1c0000);

    //PHICH
    config_para_ptr[0].phich_para.ACK_NACK = 0;
    config_para_ptr[0].phich_para.n_group = 0;
    config_para_ptr[0].phich_para.n_seq = 0;
    //参数合并整理
    config_para_ptr[0].maxNumHarqProcess = 8;
    config_para_ptr[0].numLayers = NUM_LAYER_2;
    config_para_ptr[0].ueCategory = 4;
    config_para_ptr[0].delay_mod = LARGE_DELAY_CDD;
    config_para_ptr[0].PA = 4;
}
#else

void para_init(CONFIG_PARA* config_para_ptr,CELL_PARA* cell_para_ptr)
{

#ifdef VERSION_719//2015.1.20，根据结构体来编写上层发送参数的配置
/**************************TYPE1 参数************************/
	char i,j;
	//unsigned int end_flag;
	//while(iii);
#if 1
	while(gxx_flag_core1==0)//参数到达时该Flag置1
	{
		CACHE_invL2((void *)&gxx_flag_core1, sizeof(gxx_flag_core1), CACHE_WAIT);
	}
#endif
	start1=TSCL;


	//2015.1.20mjt添加,用于719数据源的接收,ue_index1代表BUF序号
	ue_index1 = ue_index1%PARA_LEN;//循环

	/*参数指针赋值*/
	//ADPtoPHY_type1初始化
	//cycle_para = TSC_delay_cycle(start_para);
	ADPtoPHY_type1 = (ENBPHYADPtoPHYType1*)mactophytype1[ue_index1];

	while(ADPtoPHY_type1->GHead.NewFlag ==0)//参数到达时该Flag置1
	{
		CACHE_invL2((void *)&mactophytype1[ue_index1][0], sizeof(mactophytype1[ue_index1]), CACHE_WAIT);
	}
	rec_cycle=TSC_delay_cycle(start1);


	//CycleDelay(10000);
	//CACHE_invL2((void *)&mactophytype1[ue_index1][0], sizeof(mactophytype1[ue_index1]), CACHE_WAIT);

#if 0
	end_flag=*((int *)mactophytype1[ue_index1][0]+960);
	while(end_flag==0)
	{
		CACHE_invL2((void *)&mactophytype1[ue_index1][0], sizeof(mactophytype1[ue_index1]), CACHE_WAIT);
	}
#endif

	//CACHE_invL2((void *)&mactophytype1[ue_index1][0], sizeof(mactophytype1[ue_index1]), CACHE_WAIT);//2015.8.6JX加
	//CSL_XMC_invalidatePrefetchBuffer();
	  	//	    _mfence();
	  	//	    _mfence();
	//start_para = TSCL;
	countnum++;


	sfn = ADPtoPHY_type1->GHead.SFN;
	//subframeN = ADPtoPHY_type1->GHead.SubframeN; hnx
	//slot_idx = ADPtoPHY_type1->GHead.SubframeN*2;
	//hnx
	subframeN=sfhnx[sfcount%10];
	slot_idx=subframeN*2;
    //printf("subframeN=%d slot_idx=%d\n",subframeN,slot_idx);

	/*	if(subframeN>9)
	{
		printf ("[Core %d]:subframeN overstep the boundary  \n", glbCoreId);
	}*/

	vxx_user_num = ADPtoPHY_type1->DL_TYPE1_PUBLIC_C.PDSCHNum;
	dl_pdcch_num = ADPtoPHY_type1->DL_TYPE1_PUBLIC_C.PDCCHNum;
	dl_phich_num = ADPtoPHY_type1->DL_TYPE1_PUBLIC_C.NumOfUEForPHICH;


#if 1
	if(ADPtoPHY_type1->DL_TYPE1_PUBLIC_C.PBCH_C_Offset>1)//PBCH参数更新
	{
		type1_pbch_c = (ENB_DL_TYPE1_PBCH_C*)((char*)ADPtoPHY_type1+ADPtoPHY_type1->DL_TYPE1_PUBLIC_C.PBCH_C_Offset);
		CACHE_invL2((void *)type1_pbch_c, sizeof(ENB_DL_TYPE1_PBCH_C), CACHE_WAIT);
		cell_para_ptr->num_PRB_per_bw_config=100;//num_PRB_per_bw_config = 100type1_pbch_c->NumPrbBw;
        cell_para_ptr->phich_Durtion = type1_pbch_c->PhichDurtion;
        cell_para_ptr->g_phich_Ng = type1_pbch_c->GPhichNg;
	}

	if(ADPtoPHY_type1->DL_TYPE1_PUBLIC_C.PBCH_D_Offset>1)//PBCH数据源更新
	{
		type1_pbch_d = (ENB_DL_TYPE1_PBCH_D*)((char*)ADPtoPHY_type1+ADPtoPHY_type1->DL_TYPE1_PUBLIC_C.PBCH_D_Offset);
		CACHE_invL2((void *)type1_pbch_d, sizeof(ENB_DL_TYPE1_PBCH_D), CACHE_WAIT);
		pbchdata = type1_pbch_d->SourcePBCH;
	}
#if 1
	if(ADPtoPHY_type1->DL_TYPE1_PUBLIC_C.PHICH_C_Offset>1)//PHICH参数更新
	{

		for(i=0;i<dl_phich_num;i++)
		{
			type1_phich_c = (ENB_DL_TYPE1_PHICH_C*)((char*)ADPtoPHY_type1+ADPtoPHY_type1->DL_TYPE1_PUBLIC_C.PHICH_C_Offset+i*sizeof(ENB_DL_TYPE1_PHICH_C));
			CACHE_invL2((void *)type1_phich_c, sizeof(ENB_DL_TYPE1_PHICH_C), CACHE_WAIT);
			config_para_ptr[i].phich_para.I_lowest_index_PRB_RA = type1_phich_c->I_lowest_index_PRB_RA;
			config_para_ptr[i].phich_para.NDmrs = type1_phich_c->NDmrs;
			config_para_ptr[i].phich_para.n_group = (config_para_ptr[i].phich_para.I_lowest_index_PRB_RA+
														config_para_ptr[i].phich_para.NDmrs)%N_group_PHICH+I_PHICH*N_group_PHICH;
		    config_para_ptr[i].phich_para.n_seq = i;//(config_para_ptr[i].phich_para.I_lowest_index_PRB_RA/N_group_PHICH+
		    		  	  	  	  	  	  	  	  	  	 // config_para_ptr[i].phich_para.NDmrs)%(2*N_PHICH_SF);

			//type1_phich_c++;
		}
	}

	if(ADPtoPHY_type1->DL_TYPE1_PUBLIC_C.PHICH_D_Offset>1)//PHICH数据更新
	{
		for(i=0;i<dl_phich_num;i++)
		{
			type1_phich_d = (ENB_DL_TYPE1_PHICH_D*)((char*)ADPtoPHY_type1+ADPtoPHY_type1->DL_TYPE1_PUBLIC_C.PHICH_D_Offset+i*sizeof(ENB_DL_TYPE1_PHICH_D));
			CACHE_invL2((void *)type1_phich_d, sizeof(ENB_DL_TYPE1_PHICH_D), CACHE_WAIT);
			config_para_ptr[i].phich_para.ACK_NACK = type1_phich_d->SourcePHICH;
			//type1_phich_d++;
		}
	}
#endif
    /*
	for(i = 0;i < vxx_user_num;i++)
    {
        config_para_ptr[i].phich_para.ACK_NACK = (i & 1);
        config_para_ptr[i].phich_para.n_group = i >> 3;
        config_para_ptr[i].phich_para.n_seq = (i & 7);
    }
    */

	if(ADPtoPHY_type1->DL_TYPE1_PUBLIC_C.PDCCH_C_Offset>1)//PDCCH参数更新
	{

		for(i=0;i<dl_pdcch_num;i++)
		{
			type1_pdcch_c = (ENB_DL_TYPE1_PDCCH_C*)((char*)ADPtoPHY_type1+ADPtoPHY_type1->DL_TYPE1_PUBLIC_C.PDCCH_C_Offset+i*sizeof(ENB_DL_TYPE1_PDCCH_C));
			CACHE_invL2((void *)type1_pdcch_c, sizeof(ENB_DL_TYPE1_PDCCH_C), CACHE_WAIT);
			config_para_ptr[i].rnti = 61+i;
			config_para_ptr[i].pdcch_num = 1;
			config_para_ptr[i].pdcch_para[0].start_CCE = 0;
			config_para_ptr[i].pdcch_para[0].rnti = type1_pdcch_c->RNTI;
			config_para_ptr[i].pdcch_para[0].common_pdcch = type1_pdcch_c->CommonPdcchFlag;
			config_para_ptr[i].pdcch_para[0].pdcch_format = type1_pdcch_c->PdcchFormat;//聚合等级
			config_para_ptr[i].pdcch_para[0].DCI_format = type1_pdcch_c->DCIFormat;
			config_para_ptr[i].pdcch_para[0].dci_bit_len = type1_pdcch_c->DciBitLen;
			//type1_pdcch_c++;
		}


	}

	if(ADPtoPHY_type1->DL_TYPE1_PUBLIC_C.PDCCH_D_Offset>1)//PDCCH数据更新
	{

		for(i=0;i<dl_pdcch_num;i++)
		{
			type1_pdcch_d = (ENB_DL_TYPE1_PDCCH_D*)((char*)ADPtoPHY_type1+ADPtoPHY_type1->DL_TYPE1_PUBLIC_C.PDCCH_D_Offset+i*sizeof(ENB_DL_TYPE1_PDCCH_D));
			CACHE_invL2((void *)type1_pdcch_d, sizeof(ENB_DL_TYPE1_PDCCH_D), CACHE_WAIT);
			config_para_ptr[i].pdcch_para[0].DCI_data[0] = _bitr(type1_pdcch_d->dcidata0);
			config_para_ptr[i].pdcch_para[0].DCI_data[1] = _bitr(type1_pdcch_d->dcidata1);
			/**************1/13*****************************/

			if(type1_pdcch_d->dcidata0!=DCI_data[i])
			{
				 count_number++;
				 config_para_ptr[i].pdcch_para[0].DCI_data[0] = _bitr(DCI_data[i]);
			}
			CACHE_wbL2(&config_para_ptr[i].pdcch_para[0].DCI_data[0],sizeof(config_para_ptr[i].pdcch_para[0].DCI_data[0]),CACHE_WAIT);
			//type1_pdcch_d++;
		}
	}

	if(ADPtoPHY_type1->DL_TYPE1_PUBLIC_C.PDSCH_C_Offset>1)//PDSCH参数更新
	{
		for(i = 0;i< vxx_user_num;i++)
		{
			type1_pdsch_c = (ENB_DL_TYPE1_PDSCH_C*)((char*)ADPtoPHY_type1+ADPtoPHY_type1->DL_TYPE1_PUBLIC_C.PDSCH_C_Offset+i*sizeof(ENB_DL_TYPE1_PDSCH_C));
			CACHE_invL2((void *)type1_pdsch_c, sizeof(ENB_DL_TYPE1_PDSCH_C), CACHE_WAIT);
			config_para_ptr[i].rnti = type1_pdsch_c->RNTI;
			config_para_ptr[i].num_code_word = type1_pdsch_c->NumCW;
			config_para_ptr[i].num_PRB = type1_pdsch_c->NumPrbofUe;
			config_para_ptr[i].ueCategory = type1_pdsch_c->UeCategory+1;
			config_para_ptr[i].ueTransMode = type1_pdsch_c->UeTransMod;
			config_para_ptr[i].maxNumHarqProcess = type1_pdsch_c->NumHarqPro;
			config_para_ptr[i].rvIdx = type1_pdsch_c->RvIdx;
			config_para_ptr[i].modulation[0] = dl_mod_format[type1_pdsch_c->Modulation];
			config_para_ptr[i].numLayers = type1_pdsch_c->NumLayers;
			config_para_ptr[i].delay_mod = type1_pdsch_c->DelayMod;
			config_para_ptr[i].PA = type1_pdsch_c->PA;
			//config_para_ptr[i].PB = type1_pdsch_c->PB;

			config_para_ptr[i].tbSize[0] = type1_pdsch_c->PDSCHTbSize;

			if ((subframeN==1)||(subframeN==6))  //hnx
				config_para_ptr[i].tbSize[0]=4264;

			config_para_ptr[i].bitmap =  type1_pdsch_c->BitMap;
			//type1_pdsch_c++;
		}
	}

#endif
	//放在数据提取后增加
	//ADPtoPHY_type1->GHead.NewFlag =0;
	//memset((void *)((int *)mactophytype1[ue_index1][0]+960),0,4);
	CACHE_wbL2((void *)&ADPtoPHY_type1->GHead.NewFlag,sizeof(ADPtoPHY_type1->GHead.NewFlag),CACHE_WAIT);

    ue_index1++;



#if 1
 /*************************Type3参数*******************/
    //ADPtoPHY_type3初始化
    ADPtoPHY_type3 = (ENBPHYADPtoPHYType3*)mactophytype3;
    while(ADPtoPHY_type3->GHead.NewFlag!=1)
    {
    	CACHE_invL2((void*)mactophytype3, sizeof(mactophytype3), CACHE_WAIT);
    }
    CACHE_invL2((void*)mactophytype3, sizeof(mactophytype3), CACHE_WAIT);
    if(ADPtoPHY_type3->GHead.NewFlag ==1);//参数到达时该Flag置1
    {
    	type3_pdcch_c = (ENB_DL_TYPE3_PDCCH_C*)((char*)ADPtoPHY_type3+ADPtoPHY_type3->DL_TYPE3_PUBLIC_C.PDCCHOffset);
    	CACHE_invL2((void *)type3_pdcch_c, sizeof(ENB_DL_TYPE3_PDCCH_C), CACHE_WAIT);
    	cell_para_ptr->frame_config = type3_pdcch_c->SpecSubFrmCfg;//这里对不？

    	type3_pdsch_c = (ENB_DL_TYPE3_PDSCH_C*)((char*)ADPtoPHY_type3+ADPtoPHY_type3->DL_TYPE3_PUBLIC_C.PDSCHOffset);
    	CACHE_invL2((void *)type3_pdsch_c, sizeof(ENB_DL_TYPE3_PDSCH_C), CACHE_WAIT);
    	cell_para_ptr->cellID = type3_pdsch_c->CellID;
    	cell_para_ptr->num_antenna_port = type3_pdsch_c->NumAntPort;
    	cell_para_ptr->CFI = type3_pdsch_c->CFI;
    	cell_para_ptr->N_cp = type3_pdsch_c->CpType;
    	//cell_para_ptr->subframe_direction[slot_idx>>1] = type3_pdsch_c->SFDirection;  //移到cell_para自己更新，8/11jx
    	cell_para_ptr->P_B = type3_pdsch_c->PB;

    	//ADPtoPHY_type3->GHead.NewFlag = 0;
    	CACHE_wbL2((void *)&ADPtoPHY_type3->GHead.NewFlag,sizeof(ADPtoPHY_type3->GHead.NewFlag),CACHE_WAIT);
    }


#endif

#else//原始代码
      char i,j;
      //vxx_user_num = USER_NUM;
      for(i = 0;i < vxx_user_num;i++)
      {
        config_para_ptr[i].num_code_word = NUM_CODEWORD_1;
        config_para_ptr[i].ueTransMode = TRANSMIT_DIVERSITY;
        config_para_ptr[i].modulation[0] = QAM16;
        config_para_ptr[i].num_PRB = num_PRB[i];
        config_para_ptr[i].rvIdx = 0;

        if((slot_idx == 2) || (slot_idx == 12))
        {
        	config_para_ptr[i].tbSize[0] = tbSize_subframe1[i];
        }
        else
        	config_para_ptr[i].tbSize[0] = tbSize[i];
        config_para_ptr[i].tbSize_subframe0[0] = tbSize_subframe0[i];
        config_para_ptr[i].tbSize_subframe1[0] = tbSize_subframe1[i];
        config_para_ptr[i].bitmap = bitmap[i];//与num_PRB配合使用,表示起始prb是0
        /*2015.1.14 对参数进行合并整理*/
        config_para_ptr[i].maxNumHarqProcess = 8;
        config_para_ptr[i].numLayers = NUM_LAYER_2;
        config_para_ptr[i].ueCategory = 4;
        config_para_ptr[i].delay_mod = LARGE_DELAY_CDD;
        config_para_ptr[i].PA = 4;

        for(j = 0;j < 10;j++)
        {
          config_para_ptr[i].subframe_direction[j] = up_down_config[2][j];
        }
        //与config_para_ptr->tbSize_subframe0 = 13536对应
        config_para_ptr[i].frame_config = 2;
        config_para_ptr[i].pdcch_num = 1;
        config_para_ptr[i].pdcch_para[0].pdcch_format = 0;
        config_para_ptr[i].pdcch_para[0].DCI_format = Dci1A;
        config_para_ptr[i].pdcch_para[0].dci_bit_len = 31;

        config_para_ptr[i].rnti = 61+i;
        config_para_ptr[i].pdcch_para[0].rnti = 61+i;
        config_para_ptr[i].pdcch_para[0].start_CCE = 0;
        config_para_ptr[i].pdcch_para[0].DCI_data[0] = _bitr(DCI_data[i]);
        config_para_ptr[i].pdcch_para[0].DCI_data[1] = _bitr(0x00000000);
        config_para_ptr[i].pdcch_para[0].common_pdcch = 0;


        //与config_para_ptr->tbSize_subframe1 = 8504对应
        config_para_ptr[i].pdcch_para[1].pdcch_format = 0;
        config_para_ptr[i].pdcch_para[1].DCI_format = Dci1A;
        config_para_ptr[i].pdcch_para[1].dci_bit_len = 31;

        config_para_ptr[i].pdcch_para[1].start_CCE = 0;
        config_para_ptr[i].pdcch_para[1].rnti = 61+i;
        /*2015.1.12mjt修改 特殊子帧与普通子帧使用相同的DCI信息*/
        config_para_ptr[i].pdcch_para[1].DCI_data[0] = _bitr(DCI_data[i]);
        config_para_ptr[i].pdcch_para[1].DCI_data[1] = _bitr(0x00000000);
        config_para_ptr[i].pdcch_para[1].common_pdcch = 0;

        //与config_para_ptr->tbSize = 13536对应
        config_para_ptr[i].pdcch_para[2].pdcch_format = 0;
        config_para_ptr[i].pdcch_para[2].DCI_format = Dci1A;
        config_para_ptr[i].pdcch_para[2].dci_bit_len = 31;

        config_para_ptr[i].pdcch_para[2].start_CCE = 0;
        config_para_ptr[i].pdcch_para[2].rnti = 61+i;
        config_para_ptr[i].pdcch_para[2].DCI_data[0] = _bitr(DCI_data[i]);
        config_para_ptr[i].pdcch_para[2].DCI_data[1] = _bitr(0x00000000);
        config_para_ptr[i].pdcch_para[2].common_pdcch = 0;

        //PHICH

        config_para_ptr[i].phich_para.ACK_NACK = (i & 1);
        config_para_ptr[i].phich_para.n_group = i >> 3;
        config_para_ptr[i].phich_para.n_seq = (i & 7);

      }
#endif
      sfcount++;
      gxx_flag_core1=0;

}
#endif
#if 0
void para_init(CONFIG_PARA* config_para_ptr)
{
    char i;
    config_para_ptr->num_code_word = NUM_CODEWORD_1;

    config_para_ptr->ueTransMode = TRANSMIT_DIVERSITY;
    config_para_ptr->modulation = QPSK;
    config_para_ptr->rnti = 0;
    config_para_ptr->num_PRB = 4;
    config_para_ptr->rvIdx = 0;
    config_para_ptr->tbSize = 392;
    config_para_ptr->tbSize_subframe0 = 256;
    config_para_ptr->tbSize_subframe1 = 176;
    for(i = 0;i < 10;i++)
    {
      config_para_ptr->subframe_direction[i] = up_down_config[2][i];
    }

}
#endif
void cell_para_update(CELL_PARA* cell_para_ptr,
                      unsigned char * restrict rsgen_output_buffer,
                      unsigned int * PSCH_data_buffer,
                      unsigned int * SSCH_data_subframe0_buffer,
                      unsigned int * SSCH_data_subframe5_buffer)
{
    unsigned char n_id_1;
    unsigned char n_id_2;
    FILE* pTestCfgFile;
    unsigned char i;

#ifndef VERSION_719//原始程序部分
    /* 按照默认参数配置 */
        cell_para_ptr->cellID = 0;
        cell_para_ptr->N_cp = NORMAL_CP;
        cell_para_ptr->num_antenna_port = NUM_ANTENNA_PORT_2;
        cell_para_ptr->num_PRB_per_bw_config = 100;
        cell_para_ptr->phich_Durtion = 0;
        cell_para_ptr->g_phich_Ng = 0;
        cell_para_ptr->CFI = 1;

        for(i = 0;i < 10;i++)
        {
          cell_para_ptr->subframe_direction[i] = vxx_config_para_init[0].subframe_direction[i];
        }
        cell_para_ptr->frame_config = vxx_config_para_init[0].frame_config;
        cell_para_ptr->dwpts_symbol = 10;/*config 7*/
        cell_para_ptr->P_B = 1;
#endif//原始程序部分
        cell_para_ptr->subframe_direction[slot_idx>>1] = up_down_config[cell_para_ptr->frame_config][slot_idx>>1];
        cell_para_ptr->dwpts_symbol = 10;/*config 7*/
        switch(cell_para_ptr->num_PRB_per_bw_config)
        {
            case 100:
              cell_para_ptr->dl_Bandwidth = 5;
              break;
            case 75:
                cell_para_ptr->dl_Bandwidth = 4;
                break;
            case 50:
                cell_para_ptr->dl_Bandwidth = 3;
                break;
            case 25:
                cell_para_ptr->dl_Bandwidth = 2;
                break;
            case 15:
                cell_para_ptr->dl_Bandwidth = 1;
                break;
            case 6:
                cell_para_ptr->dl_Bandwidth = 0;
                break;
        }

    if (cell_para_ptr->num_PRB_per_bw_config >= 64)
        cell_para_ptr->RBG_size = 4;/* as RBG = 4RB*/
    else if (cell_para_ptr->num_PRB_per_bw_config >= 27)
        cell_para_ptr->RBG_size = 3; /* as RBG = 3RB*/
    else if (cell_para_ptr->num_PRB_per_bw_config >= 11)
        cell_para_ptr->RBG_size = 2; /* as RBG = 2RB*/
    else if (cell_para_ptr->num_PRB_per_bw_config <= 10)
        cell_para_ptr->RBG_size = 1; /* as RBG = 1RB*/
        
    /* set the start and end SC value occupied by PBCH & SCH on a port */
    cell_para_ptr->PBCHSyncSCStart = ((cell_para_ptr->num_PRB_per_bw_config*N_SC_PER_RB)/2) - 36;
    cell_para_ptr->PBCHSyncSCEnd = ((cell_para_ptr->num_PRB_per_bw_config*N_SC_PER_RB)/2) + 35;
    cell_para_ptr->pbch_modulation_data_ptr = (signed int*)vxx_pbch_modulation_data;
    if(NUM_ANTENNA_PORT_2 == cell_para_ptr->num_antenna_port )
    {
        cell_para_ptr->pbch_pcfich_pdcch_phich_ueTransMode = TRANSMIT_DIVERSITY;
    }
    else
    {
        cell_para_ptr->pbch_pcfich_pdcch_phich_ueTransMode = SINGLE_ANTENNA_PORT;
    }
    cell_para_ptr->pbch_m_symbol = PBCH_SYMBOL_LEN_SLOT0;

    

    rs_sequences_gen(rsgen_output_buffer,/*最多17slot*3symbol*220char,存储的是实虚部共同索引*/
                     cell_para_ptr->cellID,
                     cell_para_ptr->N_cp
                     );
    n_id_1 = cell_para_ptr->cellID / 3;
    n_id_2 = cell_para_ptr->cellID % 3;
    PSCH_data_buffer = &psc_data[n_id_2 * TOTAL_PSC_SSC_SC_NUM];
    SSCH_data_subframe0_buffer = &ssc_subframe0_data[n_id_1 * TOTAL_PSC_SSC_SC_NUM];
    SSCH_data_subframe5_buffer = &ssc_subframe5_data[n_id_1 * TOTAL_PSC_SSC_SC_NUM];
}

unsigned int user_para_update(USER_PARA* user_para_ptr,
                              unsigned char slot_idx,
                              CELL_PARA* cell_para_ptr,
                              CONFIG_PARA* config_para_ptr)
{
    FILE* pTestCfgFile;
    unsigned char rs_symbol;
    unsigned char pbch_ssyc_symbol;
    unsigned char total_symbol;
    unsigned char pbch_symbol7;
    unsigned char i,j,bitmap_length,symb_no;
    signed int  prb_start,prb_num;
    
    for(i = 0;i < 32;i++)
    {
        if(1 == config_para_ptr->bitmap >> (31 - i))
        {
            prb_start = i * cell_para_ptr->RBG_size;
        }
    }
    prb_num = config_para_ptr->num_PRB;
    /*12-4=8:导频所在prb中PDSCH可用子载波个数 rs_symbol:导频符号个数（除去CFI之后的）
    6：PSCH占用的PAB个数
    1:PSCH占用符号个数*/
    
    user_para_ptr->num_code_word =  config_para_ptr->num_code_word;
    user_para_ptr->m_sybol = 0;
    if((slot_idx == 2) || (slot_idx == 12))/*特殊子帧子帧存在PSCH*/
    {
        total_symbol = cell_para_ptr->dwpts_symbol;

        for(j = 0;j < user_para_ptr->num_code_word;j++)
        {
            user_para_ptr->tbSize[j] = config_para_ptr->tbSize[j];//config_para_ptr->tbSize_subframe1[j];/*dwpts为10个符号*/
        }
        
        for(symb_no = cell_para_ptr->CFI;symb_no < total_symbol;symb_no++)
        {
            if((0 == symb_no) || (7 == symb_no) || (4 == symb_no) || (11 == symb_no))//跳过crs
            {
                user_para_ptr->m_sybol += prb_num * SUBCARR_NUM_PRB_DATA;
            }
            else if(2 == symb_no)//跳过pss
            {
                if((prb_start + 1 + prb_num - 1) <= N_DL_RB/2 - 3)  // prb_start必须从0开始
                {
                    user_para_ptr->m_sybol += prb_num * N_SC_PER_RB;
                }
                else if(((prb_start + 1 + prb_num - 1) > N_DL_RB/2 - 3) && ((prb_start + 1 + prb_num - 1) <= N_DL_RB/2 + 3)
                && ((prb_start + 1)<= N_DL_RB/2 - 3))  
                {
                    user_para_ptr->m_sybol += (N_DL_RB/2 - 3 - prb_start) * N_SC_PER_RB;
                }
                else if(((prb_start + 1 + prb_num - 1) > N_DL_RB/2 - 3) && ((prb_start + 1 + prb_num - 1) <= N_DL_RB/2 + 3)
                && ((prb_start + 1) > N_DL_RB/2 - 3) && ((prb_start + 1) <= N_DL_RB/2 + 3))  
                {
                    user_para_ptr->m_sybol += 0;
                }
                else if(((prb_start + 1 + prb_num - 1) >  N_DL_RB/2 + 3)
                && ((prb_start + 1) > N_DL_RB/2 - 3) && ((prb_start + 1) <= N_DL_RB/2 + 3))  
                {
                    user_para_ptr->m_sybol += ((prb_start + prb_num) - N_DL_RB/2 - 3) * N_SC_PER_RB;
                }
                else if(((prb_start + 1 + prb_num - 1) >  N_DL_RB/2 + 3) && ((prb_start + 1) > N_DL_RB/2 + 3))
                {
                    user_para_ptr->m_sybol += prb_num * N_SC_PER_RB;
                }
                else if(((prb_start + 1 + prb_num - 1) >  N_DL_RB/2 + 3) && ((prb_start + 1) <= N_DL_RB/2 - 3))
                {
                    user_para_ptr->m_sybol += (prb_num - 6) * N_SC_PER_RB;
                }
            }
            else//无其他信道/信号
            {
                user_para_ptr->m_sybol += prb_num * N_SC_PER_RB;
            }
        }
        
    }
    else if(slot_idx == 10)/*SSCH存在slot11*/
    {

        total_symbol = 2 * N_SYM_PER_SLOT;
        for(j = 0;j < user_para_ptr->num_code_word;j++)
        {
            user_para_ptr->tbSize[j] = config_para_ptr->tbSize[j];
        }
        for(symb_no = cell_para_ptr->CFI;symb_no < total_symbol;symb_no++)
        {
            if((0 == symb_no) || (7 == symb_no) || (4 == symb_no) || (11 == symb_no))//跳过crs
            {
                user_para_ptr->m_sybol += prb_num * SUBCARR_NUM_PRB_DATA;
            }
            else if(13 == symb_no)     //跳过pbch或sss
            {
                if((prb_start + 1 + prb_num - 1) <= N_DL_RB/2 - 3)  // prb_start必须从0开始
                {
                    user_para_ptr->m_sybol += prb_num * N_SC_PER_RB;
                }
                else if(((prb_start + 1 + prb_num - 1) > N_DL_RB/2 - 3) && ((prb_start + 1 + prb_num - 1) <= N_DL_RB/2 + 3)
                && ((prb_start + 1)<= N_DL_RB/2 - 3))  
                {
                    user_para_ptr->m_sybol += (N_DL_RB/2 - 3 - prb_start) * N_SC_PER_RB;
                }
                else if(((prb_start + 1 + prb_num - 1) > N_DL_RB/2 - 3) && ((prb_start + 1 + prb_num - 1) <= N_DL_RB/2 + 3)
                && ((prb_start + 1) > N_DL_RB/2 - 3) && ((prb_start + 1) <= N_DL_RB/2 + 3))  
                {
                    user_para_ptr->m_sybol += 0;
                }
                else if(((prb_start + 1 + prb_num - 1) >  N_DL_RB/2 + 3)
                && ((prb_start + 1) > N_DL_RB/2 - 3) && ((prb_start + 1) <= N_DL_RB/2 + 3))  
                {
                    user_para_ptr->m_sybol += ((prb_start + prb_num) - N_DL_RB/2 - 3) * N_SC_PER_RB;
                }
                else if(((prb_start + 1 + prb_num - 1) >  N_DL_RB/2 + 3) && ((prb_start + 1) > N_DL_RB/2 + 3))
                {
                    user_para_ptr->m_sybol += prb_num * N_SC_PER_RB;
                }
                else if(((prb_start + 1 + prb_num - 1) >  N_DL_RB/2 + 3) && ((prb_start + 1) <= N_DL_RB/2 - 3))
                {
                    user_para_ptr->m_sybol += (prb_num - 6) * N_SC_PER_RB;
                }
            }
            else    //无其他信道/信号
            {
                user_para_ptr->m_sybol += prb_num * N_SC_PER_RB;
            }
        }
        
    }
    else if(slot_idx == 0)/*PBCH和SSCH存在slot0*/
    {

        total_symbol = 2 * N_SYM_PER_SLOT;

        for(j = 0;j < user_para_ptr->num_code_word;j++)
        {
            user_para_ptr->tbSize[j] = config_para_ptr->tbSize[j];//config_para_ptr->tbSize_subframe0[j];//2015.3.20修改
        }
        for(symb_no = cell_para_ptr->CFI;symb_no < total_symbol;symb_no++)
        {

            if((0 == symb_no) || (4 == symb_no) || (11 == symb_no))   //跳过crs
            {
                user_para_ptr->m_sybol += prb_num * SUBCARR_NUM_PRB_DATA;
            }
            else if((7 == symb_no))     //跳过crs和pbch
            {
                if((prb_start + 1 + prb_num - 1) <= N_DL_RB/2 - 3)  // prb_start必须从0开始
                {
                    user_para_ptr->m_sybol += prb_num * SUBCARR_NUM_PRB_DATA;
                }
                else if(((prb_start + 1 + prb_num - 1) > N_DL_RB/2 - 3) && ((prb_start + 1 + prb_num - 1) <= N_DL_RB/2 + 3)
                && ((prb_start + 1)<= N_DL_RB/2 - 3))  
                {
                    user_para_ptr->m_sybol += (N_DL_RB/2 - 3 - prb_start) * SUBCARR_NUM_PRB_DATA;
                }
                else if(((prb_start + 1 + prb_num - 1) > N_DL_RB/2 - 3) && ((prb_start + 1 + prb_num - 1) <= N_DL_RB/2 + 3)
                && ((prb_start + 1) > N_DL_RB/2 - 3) && ((prb_start + 1) <= N_DL_RB/2 + 3))  
                {
                    user_para_ptr->m_sybol += 0;
                }
                else if(((prb_start + 1 + prb_num - 1) >  N_DL_RB/2 + 3)
                && ((prb_start + 1) > N_DL_RB/2 - 3) && ((prb_start + 1) <= N_DL_RB/2 + 3))  
                {
                    user_para_ptr->m_sybol += ((prb_start + prb_num) - N_DL_RB/2 - 3) * SUBCARR_NUM_PRB_DATA;
                }
                else if(((prb_start + 1 + prb_num - 1) >  N_DL_RB/2 + 3) && ((prb_start + 1) > N_DL_RB/2 + 3))
                {
                    user_para_ptr->m_sybol += prb_num * SUBCARR_NUM_PRB_DATA;
                }
                else if(((prb_start + 1 + prb_num - 1) >  N_DL_RB/2 + 3) && ((prb_start + 1) <= N_DL_RB/2 - 3))
                {
                    user_para_ptr->m_sybol += (prb_num - 6) * SUBCARR_NUM_PRB_DATA;
                }
            }
            else if((8 == symb_no) || (9 == symb_no) || (10 == symb_no) || (13 == symb_no))     //跳过pbch或sss
            {
                if((prb_start + 1 + prb_num - 1) <= N_DL_RB/2 - 3)  // prb_start必须从0开始
                {
                    user_para_ptr->m_sybol += prb_num * N_SC_PER_RB;
                }
                else if(((prb_start + 1 + prb_num - 1) > N_DL_RB/2 - 3) && ((prb_start + 1 + prb_num - 1) <= N_DL_RB/2 + 3)
                && ((prb_start + 1)<= N_DL_RB/2 - 3))  
                {
                    user_para_ptr->m_sybol += (N_DL_RB/2 - 3 - prb_start) * N_SC_PER_RB;
                }
                else if(((prb_start + 1 + prb_num - 1) > N_DL_RB/2 - 3) && ((prb_start + 1 + prb_num - 1) <= N_DL_RB/2 + 3)
                && ((prb_start + 1) > N_DL_RB/2 - 3) && ((prb_start + 1) <= N_DL_RB/2 + 3))  
                {
                    user_para_ptr->m_sybol += 0;
                }
                else if(((prb_start + 1 + prb_num - 1) >  N_DL_RB/2 + 3)
                && ((prb_start + 1) > N_DL_RB/2 - 3) && ((prb_start + 1) <= N_DL_RB/2 + 3))  
                {
                    user_para_ptr->m_sybol += ((prb_start + prb_num) - N_DL_RB/2 - 3) * N_SC_PER_RB;
                }
                else if(((prb_start + 1 + prb_num - 1) >  N_DL_RB/2 + 3) && ((prb_start + 1) > N_DL_RB/2 + 3))
                {
                    user_para_ptr->m_sybol += prb_num * N_SC_PER_RB;
                }
                else if(((prb_start + 1 + prb_num - 1) >  N_DL_RB/2 + 3) && ((prb_start + 1) <= N_DL_RB/2 - 3))
                {
                    user_para_ptr->m_sybol += (prb_num - 6) * N_SC_PER_RB;
                }
            }
            else    //无其他信道/信号
            {
                user_para_ptr->m_sybol += prb_num * N_SC_PER_RB;
            }
        }
        
        
    }
    else
    {
        total_symbol = 2 * N_SYM_PER_SLOT;

        for(j = 0;j < user_para_ptr->num_code_word;j++)
        {
            user_para_ptr->tbSize[j] = config_para_ptr->tbSize[j];
        }
        for(symb_no = cell_para_ptr->CFI;symb_no < total_symbol;symb_no++)
        {
            if((0 == symb_no) || (7 == symb_no) || (4 == symb_no) || (11 == symb_no))//跳过crs
            {
                user_para_ptr->m_sybol += prb_num * SUBCARR_NUM_PRB_DATA;
            }
            else    //无其他信道/信号
            {
                user_para_ptr->m_sybol += prb_num * N_SC_PER_RB;
            }
            
        }

    }

    user_para_ptr->maxNumHarqProcess =config_para_ptr->maxNumHarqProcess;//8
    user_para_ptr->ueTransMode =  config_para_ptr->ueTransMode;
    user_para_ptr->Nir = 1827072/user_para_ptr->maxNumHarqProcess;/*UE等级4*/
    for(j = 0;j < user_para_ptr->num_code_word;j++)
    {
        user_para_ptr->modulation[j] =  config_para_ptr->modulation[j];
    }
    user_para_ptr->numLayers = config_para_ptr->numLayers;//NUM_LAYER_2;

    user_para_ptr->num_PRB = config_para_ptr->num_PRB;
    user_para_ptr->rnti = config_para_ptr->rnti;
    user_para_ptr->ueCategory = config_para_ptr->ueCategory;//4;
    user_para_ptr->rvIdx = config_para_ptr->rvIdx;

    user_para_ptr->delay_mod = config_para_ptr->delay_mod;//LARGE_DELAY_CDD;
    user_para_ptr->P_A = config_para_ptr->PA;//4;
    user_para_ptr->codeWordIdx[0] = 0;
    user_para_ptr->codeWordIdx[1] = 1;
#if 0
    user_para_ptr->tb_ptr[0] = (unsigned int)vxx_tb_buffer;
    //user_para_ptr[0].tb_ptr[1] = (unsigned int)&vxx_tb_buffer[(user_para_ptr[0].tbSize + 31)/32];
    user_para_ptr->tb_ptr[1] = (unsigned int)&vxx_tb_buffer[((MAX_TB_BLOCK_SIZE + 31)/32)];
    //bitmap_length = (vxx_config_para_init.num_PRB + 2) / cell_para_ptr->RBG_size;
#endif

#ifdef VERSION_719//2015.2.1mjt添加，用于MAC层数据源的接收，ue_index1代表BUF序号,ue_index2代表用户序号
    ue_index2 = ue_index%vxx_user_num;
    if(ue_index2 == 0)//根据用户序号计算用户数据结构体地址
    	type1_pdsch_d = (ENB_DL_TYPE1_PDSCH_D*)((char*)ADPtoPHY_type1+ADPtoPHY_type1->DL_TYPE1_PUBLIC_C.PDSCH_D_Offset);
    else
    	type1_pdsch_d = (ENB_DL_TYPE1_PDSCH_D*)((char*)type1_pdsch_d+type1_pdsch_d->pdsch_length+sizeof(ENB_DL_TYPE1_PDSCH_D));
    user_para_ptr->tb_ptr[0] = (unsigned int)((char*)type1_pdsch_d+sizeof(ENB_DL_TYPE1_PDSCH_D));//跳过用户数据结构体参数，读取相应的数据
    if(ue_index2==vxx_user_num-1)
    {
    	/*
    	ue_index1++;//当所有用户数据提取结束,则进入下一个buffer.
    	ADPtoPHY_type1->GHead.NewFlag =0;//NewFlag标志置0
    	CACHE_wbL2((void *)ADPtoPHY_type1->GHead.NewFlag,sizeof(ADPtoPHY_type1->GHead.NewFlag),CACHE_WAIT);
    	*/
    }
    ue_index++;
    if(ue_index==100000000)
    	ue_index = 0;//防止溢出？

#else
    user_para_ptr->tb_ptr[0] = (unsigned int)vxx_tb_buffer;
    //user_para_ptr[0].tb_ptr[1] = (unsigned int)&vxx_tb_buffer[(user_para_ptr[0].tbSize + 31)/32];
    user_para_ptr->tb_ptr[1] = (unsigned int)&vxx_tb_buffer[((MAX_TB_BLOCK_SIZE + 31)/32)];
    //bitmap_length = (vxx_config_para_init.num_PRB + 2) / cell_para_ptr->RBG_size;
#endif
    //2014.11.18mjt添加,用于模拟719数据源的接收,ue_index1代表BUF序号,ue_index2代表用户序号
#if 0
    ue_index1 = ue_index1%PARA_LEN;//循环
    ue_index2 = ue_index%USER_NUM;
    while(type3data[ue_index1].NewParaFlag!=3);
    user_para_ptr->tb_ptr[0] = (unsigned int)type3data[ue_index1].SourcePDSCH[ue_index2];
    user_para_ptr->tb_ptr[1] = (unsigned int)&type3data[ue_index1].SourcePDSCH[ue_index2][((MAX_TB_BLOCK_SIZE + 31)/32)];
    if(ue_index2==USER_NUM-1)
    {
    	type3data[ue_index1].NewParaFlag=0;
    	ue_index1++;//当所有用户数据提取结束,则进入下一个buffer.
    }
    ue_index++;
#endif
    user_para_ptr->bitmap = config_para_ptr->bitmap;
#if 0
    for(i = 0;i < bitmap_length;i++)
    {
        user_para_ptr[0].bitmap = user_para_ptr[0].bitmap | 0x00000001 << (31 - i);
    }
#endif


    for(j = 0;j < user_para_ptr->num_code_word;j++)
    {
        user_para_ptr->numBitsG[j] = user_para_ptr->m_sybol * user_para_ptr->modulation[j];
    }

    return vxx_user_num;

}

void read_cell_para_config(FILE* fp,
                           CELL_PARA* cell_para_ptr)
{
    signed int         i,j;
    signed char            lineBuf[300];
    char*           ptrBuf;
  
    while (fgets (lineBuf, 300, fp) != NULL)
    {
        if ((ptrBuf = strstr(lineBuf, "="))!=NULL)
        {
            ptrBuf ++;
            if (strstr(lineBuf,"NcellID")!=NULL)
            {
                 sscanf(ptrBuf,"%d", &i);
                 cell_para_ptr->cellID = i;
                 continue;
            }
    
            if (strstr(lineBuf,"Ncp")!=NULL)
            {
                 sscanf(ptrBuf,"%d", &i);
                 cell_para_ptr->N_cp = i;
                 continue;
            
            }
            
            if (strstr(lineBuf,"NumAntennaPort")!=NULL)
            {
                 sscanf(ptrBuf,"%d", &i);
                 cell_para_ptr->num_antenna_port = i;
                 continue;
            
            }
            
            if (strstr(lineBuf,"NDLRB")!=NULL)
            {
                 sscanf(ptrBuf,"%d", &i);
                 cell_para_ptr->num_PRB_per_bw_config = i;
                 continue;
            
            }
            
            if (strstr(lineBuf,"CFI")!=NULL)
            {
                 sscanf(ptrBuf,"%d", &i);
                 cell_para_ptr->CFI = i;
                 continue;
            }
            
            if (strstr(lineBuf,"UPDWONCONFIG")!=NULL)
            {
                 sscanf(ptrBuf,"%d", &i);
                 for(j = 0;j < 10;j++)
                 {
                     cell_para_ptr->subframe_direction[j] = up_down_config[i][j];
                 }

                 continue;
            }
            
            if (strstr(lineBuf,"SPECIALCONFIG")!=NULL)
            {
                 sscanf(ptrBuf,"%d", &i);
                 cell_para_ptr->dwpts_symbol = special_config_normal[i][0];
                 continue;
            }
            
            if (strstr(lineBuf,"PB")!=NULL)
            {
                 sscanf(ptrBuf,"%d", &i);
                 cell_para_ptr->P_B = i;
                 continue;
            }
            
        }
    }

    return;
}

void f_dl_database_updata(CELL_PARA* cell_para_ptr,volatile DL_resource_mapping_struct* g_dl_resource_mapping_ptr)//小区参数
{
    unsigned char phich_Ng_table[4] = {4,12,24,48};//{1/6,1/2,1,2} * 24
    int temp_normal,temp_extend,i,n,mi,j,k;
    char symbol0_rs_table[2] = {0,3};
    char symbol0_reg_k_table[8];
    unsigned short symbol0_totall_reg_num,symbol0_pdcch_reg_num;
    unsigned  char temp_map[300];
    unsigned short temp_map1[300];
    unsigned char temp_map2[300];
    unsigned short temp_reg_index = 0;
    int k_line;
    unsigned  char subfn_index = 0;
    unsigned short n0,n1,n2,n_0,n_1,n_2,l0,l1,l2,group_index;
    


    symbol0_totall_reg_num = cell_para_ptr->num_PRB_per_bw_config * 2;//符号0每个RB两个REG资源
    symbol0_rs_table[0] = (symbol0_rs_table[0] + (cell_para_ptr->cellID % 6)) % 6;
    symbol0_rs_table[1] = (symbol0_rs_table[1] + (cell_para_ptr->cellID % 6)) % 6;//根据CELL_ID计算RS的位置，RB单位
    k = 0;
    n = 0;
    for(i = 0;i < 6;i++)//计算可携带控制信息的REG资源位置，RB单位
    {
      if(i == symbol0_rs_table[k])
      {
          k++;
      }
      else
      {
          symbol0_reg_k_table[n++] = i;

      }
    }
    for(i = 0;i < symbol0_totall_reg_num;i++)//计算符号0所有可携带控制信息的REG资源位置（1200载波下）
    {
        g_symbol0_reg_k[i][0] = symbol0_reg_k_table[0] + i * 6;
        g_symbol0_reg_k[i][1] = symbol0_reg_k_table[1] + i * 6;
        g_symbol0_reg_k[i][2] = symbol0_reg_k_table[2] + i * 6;
        g_symbol0_reg_k[i][3] = symbol0_reg_k_table[3] + i * 6;
    }
    //算符号1所有可携带控制信息的REG资源位置（1200载波下）
    if(2 >= cell_para_ptr->num_antenna_port)
    {
        for(i = 0;i < 3 * cell_para_ptr->num_PRB_per_bw_config;i++)
        {
            g_symbol1_reg_k[i][0] = 0 + i * 4;
            g_symbol1_reg_k[i][1] = 1 + i * 4;
            g_symbol1_reg_k[i][2] = 2 + i * 4;
            g_symbol1_reg_k[i][3] = 3 + i * 4;
        }
    }
    else//同符号0一样
    {
        memcpy(&g_symbol1_reg_k[0][0],&g_symbol0_reg_k[0][0],2 * cell_para_ptr->num_PRB_per_bw_config * 4 * sizeof(int));
    }
    //算符号2所有可携带控制信息的REG资源位置（1200载波下）
    for(i = 0;i < 3 * cell_para_ptr->num_PRB_per_bw_config;i++)
    {
        g_symbol2_reg_k[i][0] = 0 + i * 4;
        g_symbol2_reg_k[i][1] = 1 + i * 4;
        g_symbol2_reg_k[i][2] = 2 + i * 4;
        g_symbol2_reg_k[i][3] = 3 + i * 4;
    }
    //计算pcfich位置
    k_line = cell_para_ptr->cellID % (2 * cell_para_ptr->num_PRB_per_bw_config);//直接转换为REG
    memset(temp_map,1,symbol0_totall_reg_num);//初始化REG占用的标准表
    for(i = 0;i < 4;i++)
    {
      temp_reg_index = k_line + ((i * cell_para_ptr->num_PRB_per_bw_config) >> 1);
      temp_map[temp_reg_index] = 0;//PCFICH所占的资源标志置0，表示此处已经被占用
      g_dl_resource_mapping_ptr->pcfich_res[i * 4]     = g_symbol0_reg_k[temp_reg_index][0];
      g_dl_resource_mapping_ptr->pcfich_res[i * 4 + 1] = g_symbol0_reg_k[temp_reg_index][1];
      g_dl_resource_mapping_ptr->pcfich_res[i * 4 + 2] = g_symbol0_reg_k[temp_reg_index][2];
      g_dl_resource_mapping_ptr->pcfich_res[i * 4 + 3] = g_symbol0_reg_k[temp_reg_index][3];
    }
    n = 0;
    for(i = 0;i < symbol0_totall_reg_num;i++)
    {
      if(1 == temp_map[i])//寻找可继续映射PHICH的REG
      {
        temp_map1[n] = i;
        n++;
      }
    }
    //计算PHICH位置
    temp_normal = ((phich_Ng_table[cell_para_ptr->g_phich_Ng] * cell_para_ptr->num_PRB_per_bw_config >> 3) + 23) / 24;
    temp_extend = 2 * ((phich_Ng_table[cell_para_ptr->g_phich_Ng] * cell_para_ptr->num_PRB_per_bw_config >> 3) + 23) / 24;
    n2 = cell_para_ptr->num_PRB_per_bw_config * 3;//符号2没有参考信号
    if(1 == cell_para_ptr->num_antenna_port)
    {
     n1 = cell_para_ptr->num_PRB_per_bw_config * 3;//符号1没有参考信号
     n0 = (cell_para_ptr->num_PRB_per_bw_config * 2) - 4;//去掉参考信号以及4个PCFICH reg
    }
    else if(2 == cell_para_ptr->num_antenna_port)
    {
     n1 = cell_para_ptr->num_PRB_per_bw_config * 3;//符号1没有参考信号
     n0 = (cell_para_ptr->num_PRB_per_bw_config * 2) - 4;//去掉参考信号以及4个PCFICH reg
    }
    else if(4 == cell_para_ptr->num_antenna_port)
    {
        n1 = cell_para_ptr->num_PRB_per_bw_config * 2;//符号1有参考信号
        n0 = (cell_para_ptr->num_PRB_per_bw_config * 2) - 4;//去掉参考信号以及4个PCFICH reg
    }
    else
    {
     /*alarm*/
    }
    g_dl_resource_mapping_ptr->n0 = n0;
    g_dl_resource_mapping_ptr->n1 = n1;
    g_dl_resource_mapping_ptr->n2 = n2;//符号2没有参考信号
    //计算每个子帧的下行控制信道资源位置
    for(subfn_index = 0;subfn_index < MAX_SUBFN_NUM;subfn_index++)
    {
        //计算PCFICH信道的资源位置
        memcpy(temp_map2,temp_map,symbol0_totall_reg_num);
        mi = g_const_phich_mi[cell_para_ptr->frame_config][subfn_index];
        if (0 == cell_para_ptr->N_cp)
        {
          g_N_group_phich[subfn_index] = mi * temp_normal;
        }
        else
        {
          g_N_group_phich[subfn_index] = mi * temp_extend;
        }
        
        for(group_index = 0;group_index < g_N_group_phich[subfn_index];group_index++)//计算PHICH的资源位置
        {
          if(0 == cell_para_ptr->phich_Durtion)
          {
            l0 = 0;
            l1 = 0;
            l2 = 0;
            n_0 = (cell_para_ptr->cellID * n0 / n0 + group_index) % n0;
            n_1 = (cell_para_ptr->cellID * n0 / n0 + n0 / 3 + group_index) % n0;
            n_2 = (cell_para_ptr->cellID * n0 / n0 + 2 * n0 / 3 + group_index) % n0;
            g_dl_resource_mapping_ptr->phich_reg[subfn_index][group_index][0] = temp_map1[n_0];
            g_dl_resource_mapping_ptr->phich_reg[subfn_index][group_index][1] = temp_map1[n_1];
            g_dl_resource_mapping_ptr->phich_reg[subfn_index][group_index][2] = temp_map1[n_2];
            temp_map2[temp_map1[n_0]] = 0;//将PHICH已经占用的资源位置去掉
            temp_map2[temp_map1[n_1]] = 0;
            temp_map2[temp_map1[n_2]] = 0;
          }
          else//extended phich duration
          {
                  //后续
          }
        }
        
        symbol0_pdcch_reg_num = n0 - g_N_group_phich[subfn_index] * 3;
        g_dl_resource_mapping_ptr->symbol_pdcch_reg_num[subfn_index][0] = symbol0_pdcch_reg_num;
        g_dl_resource_mapping_ptr->symbol_pdcch_reg_num[subfn_index][1] = n1;
        g_dl_resource_mapping_ptr->symbol_pdcch_reg_num[subfn_index][2] = n2;
        memcpy((void *)&g_dl_resource_mapping_ptr->reg_unused_flag[subfn_index][0],temp_map2,symbol0_totall_reg_num);



    }

}
void pdcch_database_updata(CELL_PARA* cell_para_ptr,
                          unsigned  char subfn_index)
{
      int pdcch_index = 0;

      int pdcch_cce_total  = 0;
      char pdcch_symbol_num;
      //计算CFI指示的PDCCH符号数
      pdcch_cce_total = 0;
      if((1 == subfn_index) || (6 == subfn_index))
      {
          if(2 == cell_para_ptr->pcfich_index)
          {
            cell_para_ptr->pcfich_index = 1;//特殊子帧不能配置CFI=3
          }
        if(cell_para_ptr->num_PRB_per_bw_config <= 10)
          {
              pdcch_symbol_num = 2;
          }
          else
          {
              pdcch_symbol_num = cell_para_ptr->pcfich_index + 1;
          }
      }
      else
      {
        if(cell_para_ptr->num_PRB_per_bw_config <= 10)
        {
            pdcch_symbol_num = cell_para_ptr->pcfich_index + 2;
        }
        else
        {
            pdcch_symbol_num = cell_para_ptr->pcfich_index + 1;
        }
      }
      if(1 == pdcch_symbol_num)
      {
        cell_para_ptr->pdcch_total_reg_num[subfn_index] = g_dl_resource_mapping.symbol_pdcch_reg_num[subfn_index][0];
      }
      else if(2 == pdcch_symbol_num)
      {
        cell_para_ptr->pdcch_total_reg_num[subfn_index] = g_dl_resource_mapping.symbol_pdcch_reg_num[subfn_index][0]
                                  + g_dl_resource_mapping.symbol_pdcch_reg_num[subfn_index][0];
      }
      else if(3 == pdcch_symbol_num)
      { 
        cell_para_ptr->pdcch_total_reg_num[subfn_index] = g_dl_resource_mapping.symbol_pdcch_reg_num[subfn_index][0]
                                  + g_dl_resource_mapping.symbol_pdcch_reg_num[subfn_index][1]
                                  + g_dl_resource_mapping.symbol_pdcch_reg_num[subfn_index][2];
      }
      else
      {
        ///
      }
      cell_para_ptr->pdcch_total_cce_num[subfn_index] = cell_para_ptr->pdcch_total_reg_num[subfn_index] / 9;
      //PDCCH采用先时域后频域的映射，计算PDCCH的资源位置
      f_dl_pdcch_mapping_k(pdcch_symbol_num,
                           subfn_index,
                           cell_para_ptr);
}
unsigned short f_pdcch_cce_start(unsigned char pdcch_format,
                   unsigned short rnti,
                   unsigned short N_cce,
                   unsigned char subfn,
                   unsigned char common_pdcch_flag
                     )
{
    //计算搜索空间
    unsigned int A = 39827;
    unsigned int D = 65537;
    unsigned short k = 0;
    unsigned int Y[10];
    unsigned char L_common_search[2] = {8,4};
    unsigned char aggregation_level_table[4] = {1,2,4,8};
    unsigned short Y_1,Yk;
    unsigned char index = 0;
    unsigned char L_index = 0;
    unsigned short L,M,cce_satrt_index;
    k = subfn;
    Y_1 =  rnti;
    Y[0] = (A * Y_1) % D;//Y[0]存的是协议中的Y（-1）
    L = aggregation_level_table[pdcch_format];//1,2,4,8
    for(index = 1;index < MAX_SUBFN_NUM + 1;index++)
    {
      Y[index] = (A * Y[index - 1]) % D;
    }
    //搜索公共搜索空间
    if(1 == common_pdcch_flag)//BCCH
    {
        Yk = 0;
        cce_satrt_index = L * ((Yk + 0) % (N_cce/L));
    }
    else//专用搜索空间
    {
        Yk = Y[k + 1];
        cce_satrt_index = L * ((Yk + 0) % (N_cce/L));
    }
    return cce_satrt_index;
}

//计算REG同K的对应关系
void f_dl_pdcch_mapping_k(char pdcch_symbol_num,
                          char subfn_index,
                          CELL_PARA *cell_para_ptr)
{
  unsigned char symbol_index = 0;
  unsigned short n = 0;
  unsigned short symbol0_k = 0;
  unsigned short symbol1_k = 0;
  unsigned short symbol2_k = 0;
  unsigned short out_put_index = 0;
  unsigned char *mapping_table_ptr;
  unsigned char reg_num_per_rb = 0;
  unsigned short N_reg = 0;
  unsigned short N_cce = 0;
  unsigned volatile short *reg_table_ptr;
  reg_table_ptr = &g_dl_resource_mapping.pdcch_mapping_carrier[subfn_index][0];
  if(3 == pdcch_symbol_num)
  {
    if(4 == cell_para_ptr->num_antenna_port)
    {
      mapping_table_ptr = &g_const_pdcch_mapping_table[0][0];
      reg_num_per_rb = 7;//3个符号加起来每个RB可以有7个REG
      N_reg = cell_para_ptr->num_PRB_per_bw_config * 2 + cell_para_ptr->num_PRB_per_bw_config * 2 + cell_para_ptr->num_PRB_per_bw_config * 3;
    }
    else
    {
      mapping_table_ptr = &g_const_pdcch_mapping_table[1][0];
      reg_num_per_rb = 8;//3个符号加起来每个RB可以有8个REG
      N_reg = cell_para_ptr->num_PRB_per_bw_config * 2 + cell_para_ptr->num_PRB_per_bw_config * 3 + cell_para_ptr->num_PRB_per_bw_config * 3;
    }
  }
  else if(2 == pdcch_symbol_num)
  {
    if(4 == cell_para_ptr->num_antenna_port)
    {
      mapping_table_ptr = &g_const_pdcch_mapping_table[2][0];
      reg_num_per_rb = 4;//2个符号加起来每个RB可以有4个REG
      N_reg = cell_para_ptr->num_PRB_per_bw_config * 2 + cell_para_ptr->num_PRB_per_bw_config * 2;
    }
    else
    {
      mapping_table_ptr = &g_const_pdcch_mapping_table[3][0];
      reg_num_per_rb = 5;//2个符号加起来每个RB可以有5个REG
      N_reg = cell_para_ptr->num_PRB_per_bw_config * 2 + cell_para_ptr->num_PRB_per_bw_config * 3;
    }
  }
  else
  {
    mapping_table_ptr = &g_const_pdcch_mapping_table[4][0];
    reg_num_per_rb = 2;//1个符号加起来每个RB可以有2个REG
    N_reg = cell_para_ptr->num_PRB_per_bw_config * 2;
  }

  for(n = 0;n < N_reg;n++)//按照REG编号，顺序寻找到时频位置
  {
    symbol_index = mapping_table_ptr[n % reg_num_per_rb];
    if(0 == symbol_index)
    {
      if(1 == g_dl_resource_mapping.reg_unused_flag[subfn_index][symbol0_k])
      {
        reg_table_ptr[out_put_index * 4] = g_symbol0_reg_k[symbol0_k][0];
        reg_table_ptr[out_put_index * 4 + 1] = g_symbol0_reg_k[symbol0_k][1];
        reg_table_ptr[out_put_index * 4 + 2] = g_symbol0_reg_k[symbol0_k][2];
        reg_table_ptr[out_put_index * 4 + 3] = g_symbol0_reg_k[symbol0_k][3];
        out_put_index++;
      }
      symbol0_k++;
    }
    else if(1 == symbol_index)
    {
      reg_table_ptr[out_put_index * 4] = g_symbol1_reg_k[symbol1_k][0] + 100 * 12;
      reg_table_ptr[out_put_index * 4 + 1] = g_symbol1_reg_k[symbol1_k][1] + 100 * 12;
      reg_table_ptr[out_put_index * 4 + 2] = g_symbol1_reg_k[symbol1_k][2] + 100 * 12;
      reg_table_ptr[out_put_index * 4 + 3] = g_symbol1_reg_k[symbol1_k][3] + 100 * 12;
      out_put_index++;
      symbol1_k++;
    }
    else if(2 == symbol_index)
    {
      reg_table_ptr[out_put_index * 4] = g_symbol2_reg_k[symbol2_k][0] + 100 * 12 * 2;
      reg_table_ptr[out_put_index * 4 + 1] = g_symbol2_reg_k[symbol2_k][1] + 100 * 12 * 2;
      reg_table_ptr[out_put_index * 4 + 2] = g_symbol2_reg_k[symbol2_k][2] + 100 * 12 * 2;
      reg_table_ptr[out_put_index * 4 + 3] = g_symbol2_reg_k[symbol2_k][3] + 100 * 12 * 2;
      out_put_index++;
      symbol2_k++;
    }
    else
    {
      //alarm!
    }
  }
  cell_para_ptr->reg_unused_num[subfn_index] =  out_put_index;
  //CACHE_wbL2(&cell_para_ptr->reg_unused_num[subfn_index],sizeof(cell_para_ptr->reg_unused_num[subfn_index]),CACHE_WAIT);
}
//计算REG同K的对应关系
void f_dl_phich_mapping(char subfn_index,
                      char N_group,
                      unsigned short *phich_mapping_ptr)
{
    unsigned char symbol_index = 0;
    unsigned short n = 0,i = 0;
    unsigned short reg_index = 0;
    unsigned short symbol0_k = 0;
    unsigned short symbol1_k = 0;
    unsigned short symbol2_k = 0;
    unsigned short out_put_index = 0;
    unsigned char *mapping_table_ptr;
    unsigned char reg_num_per_rb = 0;
    unsigned short N_reg = 0;
    unsigned short N_cce = 0;
    unsigned short *mapping_temp_ptr;
    int reg_index0,reg_index1,reg_index2,reg_index3;

    mapping_temp_ptr = phich_mapping_ptr;
    for(n = 0;n < N_group;n++)
    {
        for(i = 0;i < 3;i++)
        {
          reg_index = g_dl_resource_mapping.phich_reg[subfn_index][n][i];
          mapping_temp_ptr[i * 4 + 0] = g_symbol0_reg_k[reg_index][0];
          mapping_temp_ptr[i * 4 + 1] = g_symbol0_reg_k[reg_index][1];
          mapping_temp_ptr[i * 4 + 2] = g_symbol0_reg_k[reg_index][2];
          mapping_temp_ptr[i * 4 + 3] = g_symbol0_reg_k[reg_index][3];
        }
        mapping_temp_ptr+=12;
    }
}
#if 0
void read_user_para_config(FILE* fp,USER_PARA* user_para_ptr,CELL_PARA* cell_para_ptr)
{
    signed int         i;
    signed char        lineBuf[300];
    char*       ptrBuf;
    
  
    while (fgets (lineBuf, 300, fp) != NULL)
    {
        if ((ptrBuf = strstr(lineBuf, "="))!=NULL)
        {
            ptrBuf ++;
            if (strstr(lineBuf,"Ncodeword")!=NULL)
            {
                 sscanf(ptrBuf,"%d", &i);
                 user_para_ptr[0].num_code_word = i;
                 continue;
            }
    
            if (strstr(lineBuf,"tbSize")!=NULL)
            {
                 sscanf(ptrBuf,"%d", &i);
                 user_para_ptr[0].tbSize = i;
                 continue;
            
            }
            
            if (strstr(lineBuf,"MaxNumHarqProcess")!=NULL)
            {
                 sscanf(ptrBuf,"%d", &i);
                 user_para_ptr[0].maxNumHarqProcess = i;
                 continue;
            
            }
            
            if (strstr(lineBuf,"ueTransMode")!=NULL)
            {
                 sscanf(ptrBuf,"%d", &i);
                 user_para_ptr[0].ueTransMode = i;
                 continue;
            
            }
            
            if (strstr(lineBuf,"Nir")!=NULL)
            {
                 sscanf(ptrBuf,"%d", &i);
                 user_para_ptr[0].Nir = i / user_para_ptr[0].maxNumHarqProcess;
                 continue;
            }
            
            if (strstr(lineBuf,"modulation")!=NULL)
            {
                 sscanf(ptrBuf,"%d", &i);
                 user_para_ptr[0].modulation = i;
                 continue;
            }
            
            if (strstr(lineBuf,"NUMLAYER")!=NULL)
            {
                 sscanf(ptrBuf,"%d", &i);
                 
                 user_para_ptr[0].numLayers = i;
                 continue;
            }

            
            if (strstr(lineBuf,"bitmap")!=NULL)
            {
                 sscanf(ptrBuf,"%d", &i);
                 
                 user_para_ptr[0].bitmap = i;
                 user_para_ptr[0].num_PRB = 0;
                 for(i = 0;i < 32;i++)
                 {
                   user_para_ptr[0].num_PRB += ((user_para_ptr[0].bitmap >> i) & 1) * cell_para_ptr->RBG_size;
                 }
                 continue;
            }
            
            if (strstr(lineBuf,"rnti")!=NULL)
            {
                 sscanf(ptrBuf,"%d", &i);
                 
                 user_para_ptr[0].rnti = i;
                 continue;
            }
            
            if (strstr(lineBuf,"ueCategory")!=NULL)
            {
                 sscanf(ptrBuf,"%d", &i);
                 
                 user_para_ptr[0].ueCategory = i;
                 continue;
            }
            
            if (strstr(lineBuf,"rvIdx")!=NULL)
            {
                 sscanf(ptrBuf,"%d", &i);
                 
                 user_para_ptr[0].rvIdx = i;
                 continue;
            }
            
            if (strstr(lineBuf,"DelayMod")!=NULL)
            {
                 sscanf(ptrBuf,"%d", &i);
                 
                 user_para_ptr[0].delay_mod = i;
                 continue;
            }
            
            if (strstr(lineBuf,"PA")!=NULL)
            {
                 sscanf(ptrBuf,"%d", &i);
                 
                 user_para_ptr[0].P_A = i;
                 continue;
            }

            
        }
    }

    return;
}
#endif

void BS_DSP0_Core0_Para_Update(void)
{
	para_init(vxx_config_para_init,&vxx_cell_para);
	cell_para_update(&vxx_cell_para,
	                           &rsgen_output[0][0][0],
	                           psch_data_ptr,
	                           ssch_data_subframe0_buffer,
	                           ssch_data_subframe5_buffer);/*小区参数配置后不会改变*/
	f_dl_database_updata(&vxx_cell_para,&g_dl_resource_mapping);
	pdcch_database_updata(&vxx_cell_para,
	                       slot_idx >> 1);
	f_dl_phich_mapping(slot_idx >> 1,
	                             g_N_group_phich[slot_idx >> 1],
	                             &g_phich_data.phich_mapping[slot_idx >> 1][0]);


}
