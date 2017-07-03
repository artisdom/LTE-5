/*
 * BS_DSP0_CORE0_PDSCH.C
 *
 *  Created on: 2015-5-6
 *      Author: JIEXIANG
 */

#include "system_init.h"
#include "pl_comm.h"

extern unsigned volatile short slot_idx;

void BS_DSP0_Core0_PDSCH(unsigned int user_index,
		                 int * precoding_data_buffer[])
{
	unsigned int flag;

    (void)user_para_update(&vxx_user_para[user_index],slot_idx,
						   &vxx_cell_para,
						   &vxx_config_para_init[user_index]);/*�û�������ÿ����֡Ϊ��λ���¶�ȡ,��֧��һ���û�*/
	flag = 0;

	flag = bcp_lte_pdsch(&vxx_user_para[user_index],
					     &vxx_cell_para,
						 slot_idx);

	CSL_XMC_invalidatePrefetchBuffer();
  		  		             _mfence();
  		  		             _mfence();
	CACHE_invL2((signed int*)vxx_user_para[user_index].modulation_data_ptr[0], 4*vxx_user_para[user_index].m_sybol, CACHE_WAIT);
	CACHE_invL2((signed int*)vxx_user_para[user_index].modulation_data_ptr[1], 4*vxx_user_para[user_index].m_sybol, CACHE_WAIT);

    if(1 == flag)
	{
    	if(((SPATIAL_MULTIPLEXING == vxx_user_para[user_index].ueTransMode) && (NUM_CODEWORD_1 == vxx_user_para[user_index].num_code_word))
		   || ((TRANSMIT_DIVERSITY == vxx_user_para[user_index].ueTransMode) && (NUM_CODEWORD_1 == vxx_user_para[user_index].num_code_word)))
		{
		    layermapping(
					     (signed int*)vxx_user_para[user_index].modulation_data_ptr[0],/*����0���ƺ�ķ��� Q(16,3)*/
						 (signed int*)vxx_user_para[user_index].modulation_data_ptr[1],/*����1���ƺ�ķ��� Q(16,3)*/
						 vxx_layermapping_fft_data.layermapping_data,/*��ӳ���ķ��� Q(16,3)*/
						 vxx_user_para[user_index].m_sybol,/*����0���ƺ�ķ��Ÿ���,��user_para_update�м���*/
						 &vxx_user_para[user_index].laryer_symbol,/*��ӳ����ÿ����Ÿ���*/
						 vxx_user_para[user_index].numLayers,/*����*/
						 vxx_user_para[user_index].num_code_word,/*���ָ���*/
					     vxx_user_para[user_index].ueTransMode/*���д���ģʽ*/
						);
		    precoding(
					  precoding_data_buffer,/*Ԥ�����ķ��� Q(16,3)*/
					  &vxx_user_para[user_index].m_ap_symbol,/*Ԥ�����ķ��Ÿ���*/
					  vxx_layermapping_fft_data.layermapping_data,/*��ӳ���ķ��� Q(16,3)*/
					  vxx_layermapping_fft_data.layermapping_data + vxx_user_para[user_index].laryer_symbol,
					  vxx_user_para[user_index].laryer_symbol,/*��ӳ����ÿ����Ÿ���,��2�ı�����*/
					  vxx_user_para[user_index].numLayers,/*����*/
					  vxx_cell_para.num_antenna_port,/*���߶˿ڸ���*/
					  vxx_user_para[user_index].ueTransMode,/*���д���ģʽ*/
					  vxx_user_para[user_index].delay_mod /*��ʱģʽ*/
					 );
		}
		if((SPATIAL_MULTIPLEXING == vxx_user_para[user_index].ueTransMode) && (NUM_CODEWORD_2 == vxx_user_para[user_index].num_code_word))
		{
		    precoding(
					  precoding_data_buffer,/*Ԥ�����ķ��� Q(16,3)*/
					  &vxx_user_para[user_index].m_ap_symbol,/*Ԥ�����ķ��Ÿ���*/
					  (signed int*)vxx_user_para[user_index].modulation_data_ptr[0],/*����0���ƺ�ķ��� Q(16,3)*/
					  (signed int*)vxx_user_para[user_index].modulation_data_ptr[1],/*����1���ƺ�ķ��� Q(16,3)*/
					  vxx_user_para[user_index].m_sybol,/*��ӳ����ÿ����Ÿ���,��2�ı�����*/
					  vxx_user_para[user_index].numLayers,/*����*/
					  vxx_cell_para.num_antenna_port,/*���߶˿ڸ���*/
					  vxx_user_para[user_index].ueTransMode,/*���д���ģʽ*/
					  vxx_user_para[user_index].delay_mod /*��ʱģʽ*/
					 );
		}


    }
 }

