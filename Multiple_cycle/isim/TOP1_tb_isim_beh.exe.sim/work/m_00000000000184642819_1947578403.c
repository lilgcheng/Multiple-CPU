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
static const char *ng0 = "C:/Verliog_practice/Multiple_cycle/ALU_control.v";
static unsigned int ng1[] = {4U, 0U};
static unsigned int ng2[] = {32U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {34U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {36U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {37U, 0U};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {38U, 0U};
static unsigned int ng11[] = {15U, 0U};
static unsigned int ng12[] = {5U, 0U};
static unsigned int ng13[] = {14U, 0U};
static unsigned int ng14[] = {6U, 0U};



static void Always_58_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 5384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 5704);
    *((int *)t2) = 1;
    t3 = (t0 + 5416);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(58, ng0);

LAB5:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 3904U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(71, ng0);

LAB28:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3904U);
    t3 = *((char **)t2);

LAB29:    t2 = ((char*)((ng3)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t30 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t30 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t30 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t30 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng12)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t30 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng14)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t30 == 1)
        goto LAB40;

LAB41:
LAB43:
LAB42:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng11)));
    t4 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);

LAB44:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(59, ng0);

LAB13:    xsi_set_current_line(60, ng0);
    t28 = (t0 + 4064U);
    t29 = *((char **)t28);

LAB14:    t28 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 6, t28, 6);
    if (t30 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 6, t2, 6);
    if (t30 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng6)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 6, t2, 6);
    if (t30 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 6, t2, 6);
    if (t30 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 6, t2, 6);
    if (t30 == 1)
        goto LAB23;

LAB24:
LAB26:
LAB25:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB27:    goto LAB12;

LAB15:    xsi_set_current_line(61, ng0);
    t31 = ((char*)((ng3)));
    t32 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 4, 0LL);
    goto LAB27;

LAB17:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB27;

LAB19:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB27;

LAB21:    xsi_set_current_line(64, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB27;

LAB23:    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB27;

LAB30:    xsi_set_current_line(73, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    goto LAB44;

LAB32:    xsi_set_current_line(74, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    goto LAB44;

LAB34:    xsi_set_current_line(75, ng0);
    t4 = ((char*)((ng12)));
    t5 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    goto LAB44;

LAB36:    xsi_set_current_line(76, ng0);
    t4 = ((char*)((ng11)));
    t5 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    goto LAB44;

LAB38:    xsi_set_current_line(77, ng0);
    t4 = ((char*)((ng13)));
    t5 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    goto LAB44;

LAB40:    xsi_set_current_line(78, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    goto LAB44;

}


extern void work_m_00000000000184642819_1947578403_init()
{
	static char *pe[] = {(void *)Always_58_0};
	xsi_register_didat("work_m_00000000000184642819_1947578403", "isim/TOP1_tb_isim_beh.exe.sim/work/m_00000000000184642819_1947578403.didat");
	xsi_register_executes(pe);
}
