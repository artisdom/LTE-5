/***********************************************/
/*f_phich_data_gen.c                                */
/*功能：phich数据生成                     */
/***********************************************/
#include "system_init.h"
#include "pl_comm.h"

void f_phich_data_gen(unsigned char n_seq,
                  unsigned char HI,
                  unsigned int phich_pseudo,
                  int *phich_data_ptr)
{
    unsigned char i = 0;
    unsigned char phich_scrambling[12];
    short w[8];
    int    temp_real = 0;     /*临时变量*/
    int    temp_imag = 0;     /*临时变量*/
    int    spreading_factor[12] = {0}; /*等效扩频因子*/
    int    bpsk_symbol = 0;
    for (i = 0; i < 12; i++)
    {
        phich_scrambling[i] = _extu(phich_pseudo,i,31);
    }
      /*第0组1 1 1 1*/
    if(0 == n_seq)
    {
        w[0] = 0x7fff;
        w[1] = 0;
        w[2] = 0x7fff;
        w[3] = 0;
        w[4] = 0x7fff;
        w[5] = 0;
        w[6] = 0x7fff;
        w[7] = 0;
    }
    /*第1组1 -1 1 -1*/
    else if (1 == n_seq)
    {
        w[0] = 0x7fff;
        w[1] = 0;
        w[2] = 0x8001;
        w[3] = 0;
        w[4] = 0x7fff;
        w[5] = 0;
        w[6] = 0x8001;
        w[7] = 0;
    }
    /*第2组1 1 -1 -1*/
    else if (2 == n_seq)
    {
        w[0] = 0x7fff;
        w[1] = 0;
        w[2] = 0x7fff;
        w[3] = 0;
        w[4] = 0x8001;
        w[5] = 0;
        w[6] = 0x8001;
        w[7] = 0;
    }
    /*第3组1 -1 -1 1*/
    else if (3 == n_seq)
    {
        w[0] = 0x7fff;
        w[1] = 0;
        w[2] = 0x8001;
        w[3] = 0;
        w[4] = 0x8001;
        w[5] = 0;
        w[6] = 0x7fff;
        w[7] = 0;
    }
    /*第4组j j j j*/
    else if (4 == n_seq)
    {
        w[0] = 0;
        w[1] = 0x7fff;
        w[2] = 0;
        w[3] = 0x7fff;
        w[4] = 0;
        w[5] = 0x7fff;
        w[6] = 0;
        w[7] = 0x7fff;
    }
    /*第5组j -j j -j*/
    else if (5 == n_seq)
    {
        w[0] = 0;
        w[1] = 0x7fff;
        w[2] = 0;
        w[3] = 0x8001;
        w[4] = 0;
        w[5] = 0x7fff;
        w[6] = 0;
        w[7] = 0x8001;
    }
    /*第6组j j -j -j*/
    else if (6 == n_seq)
    {
        w[0] = 0;
        w[1] = 0x7fff;
        w[2] = 0;
        w[3] = 0x7fff;
        w[4] = 0;
        w[5] = 0x8001;
        w[6] = 0;
        w[7] = 0x8001;
    }
      /*第7组j -j -j j*/
    else if (7 == n_seq)
    {
        w[0] = 0;
        w[1] = 0x7fff;
        w[2] = 0;
        w[3] = 0x8001;
        w[4] = 0;
        w[5] = 0x8001;
        w[6] = 0;
        w[7] = 0x7fff;
    }
    /*下面计算等效扩频因子*/
    /*等于扩频因子乘以扰码取共轭*/
    for (i = 0;i < 12; i++)
    {
        temp_real = (1 - 2* phich_scrambling[i])* w[2* (i%4)];
        temp_imag = (1 - 2* phich_scrambling[i])* w[2* (i%4) + 1];
        /*分别取出实部和虚部*/
        spreading_factor[i] = _pack2(temp_real,temp_imag);
    }
    for(i = 0;i < 3;i++)
    {
        bpsk_symbol = g_phich_bpsk_symbol[HI][i];/**/
        phich_data_ptr[i * 4 + 0] = _cmpyr1(bpsk_symbol,spreading_factor[i * 4 + 0]);
        phich_data_ptr[i * 4 + 1] = _cmpyr1(bpsk_symbol,spreading_factor[i * 4 + 1]);
        phich_data_ptr[i * 4 + 2] = _cmpyr1(bpsk_symbol,spreading_factor[i * 4 + 2]);
        phich_data_ptr[i * 4 + 3] = _cmpyr1(bpsk_symbol,spreading_factor[i * 4 + 3]);
    }
}
