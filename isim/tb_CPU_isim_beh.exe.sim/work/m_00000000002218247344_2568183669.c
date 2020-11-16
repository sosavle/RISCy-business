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
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};



static void Always_44_0(char *t0)
{
    char t13[8];
    char t17[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    int t30;
    char *t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;

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
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t29 = (t9 ^ t10);
    t32 = (t8 | t29);
    t35 = *((unsigned int *)t4);
    t36 = *((unsigned int *)t5);
    t39 = (t35 | t36);
    t40 = (~(t39));
    t41 = (t32 & t40);
    if (t41 != 0)
        goto LAB19;

LAB16:    if (t39 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t13) = 1;

LAB19:    t12 = (t13 + 4);
    t42 = *((unsigned int *)t12);
    t43 = (~(t42));
    t44 = *((unsigned int *)t13);
    t45 = (t44 & t43);
    t46 = (t45 != 0);
    if (t46 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(54, ng0);

LAB24:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2208U);
    t3 = *((char **)t2);
    t2 = (t0 + 3568);
    t4 = (t0 + 3568);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 3568);
    t14 = (t12 + 64U);
    t15 = *((char **)t14);
    t16 = (t0 + 2048U);
    t19 = *((char **)t16);
    xsi_vlog_generic_convert_array_indices(t13, t17, t11, t15, 2, 1, t19, 4, 2);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t30 = (!(t6));
    t20 = (t17 + 4);
    t7 = *((unsigned int *)t20);
    t33 = (!(t7));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB25;

LAB26:
LAB22:    goto LAB2;

LAB6:    xsi_set_current_line(45, ng0);

LAB9:    xsi_set_current_line(46, ng0);
    xsi_set_current_line(46, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3728);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);

LAB10:    t2 = (t0 + 3728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 608);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t11, 32);
    t5 = (t13 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    goto LAB8;

LAB11:    xsi_set_current_line(46, ng0);

LAB13:    xsi_set_current_line(47, ng0);
    t12 = (t0 + 3728);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 3568);
    t19 = (t0 + 3568);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 3568);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = (t0 + 3728);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_generic_convert_array_indices(t17, t18, t21, t24, 2, 1, t27, 32, 1);
    t28 = (t17 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t18 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 3728);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB10;

LAB14:    t35 = *((unsigned int *)t17);
    t36 = *((unsigned int *)t18);
    t37 = (t35 - t36);
    t38 = (t37 + 1);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, *((unsigned int *)t18), t38, 0LL);
    goto LAB15;

LAB18:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB19;

LAB20:    xsi_set_current_line(50, ng0);

LAB23:    xsi_set_current_line(51, ng0);
    t14 = (t0 + 3568);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t19 = (t0 + 3568);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 3568);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = (t0 + 2368U);
    t26 = *((char **)t25);
    xsi_vlog_generic_get_array_select_value(t17, 16, t16, t21, t24, 2, 1, t26, 4, 2);
    t25 = (t0 + 3088);
    xsi_vlogvar_wait_assign_value(t25, t17, 0, 0, 16, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3568);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = (t0 + 3568);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t19 = (t0 + 2528U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_array_select_value(t13, 16, t4, t12, t16, 2, 1, t20, 4, 2);
    t19 = (t0 + 3248);
    xsi_vlogvar_wait_assign_value(t19, t13, 0, 0, 16, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3568);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = (t0 + 3568);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t19 = (t0 + 2048U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_array_select_value(t13, 16, t4, t12, t16, 2, 1, t20, 4, 2);
    t19 = (t0 + 3408);
    xsi_vlogvar_wait_assign_value(t19, t13, 0, 0, 16, 0LL);
    goto LAB22;

LAB25:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t17);
    t37 = (t8 - t9);
    t38 = (t37 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t17), t38, 0LL);
    goto LAB26;

}


extern void work_m_00000000002218247344_2568183669_init()
{
	static char *pe[] = {(void *)Always_44_0};
	xsi_register_didat("work_m_00000000002218247344_2568183669", "isim/tb_CPU_isim_beh.exe.sim/work/m_00000000002218247344_2568183669.didat");
	xsi_register_executes(pe);
}
