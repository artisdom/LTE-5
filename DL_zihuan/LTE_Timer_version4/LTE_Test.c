
#include <stdio.h>
#include <string.h>
#include <SRIO_drv.h>
//#include <TSC_module.h>
#include "TSC.h"
#include "pl_comm.h"
//#define DstDevId 		0x66						//目标设备ID号
//#define DstDevId 		0x06
#define DstDevId 		0x05//0x70//0x05//
#define DstDevId_719    0x40
#define HOP_COUNT		1
extern unsigned int ifft_subframe[];
#define SUBFRAME_LEN      30720/*1ms的点数*/
#define NUM_MAX_ANTENNA   2/*天线个数*/
//extern unsigned int ifft_subframe[];
//extern Uint8 g_ucDoorbellIntrFlag;
extern SRIO_Trans_Config transParameter[];
Uint32 varBuffer = 2;
extern CSL_SrioHandle      hSrio;		//这是个指针，指向的SRIO的寄存器
//#pragma DATA_SECTION(ifft_subframe, ".testData")
#pragma CODE_SECTION (LTE_Test, ".text:srio_section:dsp_srio");
/********************************************************************************************
程序修改说明：
1.仿照CT程序，给srio发送函数添加了两个形参：unsigned char slot_index和int antport_num；
  slot_index可以用来给LsuConfigObj.doorbellInfo赋值；antport_num用来控制门铃的有无，我们希望端口0不发送门铃，端口1数据发送后附加一个门铃。
  Author:  cs
  time:    14/11/06
********************************************************************************************/

void LTE_Test(unsigned char slot_index,Uint8 antport_num,unsigned char event)  //cs 14/11/06
{
	Uint32 						Err;
	SrioCompCode 				ucCompleteCode;
	SRIO_Trans_Config 			transPara;
	unsigned short				device_id;

	transPara= event==0?transParameter[0]:transParameter[1];
	device_id= event==0?DstDevId:DstDevId_719;
	SRIO_Maint_Config 			maintPara = {0};
	Uint32           	uiLoop,uiCount;
	Uint32				uiByte = transPara.byte_count;
	Uint32				pGlobalAddress;
//	volatile Uint32 	*pLocalData;
	//volatile Uint32     *input_data_ptr1;
	 Uint32   *input_data_ptr1;
	 Uint32 *pLocalData;
	 Uint16 DoorbellInfo;

	 DoorbellInfo=slot_index/2;

//开启SRIO模块的句柄，需要运行在测试之前，后期可加入到接口初始化模块中
	hSrio = CSL_SRIO_Open (CSL_SRIO);
	/** Validate opened handle */
	if ( (hSrio == NULL) )
	{
		printf("CSL_srioOpen() failed!\n");
		return;
	}

	/* Clear destination memory */
//	memset((void *)transPara.local_addr, 0, transPara.byte_count);



	/* Write pattern in local memory */
//	pLocalData = (Uint32 *)transPara.local_addr;

/*
	unsigned int ifft_subframe[]=
		{
		    #include "pcfich_pbch_pdcch_10ue_ifft_data_subframe0.dat"
		   // #include "pcfich_pbch_pdcch_10ue_ifft_data_subframe1.dat"
		   // #include "pcfich_pbch_pdcch_10ue_ifft_data_subframe3.dat"
		    //#include "pcfich_pbch_pdcch_10ue_ifft_data_subframe4.dat"
		   // #include "pcfich_pbch_pdcch_10ue_ifft_data_subframe5.dat"
		   // #include "pcfich_pbch_pdcch_10ue_ifft_data_subframe6.dat"
		   // #include "pcfich_pbch_pdcch_10ue_ifft_data_subframe8.dat"
		   // #include "pcfich_pbch_pdcch_10ue_ifft_data_subframe9.dat"

		};
		*/
		//input_data_ptr1 = &ifft_subframe[ SUBFRAME_LEN * NUM_MAX_ANTENNA];
//		memcpy(pLocalData,&ifft_subframe[0],SUBFRAME_LEN*8);


/*
	for (uiLoop = 0; uiLoop < uiByte/4; uiLoop++)
		*pLocalData++ = 0xA;
                              */
	//for( uiCount=0;uiCount<100;++uiCount )
	for( uiCount=0;uiCount<1;++uiCount )
	{
		/* Write pattern in local memory */
		//memset((void *)transPara.local_addr, uiCount+1, transPara.byte_count);
		//pLocalData = (Uint32 *)transPara.local_addr;
		//for (uiLoop = 0; uiLoop < uiByte/4; uiLoop++)
			//(*pLocalData++) ++;
        unsigned int start=0,cycle;
        start=TSCL;
#if 0
		Err = SRIO_NWrite (
						&transPara,
						DstDevId,
						&ucCompleteCode );
		if (Err)
		{
			printf("SRIO_NWrite() return failed!!, ErrorCode = 0x%x\n",Err);
			return;
		}
		cycle=TSC_delay_cycle(start);

		puts("\nNWrite is over!\n");
		printf("CYCLE %d:%d\n",uiCount,cycle);
#endif
#if 0
		/* Write pattern in local memory */
		pLocalData = (Uint32 *)transPara.local_addr;
		for (uiLoop = 0; uiLoop < uiByte/4; uiLoop++)
			(*pLocalData++) ++;

		Err = SRIO_NRead (
						&transPara,
						DstDevId,
						&ucCompleteCode );
		if (Err)
		{
			printf("SRIO_NRead() return failed!!, ErrorCode = 0x%x\n",Err);
			return;
		}
		puts("\nNRead is over!\n");
#endif
#if 0



		Err = SRIO_Doorbell (
						&transPara,
						DstDevId,
						0x1,
						&ucCompleteCode );
		if (Err)
		{
			printf("SRIO_Doorbell() return failed!!, ErrorCode = 0x%x\n",Err);
			return;
		}
		cycle=TSC_delay_cycle(start);
		puts("\nMaster has sent doorbell!\n");
		printf("CYCLE %d:%d\n",uiCount,cycle);
#endif
#if 0


	//测试maintenance
		/* Calculate the global SRAM address required for the EDMA transfer */
		pGlobalAddress = (Uint32)GET_C64X_GLOBAL_ADDR( (Uint32)&varBuffer );

		/* Read Slave DSP COMP_TAG */
		maintPara.remote_addrL = 0x006C;
		maintPara.local_addr   = (Uint32)pGlobalAddress;
		maintPara.srioPortNum  = SRIO_PORT_0;
		maintPara.srioLsuNum   = SRIO_LSU_NUM_0;

		Err = SrioMaintRdSync (	maintPara,
								DstDevId,
								HOP_COUNT,
								&ucCompleteCode );

		if (Err)
		{
			printf("SrioMaintRdSync() return failed!!, ErrorCode = 0x%x\n",Err);
			return;
		}
		if(ucCompleteCode != 0)
			printf("SrioMaintRdSync() transfer failed, Completion Code:0x%x\n",ucCompleteCode);
		else
			printf("COMP_TAG read successfully!!COMP_TAG: 0x%08x\n",varBuffer);

		//调用maintenance_write写COMP_TAG
		varBuffer += 2;
		/* Calculate the global SRAM address required for the EDMA transfer */
		pGlobalAddress = (Uint32)GET_C64X_GLOBAL_ADDR( (Uint32)&varBuffer );
		/* Change DSP component tag */
		maintPara.remote_addrL = 0x006C;
		maintPara.local_addr   = (Uint32)pGlobalAddress;
		maintPara.srioPortNum  = SRIO_PORT_0;
		maintPara.srioLsuNum   = SRIO_LSU_NUM_0;

		Err = SrioMaintWrSync (	maintPara,
								DstDevId,
								HOP_COUNT,
								&ucCompleteCode );

		if (Err)
		{
			printf("SrioMaintWrSync() return failed!!, ErrorCode = 0x%x\n",Err);
			return;
		}
		if(ucCompleteCode != 0)
			printf("SrioMaintWrSync() transfer failed, Completion Code:0x%x\n",ucCompleteCode);
		else
			printf("COMP_TAG Write successfully!\n");

		Err = SrioMaintRdSync (	maintPara,
								DstDevId,
								HOP_COUNT,
								&ucCompleteCode );

		if (Err)
		{
			printf("SrioMaintRdSync() return failed!!, ErrorCode = 0x%x\n",Err);
			return;
		}
		if(ucCompleteCode != 0)
			printf("SrioMaintRdSync() transfer failed, Completion Code:0x%x\n",ucCompleteCode);
		else
			printf("COMP_TAG read successfully!!COMP_TAG: 0x%08x\n",varBuffer);



		/* Write pattern in local memory */
		pLocalData = (Uint32 *)transPara.local_addr;
		for (uiLoop = 0; uiLoop < uiByte/4; uiLoop++)
			(*pLocalData++) ++;

		/* Copy the pattern to slave DSP memory */
#endif

#if 1
		Err = SRIO_SWriteWithDoorbell (
									&transPara,
									device_id,
									antport_num,
									 DoorbellInfo,
									&ucCompleteCode );//原值为0x01，现根据需要改为subframe_num   cs  14/11/06

		if (Err)
		{
			printf("SRIO_SendWithDoorbell() return failed!!, ErrorCode = 0x%x\n",Err);
			return;
		}
		if(ucCompleteCode != 0)
		{
			printf("SRIO_SendWithDoorbell() transfer failed, Completion Code:0x%x\n",ucCompleteCode);
		}
		//puts("SWrite is over!\n");
		//cycle=TSC_delay_cycle(start);
		//printf("CYCLE %d:%d\n",uiCount,cycle);
		//CycleDelay(1000000000);
		//CycleDelay(5e3);

#endif
	}
}

int BS_DSP0_Core0_SRIOSEND(unsigned short slot_idx,int buf_len,unsigned int loc_add)
{
	int i=0,send_num=13,port;

	if (slot_idx==2||slot_idx==12)
	    send_num = 9;//特殊子帧

	transParameter[0].local_addr = loc_add;//源地址初始化为保存数据

	for(i=0;i<=send_num;i++)
	{
		if(buf_len%BUF_LEN==0&&i==0)
		{
			transParameter[0].remote_addrL =  0x89AC4800;//每发送BUF_LEN个子帧,接收端从头开始读取数据进行处理(FIFO)
		}

		port=0;
	    LTE_Test(slot_idx,port,0);
	    cfg_change(i,port,slot_idx);

		port=1;
		LTE_Test(slot_idx,port,0);
		cfg_change(i,port,slot_idx);

		//CycleDelay(71428);
	}
	return buf_len+1;
}
