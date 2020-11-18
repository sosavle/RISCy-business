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
static const char *ng0 = "C:/Users/sosav/Downloads/ECE414_Project_Files_2020/FinalProject/cpuDatapath.v";
static int ng1[] = {8, 0};



static void NetDecl_54_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;

LAB0:    t1 = (t0 + 6288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3368U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t12);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t23, 8);

LAB16:    t16 = (t0 + 6952);
    t24 = (t16 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memset(t27, 0, 8);
    t28 = 65535U;
    t29 = t28;
    t30 = (t3 + 4);
    t31 = *((unsigned int *)t3);
    t28 = (t28 & t31);
    t32 = *((unsigned int *)t30);
    t29 = (t29 & t32);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t34 | t28);
    t35 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t35 | t29);
    xsi_driver_vfirst_trans(t16, 0, 15U);
    t36 = (t0 + 6856);
    *((int *)t36) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 3048U);
    t17 = *((char **)t16);
    memcpy(t18, t17, 8);
    goto LAB9;

LAB10:    t16 = (t0 + 4648U);
    t23 = *((char **)t16);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 16, t18, 16, t23, 16);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}

static void Always_58_1(char *t0)
{
    char t9[8];
    char t10[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 6536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 6872);
    *((int *)t2) = 1;
    t3 = (t0 + 6568);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(58, ng0);

LAB5:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 3528U);
    t5 = *((char **)t4);

LAB6:    t4 = (t0 + 1288);
    t6 = *((char **)t4);
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t6, 32);
    if (t7 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 32);
    if (t7 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 32);
    if (t7 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 2888U);
    t8 = *((char **)t6);
    memset(t11, 0, 8);
    t6 = (t11 + 4);
    t12 = (t8 + 4);
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 3);
    t15 = (t14 & 1);
    *((unsigned int *)t11) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 3);
    t18 = (t17 & 1);
    *((unsigned int *)t6) = t18;
    xsi_vlog_mul_concat(t10, 8, 1, t2, 1U, t11, 1);
    xsi_vlogtype_concat(t9, 16, 16, 3U, t10, 8, t4, 4, t3, 4);
    t19 = (t0 + 5368);
    xsi_vlogvar_wait_assign_value(t19, t9, 0, 0, 16, 0LL);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(60, ng0);
    t4 = (t0 + 4968U);
    t8 = *((char **)t4);
    t4 = (t0 + 5368);
    xsi_vlogvar_wait_assign_value(t4, t8, 0, 0, 16, 0LL);
    goto LAB15;

LAB9:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 4008U);
    t4 = *((char **)t2);
    t2 = (t0 + 5368);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 16, 0LL);
    goto LAB15;

LAB11:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3848U);
    t4 = *((char **)t2);
    t2 = (t0 + 5368);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 16, 0LL);
    goto LAB15;

}


extern void work_m_00000000004175887308_0948812288_init()
{
	static char *pe[] = {(void *)NetDecl_54_0,(void *)Always_58_1};
	xsi_register_didat("work_m_00000000004175887308_0948812288", "isim/cpuDatapath_isim_beh.exe.sim/work/m_00000000004175887308_0948812288.didat");
	xsi_register_executes(pe);
}
