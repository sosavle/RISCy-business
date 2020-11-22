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
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {15U, 0U};



static void Always_111_0(char *t0)
{
    char t6[8];
    char t30[8];
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
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
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
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;

LAB0:    t1 = (t0 + 9208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 9528);
    *((int *)t2) = 1;
    t3 = (t0 + 9240);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(111, ng0);

LAB5:    xsi_set_current_line(112, ng0);
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

LAB11:    xsi_set_current_line(123, ng0);

LAB14:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 8128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    xsi_vlogtype_concat(t6, 2, 2, 2U, t5, 1, t4, 1);
    t7 = (t0 + 6848);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 2, 0LL);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 2512);
    t3 = *((char **)t2);
    t2 = (t0 + 7168);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 8128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7328);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 2376);
    t3 = *((char **)t2);
    t2 = (t0 + 7648);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 8288);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8128);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 8128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8288);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 8128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t5) == 0)
        goto LAB15;

LAB17:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;

LAB18:    t8 = (t6 + 4);
    t21 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (~(t14));
    *((unsigned int *)t6) = t15;
    *((unsigned int *)t8) = 0;
    if (*((unsigned int *)t21) != 0)
        goto LAB20;

LAB19:    t20 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t20 & 1U);
    t23 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t23 & 1U);
    t22 = (t0 + 7808);
    xsi_vlogvar_wait_assign_value(t22, t6, 0, 0, 1, 0LL);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 6128U);
    t3 = *((char **)t2);
    t2 = (t0 + 4008);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB22;

LAB21:    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB22;

LAB25:    if (*((unsigned int *)t3) > *((unsigned int *)t4))
        goto LAB24;

LAB23:    *((unsigned int *)t6) = 1;

LAB24:    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 6128U);
    t3 = *((char **)t2);
    t2 = (t0 + 4144);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB33;

LAB30:    if (t18 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t6) = 1;

LAB33:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 6128U);
    t3 = *((char **)t2);
    t2 = (t0 + 4280);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB41;

LAB38:    if (t18 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t6) = 1;

LAB41:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 6128U);
    t3 = *((char **)t2);
    t2 = (t0 + 4416);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB49;

LAB46:    if (t18 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t6) = 1;

LAB49:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 6128U);
    t3 = *((char **)t2);
    t2 = (t0 + 4552);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB65;

LAB62:    if (t18 != 0)
        goto LAB64;

LAB63:    *((unsigned int *)t6) = 1;

LAB65:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(164, ng0);
    t2 = (t0 + 6128U);
    t3 = *((char **)t2);
    t2 = (t0 + 4688);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB81;

LAB78:    if (t18 != 0)
        goto LAB80;

LAB79:    *((unsigned int *)t6) = 1;

LAB81:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB82;

LAB83:    xsi_set_current_line(173, ng0);
    t2 = (t0 + 6128U);
    t3 = *((char **)t2);
    t2 = (t0 + 4824);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB97;

LAB94:    if (t18 != 0)
        goto LAB96;

LAB95:    *((unsigned int *)t6) = 1;

LAB97:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB98;

LAB99:    xsi_set_current_line(184, ng0);
    t2 = (t0 + 6128U);
    t3 = *((char **)t2);
    t2 = (t0 + 4960);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB113;

LAB110:    if (t18 != 0)
        goto LAB112;

LAB111:    *((unsigned int *)t6) = 1;

LAB113:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB114;

LAB115:    xsi_set_current_line(189, ng0);

LAB126:    xsi_set_current_line(190, ng0);
    t2 = (t0 + 6288U);
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
        goto LAB130;

LAB127:    if (t18 != 0)
        goto LAB129;

LAB128:    *((unsigned int *)t6) = 1;

LAB130:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB131;

LAB132:    xsi_set_current_line(198, ng0);
    t2 = (t0 + 6288U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
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
        goto LAB146;

LAB143:    if (t18 != 0)
        goto LAB145;

LAB144:    *((unsigned int *)t6) = 1;

LAB146:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB147;

LAB148:
LAB149:
LAB133:
LAB116:
LAB100:
LAB84:
LAB68:
LAB52:
LAB44:
LAB36:
LAB28:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(112, ng0);

LAB13:    xsi_set_current_line(113, ng0);
    t28 = (t0 + 1288);
    t29 = *((char **)t28);
    t28 = (t0 + 8128);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, 0, 1, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t2 = (t0 + 8288);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 2376);
    t3 = *((char **)t2);
    t2 = (t0 + 7648);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB15:    *((unsigned int *)t6) = 1;
    goto LAB18;

LAB20:    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t21);
    *((unsigned int *)t6) = (t16 | t17);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t21);
    *((unsigned int *)t8) = (t18 | t19);
    goto LAB19;

LAB22:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB24;

LAB26:    xsi_set_current_line(138, ng0);

LAB29:    xsi_set_current_line(139, ng0);
    t21 = (t0 + 6128U);
    t22 = *((char **)t21);
    memset(t30, 0, 8);
    t21 = (t30 + 4);
    t28 = (t22 + 4);
    t14 = *((unsigned int *)t22);
    t15 = (t14 >> 0);
    *((unsigned int *)t30) = t15;
    t16 = *((unsigned int *)t28);
    t17 = (t16 >> 0);
    *((unsigned int *)t21) = t17;
    t18 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t18 & 7U);
    t19 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t19 & 7U);
    t29 = (t0 + 6688);
    xsi_vlogvar_wait_assign_value(t29, t30, 0, 0, 3, 0LL);
    goto LAB28;

LAB32:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(143, ng0);

LAB37:    xsi_set_current_line(144, ng0);
    t21 = ((char*)((ng1)));
    t22 = (t0 + 7008);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 1, 0LL);
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 2920);
    t3 = *((char **)t2);
    t2 = (t0 + 7168);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    goto LAB36;

LAB40:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB41;

LAB42:    xsi_set_current_line(147, ng0);

LAB45:    xsi_set_current_line(148, ng0);
    t21 = (t0 + 2784);
    t22 = *((char **)t21);
    t21 = (t0 + 7168);
    xsi_vlogvar_wait_assign_value(t21, t22, 0, 0, 2, 0LL);
    goto LAB44;

LAB48:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(149, ng0);

LAB53:    xsi_set_current_line(150, ng0);
    t21 = (t0 + 2784);
    t22 = *((char **)t21);
    t21 = (t0 + 7168);
    xsi_vlogvar_wait_assign_value(t21, t22, 0, 0, 2, 0LL);
    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 8128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1424);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB57;

LAB54:    if (t18 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t6) = 1;

LAB57:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB58;

LAB59:
LAB60:    goto LAB52;

LAB56:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB57;

LAB58:    xsi_set_current_line(152, ng0);

LAB61:    xsi_set_current_line(153, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 7488);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    goto LAB60;

LAB64:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB65;

LAB66:    xsi_set_current_line(158, ng0);

LAB69:    xsi_set_current_line(159, ng0);
    t21 = (t0 + 8128);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = (t0 + 1424);
    t31 = *((char **)t29);
    memset(t30, 0, 8);
    t29 = (t28 + 4);
    t32 = (t31 + 4);
    t33 = *((unsigned int *)t28);
    t34 = *((unsigned int *)t31);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t29);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t29);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB73;

LAB70:    if (t42 != 0)
        goto LAB72;

LAB71:    *((unsigned int *)t30) = 1;

LAB73:    t46 = (t30 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB74;

LAB75:
LAB76:    xsi_set_current_line(162, ng0);
    t2 = (t0 + 2104);
    t3 = *((char **)t2);
    t2 = (t0 + 7648);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB68;

LAB72:    t45 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB73;

LAB74:    xsi_set_current_line(159, ng0);

LAB77:    xsi_set_current_line(160, ng0);
    t52 = (t0 + 1832);
    t53 = *((char **)t52);
    t52 = (t0 + 6848);
    xsi_vlogvar_wait_assign_value(t52, t53, 0, 0, 2, 0LL);
    goto LAB76;

LAB80:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB81;

LAB82:    xsi_set_current_line(164, ng0);

LAB85:    xsi_set_current_line(165, ng0);
    t21 = (t0 + 8128);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = (t0 + 1424);
    t31 = *((char **)t29);
    memset(t30, 0, 8);
    t29 = (t28 + 4);
    t32 = (t31 + 4);
    t33 = *((unsigned int *)t28);
    t34 = *((unsigned int *)t31);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t29);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t29);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB89;

LAB86:    if (t42 != 0)
        goto LAB88;

LAB87:    *((unsigned int *)t30) = 1;

LAB89:    t46 = (t30 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB90;

LAB91:
LAB92:    xsi_set_current_line(168, ng0);
    t2 = (t0 + 2240);
    t3 = *((char **)t2);
    t2 = (t0 + 7648);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(169, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB84;

LAB88:    t45 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB89;

LAB90:    xsi_set_current_line(165, ng0);

LAB93:    xsi_set_current_line(166, ng0);
    t52 = (t0 + 1832);
    t53 = *((char **)t52);
    t52 = (t0 + 6848);
    xsi_vlogvar_wait_assign_value(t52, t53, 0, 0, 2, 0LL);
    goto LAB92;

LAB96:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB97;

LAB98:    xsi_set_current_line(173, ng0);

LAB101:    xsi_set_current_line(175, ng0);
    t21 = (t0 + 8128);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = (t0 + 1424);
    t31 = *((char **)t29);
    memset(t30, 0, 8);
    t29 = (t28 + 4);
    t32 = (t31 + 4);
    t33 = *((unsigned int *)t28);
    t34 = *((unsigned int *)t31);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t29);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t29);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB105;

LAB102:    if (t42 != 0)
        goto LAB104;

LAB103:    *((unsigned int *)t30) = 1;

LAB105:    t46 = (t30 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB106;

LAB107:
LAB108:    xsi_set_current_line(178, ng0);
    t2 = (t0 + 2648);
    t3 = *((char **)t2);
    t2 = (t0 + 7168);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    goto LAB100;

LAB104:    t45 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB105;

LAB106:    xsi_set_current_line(175, ng0);

LAB109:    xsi_set_current_line(176, ng0);
    t52 = (t0 + 1832);
    t53 = *((char **)t52);
    t52 = (t0 + 6848);
    xsi_vlogvar_wait_assign_value(t52, t53, 0, 0, 2, 0LL);
    goto LAB108;

LAB112:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB113;

LAB114:    xsi_set_current_line(184, ng0);

LAB117:    xsi_set_current_line(185, ng0);
    t21 = (t0 + 8128);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = (t0 + 1424);
    t31 = *((char **)t29);
    memset(t30, 0, 8);
    t29 = (t28 + 4);
    t32 = (t31 + 4);
    t33 = *((unsigned int *)t28);
    t34 = *((unsigned int *)t31);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t29);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t29);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB121;

LAB118:    if (t42 != 0)
        goto LAB120;

LAB119:    *((unsigned int *)t30) = 1;

LAB121:    t46 = (t30 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB122;

LAB123:
LAB124:    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB116;

LAB120:    t45 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB121;

LAB122:    xsi_set_current_line(185, ng0);

LAB125:    xsi_set_current_line(186, ng0);
    t52 = (t0 + 1832);
    t53 = *((char **)t52);
    t52 = (t0 + 6848);
    xsi_vlogvar_wait_assign_value(t52, t53, 0, 0, 2, 0LL);
    goto LAB124;

LAB129:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB130;

LAB131:    xsi_set_current_line(190, ng0);

LAB134:    xsi_set_current_line(191, ng0);
    t21 = (t0 + 8128);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = (t0 + 1424);
    t31 = *((char **)t29);
    memset(t30, 0, 8);
    t29 = (t28 + 4);
    t32 = (t31 + 4);
    t33 = *((unsigned int *)t28);
    t34 = *((unsigned int *)t31);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t29);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t29);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB138;

LAB135:    if (t42 != 0)
        goto LAB137;

LAB136:    *((unsigned int *)t30) = 1;

LAB138:    t46 = (t30 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB139;

LAB140:
LAB141:    xsi_set_current_line(194, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB133;

LAB137:    t45 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB138;

LAB139:    xsi_set_current_line(191, ng0);

LAB142:    xsi_set_current_line(192, ng0);
    t52 = (t0 + 1968);
    t53 = *((char **)t52);
    t52 = (t0 + 6848);
    xsi_vlogvar_wait_assign_value(t52, t53, 0, 0, 2, 0LL);
    goto LAB141;

LAB145:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB146;

LAB147:    xsi_set_current_line(198, ng0);

LAB150:    xsi_set_current_line(199, ng0);
    t21 = (t0 + 1560);
    t22 = *((char **)t21);
    t21 = (t0 + 6848);
    xsi_vlogvar_wait_assign_value(t21, t22, 0, 0, 2, 0LL);
    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB149;

}


extern void work_m_00000000002838831641_2468887365_init()
{
	static char *pe[] = {(void *)Always_111_0};
	xsi_register_didat("work_m_00000000002838831641_2468887365", "isim/tb_CPU_isim_beh.exe.sim/work/m_00000000002838831641_2468887365.didat");
	xsi_register_executes(pe);
}
