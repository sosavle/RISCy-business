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
static const char *ng0 = "C:/Users/sosav/Downloads/ECE414_Project_Files_2020/FinalProject/functionalUnit.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static int ng8[] = {1, 0};
static unsigned int ng9[] = {7U, 0U};



static void Always_48_0(char *t0)
{
    char t10[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;

LAB0:    t1 = (t0 + 4344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 4912);
    *((int *)t2) = 1;
    t3 = (t0 + 4376);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 2864U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3424);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 17, 0LL);

LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(51, ng0);
    t7 = (t0 + 2544U);
    t8 = *((char **)t7);
    t7 = (t0 + 2704U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 17, t8, 16, t9, 16);
    t7 = (t0 + 3424);
    xsi_vlogvar_wait_assign_value(t7, t10, 0, 0, 17, 0LL);
    goto LAB25;

LAB9:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 2544U);
    t4 = *((char **)t3);
    t3 = (t0 + 2704U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_minus(t10, 17, t4, 16, t7, 16);
    t3 = (t0 + 3424);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 17, 0LL);
    goto LAB25;

LAB11:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 2544U);
    t4 = *((char **)t3);
    t3 = (t0 + 2704U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_bit_and(t10, 17, t4, 16, t7, 16);
    t3 = (t0 + 3424);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 17, 0LL);
    goto LAB25;

LAB13:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 2544U);
    t4 = *((char **)t3);
    t3 = (t0 + 2704U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_bit_or(t10, 17, t4, 16, t7, 16);
    t3 = (t0 + 3424);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 17, 0LL);
    goto LAB25;

LAB15:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 2544U);
    t4 = *((char **)t3);
    t3 = (t0 + 2704U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_bit_xor(t10, 17, t4, 16, t7, 16);
    t3 = (t0 + 3424);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 17, 0LL);
    goto LAB25;

LAB17:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 2544U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t7 = (t4 + 4);
    memcpy(t11, t4, 8);
    t14 = *((unsigned int *)t4);
    t15 = (t14 & 32768U);
    t12 = t15;
    t8 = (t4 + 4);
    t16 = *((unsigned int *)t8);
    t17 = (t16 & 32768U);
    t13 = t17;
    t18 = (t15 != 0);
    if (t18 == 1)
        goto LAB26;

LAB27:    t20 = (t17 != 0);
    if (t20 == 1)
        goto LAB28;

LAB29:    t22 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t22 & 131071U);
    t23 = (t11 + 4);
    t24 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t24 & 131071U);
    memcpy(t10, t11, 8);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t3);
    t28 = (t26 | t27);
    *((unsigned int *)t10) = t28;
    t29 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t29 & 131071U);
    t30 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t30 & 131071U);
    t31 = (t0 + 3424);
    xsi_vlogvar_wait_assign_value(t31, t10, 0, 0, 17, 0LL);
    goto LAB25;

LAB19:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 2544U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng8)));
    memset(t10, 0, 8);
    xsi_vlog_signed_lshift(t10, 17, t4, 16, t3, 32);
    t7 = (t0 + 3424);
    xsi_vlogvar_wait_assign_value(t7, t10, 0, 0, 17, 0LL);
    goto LAB25;

LAB21:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 2544U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng8)));
    memset(t10, 0, 8);
    xsi_vlog_signed_arith_rshift(t10, 17, t4, 16, t3, 32);
    t7 = (t0 + 3424);
    xsi_vlogvar_wait_assign_value(t7, t10, 0, 0, 17, 0LL);
    goto LAB25;

LAB26:    t19 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t19 | 4294901760U);
    goto LAB27;

LAB28:    t9 = (t11 + 4);
    t21 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t21 | 4294901760U);
    goto LAB29;

}

static void Cont_71_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 4592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3424);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 65535U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 65535U);
    t14 = (t0 + 5008);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 65535U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 15);
    t27 = (t0 + 4928);
    *((int *)t27) = 1;

LAB1:    return;
}


extern void work_m_00000000002445962267_0260947159_init()
{
	static char *pe[] = {(void *)Always_48_0,(void *)Cont_71_1};
	xsi_register_didat("work_m_00000000002445962267_0260947159", "isim/tb_CPU_isim_beh.exe.sim/work/m_00000000002445962267_0260947159.didat");
	xsi_register_executes(pe);
}
