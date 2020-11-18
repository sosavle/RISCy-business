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
static const char *ng0 = "C:/Users/sosav/Downloads/ECE414_Project_Files_2020/FinalProject/registerFile.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U};



static void Always_44_0(char *t0)
{
    char t6[8];
    char t30[8];
    char t31[8];
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
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    int t41;
    char *t42;
    int t43;
    int t44;
    int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;

LAB0:    t1 = (t0 + 4648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 4968);
    *((int *)t2) = 1;
    t3 = (t0 + 4680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);

LAB5:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 1888U);
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

LAB11:
LAB12:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB23;

LAB20:    if (t18 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t6) = 1;

LAB23:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1888U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB31;

LAB28:    if (t18 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t6) = 1;

LAB31:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB32;

LAB33:
LAB34:
LAB26:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(45, ng0);

LAB13:    xsi_set_current_line(46, ng0);
    xsi_set_current_line(46, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 3728);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 32);

LAB14:    t2 = (t0 + 3728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 608);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t7, 32);
    t5 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB15;

LAB16:    goto LAB12;

LAB15:    xsi_set_current_line(46, ng0);

LAB17:    xsi_set_current_line(47, ng0);
    t8 = (t0 + 3728);
    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    t28 = (t0 + 3568);
    t29 = (t0 + 3568);
    t32 = (t29 + 72U);
    t33 = *((char **)t32);
    t34 = (t0 + 3568);
    t35 = (t34 + 64U);
    t36 = *((char **)t35);
    t37 = (t0 + 3728);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    xsi_vlog_generic_convert_array_indices(t30, t31, t33, t36, 2, 1, t39, 32, 1);
    t40 = (t30 + 4);
    t14 = *((unsigned int *)t40);
    t41 = (!(t14));
    t42 = (t31 + 4);
    t15 = *((unsigned int *)t42);
    t43 = (!(t15));
    t44 = (t41 && t43);
    if (t44 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 3728);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB14;

LAB18:    t16 = *((unsigned int *)t30);
    t17 = *((unsigned int *)t31);
    t45 = (t16 - t17);
    t46 = (t45 + 1);
    xsi_vlogvar_wait_assign_value(t28, t22, 0, *((unsigned int *)t31), t46, 0LL);
    goto LAB19;

LAB22:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(50, ng0);

LAB27:    xsi_set_current_line(51, ng0);
    t21 = (t0 + 3568);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = (t0 + 3568);
    t32 = (t29 + 72U);
    t33 = *((char **)t32);
    t34 = (t0 + 3568);
    t35 = (t34 + 64U);
    t36 = *((char **)t35);
    t37 = (t0 + 2368U);
    t38 = *((char **)t37);
    xsi_vlog_generic_get_array_select_value(t30, 16, t28, t33, t36, 2, 1, t38, 4, 2);
    t37 = (t0 + 3088);
    xsi_vlogvar_wait_assign_value(t37, t30, 0, 0, 16, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3568);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 3568);
    t22 = (t21 + 64U);
    t28 = *((char **)t22);
    t29 = (t0 + 2528U);
    t32 = *((char **)t29);
    xsi_vlog_generic_get_array_select_value(t6, 16, t4, t8, t28, 2, 1, t32, 4, 2);
    t29 = (t0 + 3248);
    xsi_vlogvar_wait_assign_value(t29, t6, 0, 0, 16, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3568);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 3568);
    t22 = (t21 + 64U);
    t28 = *((char **)t22);
    t29 = (t0 + 2048U);
    t32 = *((char **)t29);
    xsi_vlog_generic_get_array_select_value(t6, 16, t4, t8, t28, 2, 1, t32, 4, 2);
    t29 = (t0 + 3408);
    xsi_vlogvar_wait_assign_value(t29, t6, 0, 0, 16, 0LL);
    goto LAB26;

LAB30:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(54, ng0);

LAB35:    xsi_set_current_line(55, ng0);
    t21 = (t0 + 2208U);
    t22 = *((char **)t21);
    t21 = (t0 + 3568);
    t28 = (t0 + 3568);
    t29 = (t28 + 72U);
    t32 = *((char **)t29);
    t33 = (t0 + 3568);
    t34 = (t33 + 64U);
    t35 = *((char **)t34);
    t36 = (t0 + 2048U);
    t37 = *((char **)t36);
    xsi_vlog_generic_convert_array_indices(t30, t31, t32, t35, 2, 1, t37, 4, 2);
    t36 = (t30 + 4);
    t47 = *((unsigned int *)t36);
    t41 = (!(t47));
    t38 = (t31 + 4);
    t48 = *((unsigned int *)t38);
    t43 = (!(t48));
    t44 = (t41 && t43);
    if (t44 == 1)
        goto LAB36;

LAB37:    goto LAB34;

LAB36:    t49 = *((unsigned int *)t30);
    t50 = *((unsigned int *)t31);
    t45 = (t49 - t50);
    t46 = (t45 + 1);
    xsi_vlogvar_wait_assign_value(t21, t22, 0, *((unsigned int *)t31), t46, 0LL);
    goto LAB37;

}


extern void work_m_00000000001303859051_2568183669_init()
{
	static char *pe[] = {(void *)Always_44_0};
	xsi_register_didat("work_m_00000000001303859051_2568183669", "isim/cpuDatapath_isim_beh.exe.sim/work/m_00000000001303859051_2568183669.didat");
	xsi_register_executes(pe);
}
