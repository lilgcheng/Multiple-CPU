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
static const char *ng0 = "C:/Verliog_practice/Multiple_cycle/Mem.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {4227858436U, 0U};
static int ng3[] = {4, 0};
static unsigned int ng4[] = {4227923972U, 0U};
static int ng5[] = {8, 0};
static unsigned int ng6[] = {4227989509U, 0U};
static int ng7[] = {12, 0};
static unsigned int ng8[] = {4228055046U, 0U};
static int ng9[] = {16, 0};
static unsigned int ng10[] = {4228120583U, 0U};
static int ng11[] = {20, 0};
static unsigned int ng12[] = {2896494600U, 0U};
static int ng13[] = {24, 0};
static unsigned int ng14[] = {2898657289U, 0U};
static int ng15[] = {28, 0};
static unsigned int ng16[] = {539426822U, 0U};
static int ng17[] = {32, 0};
static unsigned int ng18[] = {4407328U, 0U};
static int ng19[] = {36, 0};
static unsigned int ng20[] = {6440994U, 0U};
static int ng21[] = {40, 0};
static unsigned int ng22[] = {6443044U, 0U};
static int ng23[] = {44, 0};
static unsigned int ng24[] = {6445094U, 0U};
static int ng25[] = {48, 0};
static unsigned int ng26[] = {2364276736U, 0U};
static int ng27[] = {52, 0};
static unsigned int ng28[] = {271187976U, 0U};
static int ng29[] = {84, 0};
static unsigned int ng30[] = {134217744U, 0U};
static unsigned int ng31[] = {0U, 4294967295U};



static void Always_35_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 3144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 3960);
    *((int *)t2) = 1;
    t3 = (t0 + 3176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng21)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng23)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng25)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng27)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng29)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB35;

LAB36:
LAB38:
LAB37:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng31)));
    t3 = (t0 + 2064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB39:    goto LAB2;

LAB7:    xsi_set_current_line(39, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 2064);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB39;

LAB9:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2064);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB39;

LAB11:    xsi_set_current_line(41, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 2064);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB39;

LAB13:    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 2064);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB39;

LAB15:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 2064);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB39;

LAB17:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 2064);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB39;

LAB19:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 2064);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB39;

LAB21:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 2064);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB39;

LAB23:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 2064);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB39;

LAB25:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 2064);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB39;

LAB27:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t0 + 2064);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB39;

LAB29:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng24)));
    t4 = (t0 + 2064);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB39;

LAB31:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng26)));
    t4 = (t0 + 2064);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB39;

LAB33:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng28)));
    t4 = (t0 + 2064);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB39;

LAB35:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng30)));
    t4 = (t0 + 2064);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB39;

}

static void Always_59_1(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 3392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3976);
    *((int *)t2) = 1;
    t3 = (t0 + 3424);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(59, ng0);

LAB5:    xsi_set_current_line(60, ng0);
    t4 = (t0 + 2224);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 2224);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 2224);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 1504U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t10, t13, 2, 1, t15, 32, 2);
    t14 = (t0 + 2064);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 32);
    goto LAB2;

}

static void Always_63_2(char *t0)
{
    char t6[8];
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    unsigned int t19;
    int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    int t24;
    int t25;

LAB0:    t1 = (t0 + 3640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3992);
    *((int *)t2) = 1;
    t3 = (t0 + 3672);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(63, ng0);

LAB5:    xsi_set_current_line(64, ng0);
    t4 = (t0 + 1664U);
    t5 = *((char **)t4);
    t4 = (t0 + 2224);
    t8 = (t0 + 2224);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 2224);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 1504U);
    t15 = *((char **)t14);
    xsi_vlog_generic_convert_array_indices(t6, t7, t10, t13, 2, 1, t15, 32, 2);
    t14 = (t6 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (!(t16));
    t18 = (t7 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB6;

LAB7:    goto LAB2;

LAB6:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, *((unsigned int *)t7), t25, 0LL);
    goto LAB7;

}


extern void work_m_00000000000092506225_1368203981_init()
{
	static char *pe[] = {(void *)Always_35_0,(void *)Always_59_1,(void *)Always_63_2};
	xsi_register_didat("work_m_00000000000092506225_1368203981", "isim/TOP1_tb_isim_beh.exe.sim/work/m_00000000000092506225_1368203981.didat");
	xsi_register_executes(pe);
}
