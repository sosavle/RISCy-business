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
static const char *ng0 = "C:/Users/sosav/Downloads/ECE414_Project_Files_2020/FinalProject/programCounter.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};



static void NetDecl_48_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3776U);
    t4 = *((char **)t2);
    t2 = (t0 + 3616U);
    t5 = *((char **)t2);
    xsi_vlogtype_concat(t3, 8, 8, 2U, t5, 4, t4, 4);
    t2 = (t0 + 6080);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
    t11 = t10;
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t2, 0, 7U);
    t18 = (t0 + 5984);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_51_1(char *t0)
{
    char t6[8];
    char t31[8];
    char t41[8];
    char t44[8];
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
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;

LAB0:    t1 = (t0 + 5664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 6000);
    *((int *)t2) = 1;
    t3 = (t0 + 5696);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(51, ng0);

LAB5:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 2976U);
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

LAB11:    xsi_set_current_line(59, ng0);

LAB14:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 4336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 16, t5, 32);
    t7 = (t0 + 4336);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 16, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3296U);
    t3 = *((char **)t2);

LAB15:    t2 = (t0 + 1696);
    t4 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t3, 2, t4, 32);
    if (t30 == 1)
        goto LAB16;

LAB17:    t2 = (t0 + 1832);
    t4 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t3, 2, t4, 32);
    if (t30 == 1)
        goto LAB18;

LAB19:    t2 = (t0 + 1424);
    t4 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t3, 2, t4, 32);
    if (t30 == 1)
        goto LAB20;

LAB21:
LAB22:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(54, ng0);

LAB13:    xsi_set_current_line(55, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 4336);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 16, 0LL);
    goto LAB12;

LAB16:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3136U);
    t5 = *((char **)t2);
    t2 = (t0 + 3456U);
    t7 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t7 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 65535U);
    if (t13 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t2) != 0)
        goto LAB25;

LAB26:    memset(t31, 0, 8);
    t21 = (t5 + 4);
    t22 = (t6 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t21);
    t18 = *((unsigned int *)t22);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t23 = *((unsigned int *)t21);
    t24 = *((unsigned int *)t22);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t20 & t26);
    if (t27 != 0)
        goto LAB30;

LAB27:    if (t25 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t31) = 1;

LAB30:    t29 = (t31 + 4);
    t32 = *((unsigned int *)t29);
    t33 = (~(t32));
    t34 = *((unsigned int *)t31);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB31;

LAB32:
LAB33:    goto LAB22;

LAB18:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3136U);
    t5 = *((char **)t2);
    t2 = (t0 + 3456U);
    t7 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t7 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 65535U);
    if (t13 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t2) != 0)
        goto LAB37;

LAB38:    memset(t31, 0, 8);
    t21 = (t5 + 4);
    t22 = (t6 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t21);
    t18 = *((unsigned int *)t22);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t23 = *((unsigned int *)t21);
    t24 = *((unsigned int *)t22);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t20 & t26);
    if (t27 != 0)
        goto LAB42;

LAB39:    if (t25 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t31) = 1;

LAB42:    t29 = (t31 + 4);
    t32 = *((unsigned int *)t29);
    t33 = (~(t32));
    t34 = *((unsigned int *)t31);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB43;

LAB44:
LAB45:    goto LAB22;

LAB20:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 4336);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 4336);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 16, 0LL);
    goto LAB22;

LAB23:    *((unsigned int *)t6) = 1;
    goto LAB26;

LAB25:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB26;

LAB29:    t28 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(65, ng0);

LAB34:    xsi_set_current_line(66, ng0);
    t37 = (t0 + 4336);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng1)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_add(t41, 32, t39, 16, t40, 32);
    t42 = (t0 + 3936U);
    t43 = *((char **)t42);
    memset(t44, 0, 8);
    xsi_vlog_unsigned_add(t44, 32, t41, 32, t43, 8);
    t42 = (t0 + 4336);
    xsi_vlogvar_wait_assign_value(t42, t44, 0, 0, 16, 0LL);
    goto LAB33;

LAB35:    *((unsigned int *)t6) = 1;
    goto LAB38;

LAB37:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB38;

LAB41:    t28 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB42;

LAB43:    xsi_set_current_line(70, ng0);

LAB46:    xsi_set_current_line(71, ng0);
    t37 = (t0 + 3456U);
    t38 = *((char **)t37);
    t37 = (t0 + 4336);
    xsi_vlogvar_wait_assign_value(t37, t38, 0, 0, 16, 0LL);
    goto LAB45;

}


extern void work_m_00000000004294132973_3117176954_init()
{
	static char *pe[] = {(void *)NetDecl_48_0,(void *)Always_51_1};
	xsi_register_didat("work_m_00000000004294132973_3117176954", "isim/tb_CPU_isim_beh.exe.sim/work/m_00000000004294132973_3117176954.didat");
	xsi_register_executes(pe);
}
