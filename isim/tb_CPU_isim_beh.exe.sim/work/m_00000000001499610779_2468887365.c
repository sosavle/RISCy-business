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



static void Always_78_0(char *t0)
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

LAB0:    t1 = (t0 + 8256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 8824);
    *((int *)t2) = 1;
    t3 = (t0 + 8288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(78, ng0);

LAB5:    xsi_set_current_line(79, ng0);
    t4 = (t0 + 5016U);
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

LAB11:    xsi_set_current_line(81, ng0);

LAB14:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 7336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7176);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(79, ng0);

LAB13:    xsi_set_current_line(80, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 7176);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    goto LAB12;

}

static void Always_86_1(char *t0)
{
    char t7[8];
    char t24[8];
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;

LAB0:    t1 = (t0 + 8504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 8840);
    *((int *)t2) = 1;
    t3 = (t0 + 8536);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(86, ng0);

LAB5:    xsi_set_current_line(89, ng0);
    t4 = (t0 + 7176);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t7, t6, 8);
    t8 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 2, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5736);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6056);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6216);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 7176);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6376);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 7176);
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
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;

LAB9:    t8 = (t7 + 4);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (~(t15));
    *((unsigned int *)t7) = t16;
    *((unsigned int *)t8) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t21 & 1U);
    t22 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t22 & 1U);
    t23 = (t0 + 7336);
    xsi_vlogvar_wait_assign_value(t23, t7, 0, 0, 1, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6856);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6696);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 7176);
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
        goto LAB15;

LAB13:    if (*((unsigned int *)t5) == 0)
        goto LAB12;

LAB14:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;

LAB15:    t8 = (t7 + 4);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (~(t15));
    *((unsigned int *)t7) = t16;
    *((unsigned int *)t8) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB17;

LAB16:    t21 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t21 & 1U);
    t22 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t22 & 1U);
    t23 = (t0 + 7016);
    xsi_vlogvar_wait_assign_value(t23, t7, 0, 0, 1, 0LL);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 5176U);
    t3 = *((char **)t2);
    t2 = (t0 + 3056);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB19;

LAB18:    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB19;

LAB22:    if (*((unsigned int *)t3) > *((unsigned int *)t4))
        goto LAB21;

LAB20:    *((unsigned int *)t7) = 1;

LAB21:    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 5176U);
    t3 = *((char **)t2);
    t2 = (t0 + 3192);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t5);
    t15 = (t12 ^ t13);
    t16 = (t11 | t15);
    t17 = *((unsigned int *)t2);
    t18 = *((unsigned int *)t5);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB30;

LAB27:    if (t19 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t7) = 1;

LAB30:    t8 = (t7 + 4);
    t22 = *((unsigned int *)t8);
    t27 = (~(t22));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 5176U);
    t3 = *((char **)t2);
    t2 = (t0 + 3328);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t5);
    t15 = (t12 ^ t13);
    t16 = (t11 | t15);
    t17 = *((unsigned int *)t2);
    t18 = *((unsigned int *)t5);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB38;

LAB35:    if (t19 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t7) = 1;

LAB38:    t8 = (t7 + 4);
    t22 = *((unsigned int *)t8);
    t27 = (~(t22));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 5176U);
    t3 = *((char **)t2);
    t2 = (t0 + 3464);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t5);
    t15 = (t12 ^ t13);
    t16 = (t11 | t15);
    t17 = *((unsigned int *)t2);
    t18 = *((unsigned int *)t5);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB46;

LAB43:    if (t19 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t7) = 1;

LAB46:    t8 = (t7 + 4);
    t22 = *((unsigned int *)t8);
    t27 = (~(t22));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 5176U);
    t3 = *((char **)t2);
    t2 = (t0 + 3600);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t5);
    t15 = (t12 ^ t13);
    t16 = (t11 | t15);
    t17 = *((unsigned int *)t2);
    t18 = *((unsigned int *)t5);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB54;

LAB51:    if (t19 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t7) = 1;

LAB54:    t8 = (t7 + 4);
    t22 = *((unsigned int *)t8);
    t27 = (~(t22));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 5176U);
    t3 = *((char **)t2);
    t2 = (t0 + 3736);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t5);
    t15 = (t12 ^ t13);
    t16 = (t11 | t15);
    t17 = *((unsigned int *)t2);
    t18 = *((unsigned int *)t5);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB62;

LAB59:    if (t19 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t7) = 1;

LAB62:    t8 = (t7 + 4);
    t22 = *((unsigned int *)t8);
    t27 = (~(t22));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 5176U);
    t3 = *((char **)t2);
    t2 = (t0 + 3872);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t5);
    t15 = (t12 ^ t13);
    t16 = (t11 | t15);
    t17 = *((unsigned int *)t2);
    t18 = *((unsigned int *)t5);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB70;

LAB67:    if (t19 != 0)
        goto LAB69;

LAB68:    *((unsigned int *)t7) = 1;

LAB70:    t8 = (t7 + 4);
    t22 = *((unsigned int *)t8);
    t27 = (~(t22));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB71;

LAB72:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 5176U);
    t3 = *((char **)t2);
    t2 = (t0 + 4008);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t5);
    t15 = (t12 ^ t13);
    t16 = (t11 | t15);
    t17 = *((unsigned int *)t2);
    t18 = *((unsigned int *)t5);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB78;

LAB75:    if (t19 != 0)
        goto LAB77;

LAB76:    *((unsigned int *)t7) = 1;

LAB78:    t8 = (t7 + 4);
    t22 = *((unsigned int *)t8);
    t27 = (~(t22));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB79;

LAB80:    xsi_set_current_line(131, ng0);

LAB83:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 5336U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t7, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t15 = (t12 ^ t13);
    t16 = (t11 | t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB87;

LAB84:    if (t19 != 0)
        goto LAB86;

LAB85:    *((unsigned int *)t7) = 1;

LAB87:    t8 = (t7 + 4);
    t22 = *((unsigned int *)t8);
    t27 = (~(t22));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB88;

LAB89:    xsi_set_current_line(134, ng0);

LAB92:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t2 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t2 = (t0 + 7336);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7016);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB90:
LAB81:
LAB73:
LAB65:
LAB57:
LAB49:
LAB41:
LAB33:
LAB25:    goto LAB2;

LAB6:    *((unsigned int *)t7) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t7) = (t17 | t18);
    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t8) = (t19 | t20);
    goto LAB10;

LAB12:    *((unsigned int *)t7) = 1;
    goto LAB15;

LAB17:    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t7) = (t17 | t18);
    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t8) = (t19 | t20);
    goto LAB16;

LAB19:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB21;

LAB23:    xsi_set_current_line(101, ng0);

LAB26:    xsi_set_current_line(102, ng0);
    t14 = (t0 + 5176U);
    t23 = *((char **)t14);
    memset(t24, 0, 8);
    t14 = (t24 + 4);
    t25 = (t23 + 4);
    t15 = *((unsigned int *)t23);
    t16 = (t15 >> 0);
    *((unsigned int *)t24) = t16;
    t17 = *((unsigned int *)t25);
    t18 = (t17 >> 0);
    *((unsigned int *)t14) = t18;
    t19 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t19 & 7U);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t20 & 7U);
    t26 = (t0 + 5736);
    xsi_vlogvar_wait_assign_value(t26, t24, 0, 0, 3, 0LL);
    goto LAB25;

LAB29:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(106, ng0);

LAB34:    xsi_set_current_line(107, ng0);
    t14 = ((char*)((ng1)));
    t23 = (t0 + 6056);
    xsi_vlogvar_wait_assign_value(t23, t14, 0, 0, 1, 0LL);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6216);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB33;

LAB37:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB38;

LAB39:    xsi_set_current_line(109, ng0);

LAB42:    xsi_set_current_line(110, ng0);
    t14 = ((char*)((ng1)));
    t23 = (t0 + 6216);
    xsi_vlogvar_wait_assign_value(t23, t14, 0, 0, 1, 0LL);
    goto LAB41;

LAB45:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB46;

LAB47:    xsi_set_current_line(111, ng0);

LAB50:    xsi_set_current_line(112, ng0);
    t14 = ((char*)((ng1)));
    t23 = (t0 + 6536);
    xsi_vlogvar_wait_assign_value(t23, t14, 0, 0, 1, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6376);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB49;

LAB53:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB54;

LAB55:    xsi_set_current_line(117, ng0);

LAB58:    xsi_set_current_line(118, ng0);
    t14 = (t0 + 1560);
    t23 = *((char **)t14);
    t14 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t14, t23, 0, 0, 2, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 1832);
    t3 = *((char **)t2);
    t2 = (t0 + 6696);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    goto LAB57;

LAB61:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB62;

LAB63:    xsi_set_current_line(120, ng0);

LAB66:    xsi_set_current_line(121, ng0);
    t14 = (t0 + 1560);
    t23 = *((char **)t14);
    t14 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t14, t23, 0, 0, 2, 0LL);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 1968);
    t3 = *((char **)t2);
    t2 = (t0 + 6696);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    goto LAB65;

LAB69:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB70;

LAB71:    xsi_set_current_line(126, ng0);

LAB74:    xsi_set_current_line(127, ng0);
    t14 = (t0 + 1696);
    t23 = *((char **)t14);
    t14 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t14, t23, 0, 0, 2, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6856);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB73;

LAB77:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB78;

LAB79:    xsi_set_current_line(129, ng0);

LAB82:    xsi_set_current_line(130, ng0);
    t14 = (t0 + 1560);
    t23 = *((char **)t14);
    t14 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t14, t23, 0, 0, 2, 0LL);
    goto LAB81;

LAB86:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB87;

LAB88:    xsi_set_current_line(132, ng0);

LAB91:    xsi_set_current_line(133, ng0);
    t14 = (t0 + 1560);
    t23 = *((char **)t14);
    t14 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t14, t23, 0, 0, 2, 0LL);
    goto LAB90;

}


extern void work_m_00000000001499610779_2468887365_init()
{
	static char *pe[] = {(void *)Always_78_0,(void *)Always_86_1};
	xsi_register_didat("work_m_00000000001499610779_2468887365", "isim/tb_CPU_isim_beh.exe.sim/work/m_00000000001499610779_2468887365.didat");
	xsi_register_executes(pe);
}
