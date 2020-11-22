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



static void NetDecl_56_0(char *t0)
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

LAB0:    t1 = (t0 + 5824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 4344U);
    t4 = *((char **)t2);
    t2 = (t0 + 4184U);
    t5 = *((char **)t2);
    xsi_vlogtype_concat(t3, 8, 8, 2U, t5, 4, t4, 4);
    t2 = (t0 + 6488);
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
    t18 = (t0 + 6392);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_58_1(char *t0)
{
    char t6[8];
    char t30[8];
    char t35[8];
    char t43[8];
    char t59[8];
    char t67[8];
    char t109[8];
    char t110[8];
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
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    char *t103;
    int t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t111;

LAB0:    t1 = (t0 + 6072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 6408);
    *((int *)t2) = 1;
    t3 = (t0 + 6104);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(58, ng0);

LAB5:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 3384U);
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

LAB11:    xsi_set_current_line(66, ng0);

LAB14:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 4904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4904);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3544U);
    t3 = *((char **)t2);
    t2 = (t0 + 2512);
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
        goto LAB18;

LAB15:    if (t18 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t6) = 1;

LAB18:    memset(t30, 0, 8);
    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t8) != 0)
        goto LAB21;

LAB22:    t22 = (t30 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = *((unsigned int *)t22);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB23;

LAB24:    memcpy(t67, t30, 8);

LAB25:    t95 = (t67 + 4);
    t96 = *((unsigned int *)t95);
    t97 = (~(t96));
    t98 = *((unsigned int *)t67);
    t99 = (t98 & t97);
    t100 = (t99 != 0);
    if (t100 > 0)
        goto LAB41;

LAB42:
LAB43:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(61, ng0);

LAB13:    xsi_set_current_line(62, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 4904);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 6, 0LL);
    goto LAB12;

LAB17:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t30) = 1;
    goto LAB22;

LAB21:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB22;

LAB23:    t28 = (t0 + 3544U);
    t29 = *((char **)t28);
    t28 = (t0 + 3864U);
    t36 = *((char **)t28);
    memset(t35, 0, 8);
    t28 = (t36 + 4);
    t37 = *((unsigned int *)t28);
    t38 = (~(t37));
    t39 = *((unsigned int *)t36);
    t40 = (t39 & t38);
    t41 = (t40 & 65535U);
    if (t41 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t28) != 0)
        goto LAB28;

LAB29:    memset(t43, 0, 8);
    t44 = (t29 + 4);
    t45 = (t35 + 4);
    t46 = *((unsigned int *)t29);
    t47 = *((unsigned int *)t35);
    t48 = (t46 ^ t47);
    t49 = *((unsigned int *)t44);
    t50 = *((unsigned int *)t45);
    t51 = (t49 ^ t50);
    t52 = (t48 | t51);
    t53 = *((unsigned int *)t44);
    t54 = *((unsigned int *)t45);
    t55 = (t53 | t54);
    t56 = (~(t55));
    t57 = (t52 & t56);
    if (t57 != 0)
        goto LAB33;

LAB30:    if (t55 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t43) = 1;

LAB33:    memset(t59, 0, 8);
    t60 = (t43 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t43);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t60) != 0)
        goto LAB36;

LAB37:    t68 = *((unsigned int *)t30);
    t69 = *((unsigned int *)t59);
    t70 = (t68 | t69);
    *((unsigned int *)t67) = t70;
    t71 = (t30 + 4);
    t72 = (t59 + 4);
    t73 = (t67 + 4);
    t74 = *((unsigned int *)t71);
    t75 = *((unsigned int *)t72);
    t76 = (t74 | t75);
    *((unsigned int *)t73) = t76;
    t77 = *((unsigned int *)t73);
    t78 = (t77 != 0);
    if (t78 == 1)
        goto LAB38;

LAB39:
LAB40:    goto LAB25;

LAB26:    *((unsigned int *)t35) = 1;
    goto LAB29;

LAB28:    t42 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB29;

LAB32:    t58 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB33;

LAB34:    *((unsigned int *)t59) = 1;
    goto LAB37;

LAB36:    t66 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB37;

LAB38:    t79 = *((unsigned int *)t67);
    t80 = *((unsigned int *)t73);
    *((unsigned int *)t67) = (t79 | t80);
    t81 = (t30 + 4);
    t82 = (t59 + 4);
    t83 = *((unsigned int *)t81);
    t84 = (~(t83));
    t85 = *((unsigned int *)t30);
    t86 = (t85 & t84);
    t87 = *((unsigned int *)t82);
    t88 = (~(t87));
    t89 = *((unsigned int *)t59);
    t90 = (t89 & t88);
    t91 = (~(t86));
    t92 = (~(t90));
    t93 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t93 & t91);
    t94 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t94 & t92);
    goto LAB40;

LAB41:    xsi_set_current_line(70, ng0);

LAB44:    xsi_set_current_line(71, ng0);
    t101 = (t0 + 3704U);
    t102 = *((char **)t101);

LAB45:    t101 = (t0 + 1968);
    t103 = *((char **)t101);
    t104 = xsi_vlog_unsigned_case_compare(t102, 2, t103, 32);
    if (t104 == 1)
        goto LAB46;

LAB47:    t2 = (t0 + 2104);
    t3 = *((char **)t2);
    t86 = xsi_vlog_unsigned_case_compare(t102, 2, t3, 32);
    if (t86 == 1)
        goto LAB48;

LAB49:    t2 = (t0 + 1832);
    t3 = *((char **)t2);
    t86 = xsi_vlog_unsigned_case_compare(t102, 2, t3, 32);
    if (t86 == 1)
        goto LAB50;

LAB51:
LAB52:    goto LAB43;

LAB46:    xsi_set_current_line(73, ng0);
    t101 = (t0 + 4904);
    t105 = (t101 + 56U);
    t106 = *((char **)t105);
    t107 = (t0 + 4504U);
    t108 = *((char **)t107);
    memset(t109, 0, 8);
    xsi_vlog_unsigned_add(t109, 32, t106, 6, t108, 8);
    t107 = ((char*)((ng1)));
    memset(t110, 0, 8);
    xsi_vlog_unsigned_add(t110, 32, t109, 32, t107, 32);
    t111 = (t0 + 4904);
    xsi_vlogvar_wait_assign_value(t111, t110, 0, 0, 6, 0LL);
    goto LAB52;

LAB48:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 4024U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 63U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 63U);
    t7 = (t0 + 4904);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 6, 0LL);
    goto LAB52;

LAB50:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 4904);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t5, 6, t7, 32);
    t8 = (t0 + 4904);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 6, 0LL);
    goto LAB52;

}


extern void work_m_00000000003775359485_3117176954_init()
{
	static char *pe[] = {(void *)NetDecl_56_0,(void *)Always_58_1};
	xsi_register_didat("work_m_00000000003775359485_3117176954", "isim/tb_CPU_isim_beh.exe.sim/work/m_00000000003775359485_3117176954.didat");
	xsi_register_executes(pe);
}
