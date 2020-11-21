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
static const char *ng0 = "C:/Users/sosav/Downloads/ECE414_Project_Files_2020/FinalProject/cpuControlLogic.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {15U, 0U};



static void Always_89_0(char *t0)
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

LAB0:    t1 = (t0 + 9368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 10184);
    *((int *)t2) = 1;
    t3 = (t0 + 9400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(89, ng0);

LAB5:    xsi_set_current_line(90, ng0);
    t4 = (t0 + 5968U);
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

LAB11:    xsi_set_current_line(93, ng0);

LAB14:    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 8288);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8128);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(90, ng0);

LAB13:    xsi_set_current_line(91, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 8448);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t2 = (t0 + 8128);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    goto LAB12;

}

static void Always_99_1(char *t0)
{
    char t7[8];
    char t23[8];
    char t31[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;

LAB0:    t1 = (t0 + 9616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 10200);
    *((int *)t2) = 1;
    t3 = (t0 + 9648);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(99, ng0);

LAB5:    xsi_set_current_line(100, ng0);
    t4 = (t0 + 8448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t8) != 0)
        goto LAB8;

LAB9:    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (!(t16));
    t18 = *((unsigned int *)t15);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB10;

LAB11:    memcpy(t31, t7, 8);

LAB12:    t59 = (t31 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t31);
    t63 = (t62 & t61);
    t64 = (t63 != 0);
    if (t64 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(103, ng0);

LAB24:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 8128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB28;

LAB26:    if (*((unsigned int *)t5) == 0)
        goto LAB25;

LAB27:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;

LAB28:    t8 = (t7 + 4);
    t14 = (t4 + 4);
    t16 = *((unsigned int *)t4);
    t17 = (~(t16));
    *((unsigned int *)t7) = t17;
    *((unsigned int *)t8) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB30;

LAB29:    t27 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t27 & 1U);
    t28 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t28 & 1U);
    t15 = (t0 + 8288);
    xsi_vlogvar_wait_assign_value(t15, t7, 0, 0, 1, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 8128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB34;

LAB32:    if (*((unsigned int *)t5) == 0)
        goto LAB31;

LAB33:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;

LAB34:    t8 = (t7 + 4);
    t14 = (t4 + 4);
    t16 = *((unsigned int *)t4);
    t17 = (~(t16));
    *((unsigned int *)t7) = t17;
    *((unsigned int *)t8) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB36;

LAB35:    t27 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t27 & 1U);
    t28 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t28 & 1U);
    t15 = (t0 + 7808);
    xsi_vlogvar_wait_assign_value(t15, t7, 0, 0, 1, 0LL);

LAB22:    goto LAB2;

LAB6:    *((unsigned int *)t7) = 1;
    goto LAB9;

LAB8:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB9;

LAB10:    t20 = (t0 + 7968);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t23, 0, 8);
    t24 = (t22 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t22);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t24) != 0)
        goto LAB15;

LAB16:    t32 = *((unsigned int *)t7);
    t33 = *((unsigned int *)t23);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t35 = (t7 + 4);
    t36 = (t23 + 4);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t35);
    t39 = *((unsigned int *)t36);
    t40 = (t38 | t39);
    *((unsigned int *)t37) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 != 0);
    if (t42 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB13:    *((unsigned int *)t23) = 1;
    goto LAB16;

LAB15:    t30 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB16;

LAB17:    t43 = *((unsigned int *)t31);
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t31) = (t43 | t44);
    t45 = (t7 + 4);
    t46 = (t23 + 4);
    t47 = *((unsigned int *)t45);
    t48 = (~(t47));
    t49 = *((unsigned int *)t7);
    t50 = (t49 & t48);
    t51 = *((unsigned int *)t46);
    t52 = (~(t51));
    t53 = *((unsigned int *)t23);
    t54 = (t53 & t52);
    t55 = (~(t50));
    t56 = (~(t54));
    t57 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t57 & t55);
    t58 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t58 & t56);
    goto LAB19;

LAB20:    xsi_set_current_line(100, ng0);

LAB23:    xsi_set_current_line(101, ng0);
    t65 = (t0 + 1288);
    t66 = *((char **)t65);
    t65 = (t0 + 8288);
    xsi_vlogvar_wait_assign_value(t65, t66, 0, 0, 1, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB22;

LAB25:    *((unsigned int *)t7) = 1;
    goto LAB28;

LAB30:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t14);
    *((unsigned int *)t7) = (t18 | t19);
    t25 = *((unsigned int *)t8);
    t26 = *((unsigned int *)t14);
    *((unsigned int *)t8) = (t25 | t26);
    goto LAB29;

LAB31:    *((unsigned int *)t7) = 1;
    goto LAB34;

LAB36:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t14);
    *((unsigned int *)t7) = (t18 | t19);
    t25 = *((unsigned int *)t8);
    t26 = *((unsigned int *)t14);
    *((unsigned int *)t8) = (t25 | t26);
    goto LAB35;

}

static void Always_109_2(char *t0)
{
    char t4[16];
    char t5[8];
    char t28[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;

LAB0:    t1 = (t0 + 9864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 10216);
    *((int *)t2) = 1;
    t3 = (t0 + 9896);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(109, ng0);

LAB5:    xsi_set_current_line(111, ng0);
    t6 = (t0 + 8128);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memset(t5, 0, 8);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t9) == 0)
        goto LAB6;

LAB8:    t15 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t15) = 1;

LAB9:    t16 = (t5 + 4);
    t17 = (t8 + 4);
    t18 = *((unsigned int *)t8);
    t19 = (~(t18));
    *((unsigned int *)t5) = t19;
    *((unsigned int *)t16) = 0;
    if (*((unsigned int *)t17) != 0)
        goto LAB11;

LAB10:    t24 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t24 & 1U);
    t25 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t25 & 1U);
    t26 = ((char*)((ng2)));
    xsi_vlogtype_concat(t4, 33, 33, 2U, t26, 32, t5, 1);
    t27 = (t0 + 6848);
    xsi_vlogvar_wait_assign_value(t27, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 2512);
    t3 = *((char **)t2);
    t2 = (t0 + 7168);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 8128);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 7328);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 1, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 2376);
    t3 = *((char **)t2);
    t2 = (t0 + 7648);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 6128U);
    t3 = *((char **)t2);
    t2 = (t0 + 4008);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t3 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB13;

LAB12:    t7 = (t6 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB13;

LAB16:    if (*((unsigned int *)t3) > *((unsigned int *)t6))
        goto LAB15;

LAB14:    *((unsigned int *)t5) = 1;

LAB15:    t9 = (t5 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 6128U);
    t3 = *((char **)t2);
    t2 = (t0 + 4144);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t3 + 4);
    t7 = (t6 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t7);
    t18 = (t13 ^ t14);
    t19 = (t12 | t18);
    t20 = *((unsigned int *)t2);
    t21 = *((unsigned int *)t7);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB24;

LAB21:    if (t22 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t5) = 1;

LAB24:    t9 = (t5 + 4);
    t25 = *((unsigned int *)t9);
    t29 = (~(t25));
    t30 = *((unsigned int *)t5);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 6128U);
    t3 = *((char **)t2);
    t2 = (t0 + 4280);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t3 + 4);
    t7 = (t6 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t7);
    t18 = (t13 ^ t14);
    t19 = (t12 | t18);
    t20 = *((unsigned int *)t2);
    t21 = *((unsigned int *)t7);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB32;

LAB29:    if (t22 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t5) = 1;

LAB32:    t9 = (t5 + 4);
    t25 = *((unsigned int *)t9);
    t29 = (~(t25));
    t30 = *((unsigned int *)t5);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 6128U);
    t3 = *((char **)t2);
    t2 = (t0 + 4416);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t3 + 4);
    t7 = (t6 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t7);
    t18 = (t13 ^ t14);
    t19 = (t12 | t18);
    t20 = *((unsigned int *)t2);
    t21 = *((unsigned int *)t7);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB40;

LAB37:    if (t22 != 0)
        goto LAB39;

LAB38:    *((unsigned int *)t5) = 1;

LAB40:    t9 = (t5 + 4);
    t25 = *((unsigned int *)t9);
    t29 = (~(t25));
    t30 = *((unsigned int *)t5);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 6128U);
    t3 = *((char **)t2);
    t2 = (t0 + 4552);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t3 + 4);
    t7 = (t6 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t7);
    t18 = (t13 ^ t14);
    t19 = (t12 | t18);
    t20 = *((unsigned int *)t2);
    t21 = *((unsigned int *)t7);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB56;

LAB53:    if (t22 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t5) = 1;

LAB56:    t9 = (t5 + 4);
    t25 = *((unsigned int *)t9);
    t29 = (~(t25));
    t30 = *((unsigned int *)t5);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 6128U);
    t3 = *((char **)t2);
    t2 = (t0 + 4688);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t3 + 4);
    t7 = (t6 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t7);
    t18 = (t13 ^ t14);
    t19 = (t12 | t18);
    t20 = *((unsigned int *)t2);
    t21 = *((unsigned int *)t7);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB64;

LAB61:    if (t22 != 0)
        goto LAB63;

LAB62:    *((unsigned int *)t5) = 1;

LAB64:    t9 = (t5 + 4);
    t25 = *((unsigned int *)t9);
    t29 = (~(t25));
    t30 = *((unsigned int *)t5);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB65;

LAB66:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 6128U);
    t3 = *((char **)t2);
    t2 = (t0 + 4824);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t3 + 4);
    t7 = (t6 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t7);
    t18 = (t13 ^ t14);
    t19 = (t12 | t18);
    t20 = *((unsigned int *)t2);
    t21 = *((unsigned int *)t7);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB72;

LAB69:    if (t22 != 0)
        goto LAB71;

LAB70:    *((unsigned int *)t5) = 1;

LAB72:    t9 = (t5 + 4);
    t25 = *((unsigned int *)t9);
    t29 = (~(t25));
    t30 = *((unsigned int *)t5);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB73;

LAB74:    xsi_set_current_line(157, ng0);
    t2 = (t0 + 6128U);
    t3 = *((char **)t2);
    t2 = (t0 + 4960);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t3 + 4);
    t7 = (t6 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t7);
    t18 = (t13 ^ t14);
    t19 = (t12 | t18);
    t20 = *((unsigned int *)t2);
    t21 = *((unsigned int *)t7);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB80;

LAB77:    if (t22 != 0)
        goto LAB79;

LAB78:    *((unsigned int *)t5) = 1;

LAB80:    t9 = (t5 + 4);
    t25 = *((unsigned int *)t9);
    t29 = (~(t25));
    t30 = *((unsigned int *)t5);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB81;

LAB82:    xsi_set_current_line(160, ng0);

LAB85:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 6288U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t5, 0, 8);
    t6 = (t3 + 4);
    t7 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t18 = (t13 ^ t14);
    t19 = (t12 | t18);
    t20 = *((unsigned int *)t6);
    t21 = *((unsigned int *)t7);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB89;

LAB86:    if (t22 != 0)
        goto LAB88;

LAB87:    *((unsigned int *)t5) = 1;

LAB89:    t9 = (t5 + 4);
    t25 = *((unsigned int *)t9);
    t29 = (~(t25));
    t30 = *((unsigned int *)t5);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB90;

LAB91:    xsi_set_current_line(167, ng0);
    t2 = (t0 + 6288U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t5, 0, 8);
    t6 = (t3 + 4);
    t7 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t18 = (t13 ^ t14);
    t19 = (t12 | t18);
    t20 = *((unsigned int *)t6);
    t21 = *((unsigned int *)t7);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB97;

LAB94:    if (t22 != 0)
        goto LAB96;

LAB95:    *((unsigned int *)t5) = 1;

LAB97:    t9 = (t5 + 4);
    t25 = *((unsigned int *)t9);
    t29 = (~(t25));
    t30 = *((unsigned int *)t5);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB98;

LAB99:
LAB100:
LAB92:
LAB83:
LAB75:
LAB67:
LAB59:
LAB43:
LAB35:
LAB27:
LAB19:    xsi_set_current_line(174, ng0);
    t2 = (t0 + 8128);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t5, 0, 8);
    t8 = (t6 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t7);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t18 = (t13 ^ t14);
    t19 = (t12 | t18);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t9);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB105;

LAB102:    if (t22 != 0)
        goto LAB104;

LAB103:    *((unsigned int *)t5) = 1;

LAB105:    t16 = (t5 + 4);
    t25 = *((unsigned int *)t16);
    t29 = (~(t25));
    t30 = *((unsigned int *)t5);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB106;

LAB107:
LAB108:    goto LAB2;

LAB6:    *((unsigned int *)t5) = 1;
    goto LAB9;

LAB11:    t20 = *((unsigned int *)t5);
    t21 = *((unsigned int *)t17);
    *((unsigned int *)t5) = (t20 | t21);
    t22 = *((unsigned int *)t16);
    t23 = *((unsigned int *)t17);
    *((unsigned int *)t16) = (t22 | t23);
    goto LAB10;

LAB13:    t8 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB15;

LAB17:    xsi_set_current_line(122, ng0);

LAB20:    xsi_set_current_line(123, ng0);
    t15 = (t0 + 6128U);
    t16 = *((char **)t15);
    memset(t28, 0, 8);
    t15 = (t28 + 4);
    t17 = (t16 + 4);
    t18 = *((unsigned int *)t16);
    t19 = (t18 >> 0);
    *((unsigned int *)t28) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 0);
    *((unsigned int *)t15) = t21;
    t22 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t22 & 7U);
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t23 & 7U);
    t26 = (t0 + 6688);
    xsi_vlogvar_wait_assign_value(t26, t28, 0, 0, 3, 0LL);
    goto LAB19;

LAB23:    t8 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(127, ng0);

LAB28:    xsi_set_current_line(128, ng0);
    t15 = ((char*)((ng1)));
    t16 = (t0 + 7008);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, 0, 1, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 2920);
    t3 = *((char **)t2);
    t2 = (t0 + 7168);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    goto LAB27;

LAB31:    t8 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(131, ng0);

LAB36:    xsi_set_current_line(132, ng0);
    t15 = (t0 + 2784);
    t16 = *((char **)t15);
    t15 = (t0 + 7168);
    xsi_vlogvar_wait_assign_value(t15, t16, 0, 0, 2, 0LL);
    goto LAB35;

LAB39:    t8 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB40;

LAB41:    xsi_set_current_line(133, ng0);

LAB44:    xsi_set_current_line(134, ng0);
    t15 = (t0 + 2784);
    t16 = *((char **)t15);
    t15 = (t0 + 7168);
    xsi_vlogvar_wait_assign_value(t15, t16, 0, 0, 2, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 8128);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 1424);
    t8 = *((char **)t7);
    memset(t5, 0, 8);
    t7 = (t6 + 4);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t9);
    t18 = (t13 ^ t14);
    t19 = (t12 | t18);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t9);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB48;

LAB45:    if (t22 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t5) = 1;

LAB48:    t16 = (t5 + 4);
    t25 = *((unsigned int *)t16);
    t29 = (~(t25));
    t30 = *((unsigned int *)t5);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB49;

LAB50:
LAB51:    goto LAB43;

LAB47:    t15 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB48;

LAB49:    xsi_set_current_line(136, ng0);

LAB52:    xsi_set_current_line(137, ng0);
    t17 = ((char*)((ng1)));
    t26 = (t0 + 7488);
    xsi_vlogvar_wait_assign_value(t26, t17, 0, 0, 1, 0LL);
    goto LAB51;

LAB55:    t8 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB56;

LAB57:    xsi_set_current_line(142, ng0);

LAB60:    xsi_set_current_line(143, ng0);
    t15 = (t0 + 1832);
    t16 = *((char **)t15);
    t15 = (t0 + 6848);
    xsi_vlogvar_wait_assign_value(t15, t16, 0, 0, 2, 0LL);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 2104);
    t3 = *((char **)t2);
    t2 = (t0 + 7648);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB59;

LAB63:    t8 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB64;

LAB65:    xsi_set_current_line(146, ng0);

LAB68:    xsi_set_current_line(147, ng0);
    t15 = (t0 + 1832);
    t16 = *((char **)t15);
    t15 = (t0 + 6848);
    xsi_vlogvar_wait_assign_value(t15, t16, 0, 0, 2, 0LL);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 2240);
    t3 = *((char **)t2);
    t2 = (t0 + 7648);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB67;

LAB71:    t8 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB72;

LAB73:    xsi_set_current_line(153, ng0);

LAB76:    xsi_set_current_line(154, ng0);
    t15 = (t0 + 1832);
    t16 = *((char **)t15);
    t15 = (t0 + 6848);
    xsi_vlogvar_wait_assign_value(t15, t16, 0, 0, 2, 0LL);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 2648);
    t3 = *((char **)t2);
    t2 = (t0 + 7168);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB75;

LAB79:    t8 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB80;

LAB81:    xsi_set_current_line(157, ng0);

LAB84:    xsi_set_current_line(158, ng0);
    t15 = (t0 + 1832);
    t16 = *((char **)t15);
    t15 = (t0 + 6848);
    xsi_vlogvar_wait_assign_value(t15, t16, 0, 0, 2, 0LL);
    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB83;

LAB88:    t8 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB89;

LAB90:    xsi_set_current_line(161, ng0);

LAB93:    xsi_set_current_line(162, ng0);
    t15 = (t0 + 1968);
    t16 = *((char **)t15);
    t15 = (t0 + 6848);
    xsi_vlogvar_wait_assign_value(t15, t16, 0, 0, 2, 0LL);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB92;

LAB96:    t8 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB97;

LAB98:    xsi_set_current_line(167, ng0);

LAB101:    xsi_set_current_line(168, ng0);
    t15 = (t0 + 1560);
    t16 = *((char **)t15);
    t15 = (t0 + 6848);
    xsi_vlogvar_wait_assign_value(t15, t16, 0, 0, 2, 0LL);
    xsi_set_current_line(169, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB100;

LAB104:    t15 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB105;

LAB106:    xsi_set_current_line(174, ng0);

LAB109:    xsi_set_current_line(175, ng0);
    t17 = ((char*)((ng1)));
    t26 = (t0 + 6848);
    xsi_vlogvar_wait_assign_value(t26, t17, 0, 0, 2, 0LL);
    goto LAB108;

}


extern void work_m_00000000001786546406_2468887365_init()
{
	static char *pe[] = {(void *)Always_89_0,(void *)Always_99_1,(void *)Always_109_2};
	xsi_register_didat("work_m_00000000001786546406_2468887365", "isim/tb_CPU_isim_beh.exe.sim/work/m_00000000001786546406_2468887365.didat");
	xsi_register_executes(pe);
}
