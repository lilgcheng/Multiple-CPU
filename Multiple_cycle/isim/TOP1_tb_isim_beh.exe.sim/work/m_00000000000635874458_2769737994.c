/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Verliog_practice/Multiple_cycle/SE.v";
static unsigned int ng1[] = {0U, 0U};



static void Cont_29_0(char *t0)
{
    char t3[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 2640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1320U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 16, t2, 16, t5, 16);
    xsi_vlogtype_concat(t3, 32, 16, 1U, t6, 16);
    t4 = (t0 + 3040);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t3, 8);
    xsi_driver_vfirst_trans(t4, 0, 31);
    t11 = (t0 + 2960);
    *((int *)t11) = 1;

LAB1:    return;
}


extern void work_m_00000000000635874458_2769737994_init()
{
	static char *pe[] = {(void *)Cont_29_0};
	xsi_register_didat("work_m_00000000000635874458_2769737994", "isim/TOP1_tb_isim_beh.exe.sim/work/m_00000000000635874458_2769737994.didat");
	xsi_register_executes(pe);
}
