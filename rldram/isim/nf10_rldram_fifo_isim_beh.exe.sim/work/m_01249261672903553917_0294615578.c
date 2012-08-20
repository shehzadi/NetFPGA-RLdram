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

/* This file is designed for use with ISim build 0xb4d1ced7 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/shehzadi/cleanedUp/axififo.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 0U};



static void Always_104_0(char *t0)
{
    char t13[8];
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

LAB0:    t1 = (t0 + 9320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 10632);
    *((int *)t2) = 1;
    t3 = (t0 + 9352);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(105, ng0);

LAB5:    xsi_set_current_line(106, ng0);
    t4 = (t0 + 2568U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(113, ng0);

LAB10:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 7128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6968);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 19, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 7448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7608);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 7768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7928);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(107, ng0);

LAB9:    xsi_set_current_line(108, ng0);
    t11 = (t0 + 1560);
    t12 = *((char **)t11);
    t11 = ((char*)((ng1)));
    memset(t13, 0, 8);
    xsi_vlog_signed_minus(t13, 32, t12, 32, t11, 32);
    t14 = (t0 + 6968);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 19, 0LL);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

}

static void Always_120_1(char *t0)
{
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

LAB0:    t1 = (t0 + 9568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 10648);
    *((int *)t2) = 1;
    t3 = (t0 + 9600);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(121, ng0);

LAB5:    xsi_set_current_line(122, ng0);
    t4 = (t0 + 2568U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 8408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6328);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(123, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 6328);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    goto LAB8;

}

static void Always_129_2(char *t0)
{
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

LAB0:    t1 = (t0 + 9816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 10664);
    *((int *)t2) = 1;
    t3 = (t0 + 9848);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(130, ng0);

LAB5:    xsi_set_current_line(131, ng0);
    t4 = (t0 + 4168U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(137, ng0);

LAB10:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 4328U);
    t3 = *((char **)t2);
    t2 = (t0 + 8248);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(132, ng0);

LAB9:    xsi_set_current_line(133, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 8248);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

}

static void Always_143_3(char *t0)
{
    char t6[8];
    char t21[8];
    char t35[8];
    char t42[8];
    char t86[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t87;

LAB0:    t1 = (t0 + 10064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 10680);
    *((int *)t2) = 1;
    t3 = (t0 + 10096);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(144, ng0);

LAB5:    xsi_set_current_line(145, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 6168);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 7608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 6328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 7928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 5448U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t2) == 0)
        goto LAB6;

LAB8:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB9:    t5 = (t6 + 4);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    *((unsigned int *)t6) = t14;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB11;

LAB10:    t19 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t19 & 1U);
    t20 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t20 & 1U);
    memset(t21, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t22) != 0)
        goto LAB14;

LAB15:    t29 = (t21 + 4);
    t30 = *((unsigned int *)t21);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB16;

LAB17:    memcpy(t42, t21, 8);

LAB18:    t74 = (t42 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t42);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB26;

LAB27:
LAB28:    xsi_set_current_line(180, ng0);
    t2 = (t0 + 6488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t5) != 0)
        goto LAB55;

LAB56:    t22 = (t6 + 4);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t22);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB57;

LAB58:    memcpy(t42, t6, 8);

LAB59:    t81 = (t42 + 4);
    t75 = *((unsigned int *)t81);
    t76 = (~(t75));
    t77 = *((unsigned int *)t42);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB73;

LAB74:    xsi_set_current_line(182, ng0);
    t2 = (t0 + 6488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB79;

LAB77:    if (*((unsigned int *)t5) == 0)
        goto LAB76;

LAB78:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;

LAB79:    t22 = (t6 + 4);
    t28 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t6) = t14;
    *((unsigned int *)t22) = 0;
    if (*((unsigned int *)t28) != 0)
        goto LAB81;

LAB80:    t19 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t19 & 1U);
    t20 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t20 & 1U);
    memset(t21, 0, 8);
    t29 = (t6 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t29) != 0)
        goto LAB84;

LAB85:    t34 = (t21 + 4);
    t30 = *((unsigned int *)t21);
    t31 = *((unsigned int *)t34);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB86;

LAB87:    memcpy(t42, t21, 8);

LAB88:    t81 = (t42 + 4);
    t75 = *((unsigned int *)t81);
    t76 = (~(t75));
    t77 = *((unsigned int *)t42);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB96;

LAB97:    xsi_set_current_line(185, ng0);
    t2 = (t0 + 6968);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7128);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 19);

LAB98:
LAB75:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB11:    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t15 | t16);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t5) = (t17 | t18);
    goto LAB10;

LAB12:    *((unsigned int *)t21) = 1;
    goto LAB15;

LAB14:    t28 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB15;

LAB16:    t33 = (t0 + 5128U);
    t34 = *((char **)t33);
    memset(t35, 0, 8);
    t33 = (t34 + 4);
    t36 = *((unsigned int *)t33);
    t37 = (~(t36));
    t38 = *((unsigned int *)t34);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t33) != 0)
        goto LAB21;

LAB22:    t43 = *((unsigned int *)t21);
    t44 = *((unsigned int *)t35);
    t45 = (t43 & t44);
    *((unsigned int *)t42) = t45;
    t46 = (t21 + 4);
    t47 = (t35 + 4);
    t48 = (t42 + 4);
    t49 = *((unsigned int *)t46);
    t50 = *((unsigned int *)t47);
    t51 = (t49 | t50);
    *((unsigned int *)t48) = t51;
    t52 = *((unsigned int *)t48);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB18;

LAB19:    *((unsigned int *)t35) = 1;
    goto LAB22;

LAB21:    t41 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB22;

LAB23:    t54 = *((unsigned int *)t42);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t42) = (t54 | t55);
    t56 = (t21 + 4);
    t57 = (t35 + 4);
    t58 = *((unsigned int *)t21);
    t59 = (~(t58));
    t60 = *((unsigned int *)t56);
    t61 = (~(t60));
    t62 = *((unsigned int *)t35);
    t63 = (~(t62));
    t64 = *((unsigned int *)t57);
    t65 = (~(t64));
    t66 = (t59 & t61);
    t67 = (t63 & t65);
    t68 = (~(t66));
    t69 = (~(t67));
    t70 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t70 & t68);
    t71 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t68);
    t73 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t73 & t69);
    goto LAB25;

LAB26:    xsi_set_current_line(153, ng0);

LAB29:    xsi_set_current_line(154, ng0);
    t80 = ((char*)((ng2)));
    t81 = (t0 + 6168);
    xsi_vlogvar_assign_value(t81, t80, 0, 0, 1);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB30;

LAB31:
LAB32:    goto LAB28;

LAB30:    xsi_set_current_line(156, ng0);

LAB33:    xsi_set_current_line(157, ng0);
    t4 = (t0 + 6328);
    t5 = (t4 + 56U);
    t12 = *((char **)t5);
    t22 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t12, 32, t22, 32);
    t28 = (t0 + 8408);
    xsi_vlogvar_assign_value(t28, t6, 0, 0, 32);
    xsi_set_current_line(159, ng0);
    t2 = (t0 + 7928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB34;

LAB35:
LAB36:    xsi_set_current_line(162, ng0);
    t2 = (t0 + 3368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB39:    xsi_set_current_line(166, ng0);
    t2 = (t0 + 7608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB40;

LAB41:
LAB42:    goto LAB32;

LAB34:    xsi_set_current_line(160, ng0);
    t12 = ((char*)((ng2)));
    t22 = (t0 + 6488);
    xsi_vlogvar_assign_value(t22, t12, 0, 0, 1);
    goto LAB36;

LAB37:    xsi_set_current_line(163, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 7448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB39;

LAB40:    xsi_set_current_line(167, ng0);

LAB43:    xsi_set_current_line(169, ng0);
    t12 = (t0 + 6968);
    t22 = (t12 + 56U);
    t28 = *((char **)t22);
    t29 = (t0 + 3848U);
    t33 = *((char **)t29);
    memset(t6, 0, 8);
    t29 = (t6 + 4);
    t34 = (t33 + 4);
    t13 = *((unsigned int *)t33);
    t14 = (t13 >> 3);
    *((unsigned int *)t6) = t14;
    t15 = *((unsigned int *)t34);
    t16 = (t15 >> 3);
    *((unsigned int *)t29) = t16;
    t17 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t17 & 8191U);
    t18 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t18 & 8191U);
    memset(t21, 0, 8);
    t41 = (t28 + 4);
    if (*((unsigned int *)t41) != 0)
        goto LAB45;

LAB44:    t46 = (t6 + 4);
    if (*((unsigned int *)t46) != 0)
        goto LAB45;

LAB48:    if (*((unsigned int *)t28) > *((unsigned int *)t6))
        goto LAB46;

LAB47:    t48 = (t21 + 4);
    t19 = *((unsigned int *)t48);
    t20 = (~(t19));
    t23 = *((unsigned int *)t21);
    t24 = (t23 & t20);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(175, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB51:    goto LAB42;

LAB45:    t47 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB47;

LAB46:    *((unsigned int *)t21) = 1;
    goto LAB47;

LAB49:    xsi_set_current_line(170, ng0);

LAB52:    xsi_set_current_line(171, ng0);
    t56 = ((char*)((ng2)));
    t57 = (t0 + 6488);
    xsi_vlogvar_assign_value(t57, t56, 0, 0, 1);
    xsi_set_current_line(172, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB51;

LAB53:    *((unsigned int *)t6) = 1;
    goto LAB56;

LAB55:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB56;

LAB57:    t28 = (t0 + 5288U);
    t29 = *((char **)t28);
    memset(t21, 0, 8);
    t28 = (t29 + 4);
    t16 = *((unsigned int *)t28);
    t17 = (~(t16));
    t18 = *((unsigned int *)t29);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB63;

LAB61:    if (*((unsigned int *)t28) == 0)
        goto LAB60;

LAB62:    t33 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t33) = 1;

LAB63:    t34 = (t21 + 4);
    t41 = (t29 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    *((unsigned int *)t21) = t24;
    *((unsigned int *)t34) = 0;
    if (*((unsigned int *)t41) != 0)
        goto LAB65;

LAB64:    t31 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t31 & 1U);
    t32 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t32 & 1U);
    memset(t35, 0, 8);
    t46 = (t21 + 4);
    t36 = *((unsigned int *)t46);
    t37 = (~(t36));
    t38 = *((unsigned int *)t21);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t46) != 0)
        goto LAB68;

LAB69:    t43 = *((unsigned int *)t6);
    t44 = *((unsigned int *)t35);
    t45 = (t43 & t44);
    *((unsigned int *)t42) = t45;
    t48 = (t6 + 4);
    t56 = (t35 + 4);
    t57 = (t42 + 4);
    t49 = *((unsigned int *)t48);
    t50 = *((unsigned int *)t56);
    t51 = (t49 | t50);
    *((unsigned int *)t57) = t51;
    t52 = *((unsigned int *)t57);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB70;

LAB71:
LAB72:    goto LAB59;

LAB60:    *((unsigned int *)t21) = 1;
    goto LAB63;

LAB65:    t25 = *((unsigned int *)t21);
    t26 = *((unsigned int *)t41);
    *((unsigned int *)t21) = (t25 | t26);
    t27 = *((unsigned int *)t34);
    t30 = *((unsigned int *)t41);
    *((unsigned int *)t34) = (t27 | t30);
    goto LAB64;

LAB66:    *((unsigned int *)t35) = 1;
    goto LAB69;

LAB68:    t47 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB69;

LAB70:    t54 = *((unsigned int *)t42);
    t55 = *((unsigned int *)t57);
    *((unsigned int *)t42) = (t54 | t55);
    t74 = (t6 + 4);
    t80 = (t35 + 4);
    t58 = *((unsigned int *)t6);
    t59 = (~(t58));
    t60 = *((unsigned int *)t74);
    t61 = (~(t60));
    t62 = *((unsigned int *)t35);
    t63 = (~(t62));
    t64 = *((unsigned int *)t80);
    t65 = (~(t64));
    t66 = (t59 & t61);
    t67 = (t63 & t65);
    t68 = (~(t66));
    t69 = (~(t67));
    t70 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t70 & t68);
    t71 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t68);
    t73 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t73 & t69);
    goto LAB72;

LAB73:    xsi_set_current_line(181, ng0);
    t82 = (t0 + 6968);
    t83 = (t82 + 56U);
    t84 = *((char **)t83);
    t85 = ((char*)((ng1)));
    memset(t86, 0, 8);
    xsi_vlog_unsigned_minus(t86, 32, t84, 19, t85, 32);
    t87 = (t0 + 7128);
    xsi_vlogvar_assign_value(t87, t86, 0, 0, 19);
    goto LAB75;

LAB76:    *((unsigned int *)t6) = 1;
    goto LAB79;

LAB81:    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t28);
    *((unsigned int *)t6) = (t15 | t16);
    t17 = *((unsigned int *)t22);
    t18 = *((unsigned int *)t28);
    *((unsigned int *)t22) = (t17 | t18);
    goto LAB80;

LAB82:    *((unsigned int *)t21) = 1;
    goto LAB85;

LAB84:    t33 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB85;

LAB86:    t41 = (t0 + 5288U);
    t46 = *((char **)t41);
    memset(t35, 0, 8);
    t41 = (t46 + 4);
    t36 = *((unsigned int *)t41);
    t37 = (~(t36));
    t38 = *((unsigned int *)t46);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB89;

LAB90:    if (*((unsigned int *)t41) != 0)
        goto LAB91;

LAB92:    t43 = *((unsigned int *)t21);
    t44 = *((unsigned int *)t35);
    t45 = (t43 & t44);
    *((unsigned int *)t42) = t45;
    t48 = (t21 + 4);
    t56 = (t35 + 4);
    t57 = (t42 + 4);
    t49 = *((unsigned int *)t48);
    t50 = *((unsigned int *)t56);
    t51 = (t49 | t50);
    *((unsigned int *)t57) = t51;
    t52 = *((unsigned int *)t57);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB93;

LAB94:
LAB95:    goto LAB88;

LAB89:    *((unsigned int *)t35) = 1;
    goto LAB92;

LAB91:    t47 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB92;

LAB93:    t54 = *((unsigned int *)t42);
    t55 = *((unsigned int *)t57);
    *((unsigned int *)t42) = (t54 | t55);
    t74 = (t21 + 4);
    t80 = (t35 + 4);
    t58 = *((unsigned int *)t21);
    t59 = (~(t58));
    t60 = *((unsigned int *)t74);
    t61 = (~(t60));
    t62 = *((unsigned int *)t35);
    t63 = (~(t62));
    t64 = *((unsigned int *)t80);
    t65 = (~(t64));
    t66 = (t59 & t61);
    t67 = (t63 & t65);
    t68 = (~(t66));
    t69 = (~(t67));
    t70 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t70 & t68);
    t71 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t68);
    t73 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t73 & t69);
    goto LAB95;

LAB96:    xsi_set_current_line(183, ng0);
    t82 = (t0 + 6968);
    t83 = (t82 + 56U);
    t84 = *((char **)t83);
    t85 = ((char*)((ng1)));
    memset(t86, 0, 8);
    xsi_vlog_unsigned_add(t86, 32, t84, 19, t85, 32);
    t87 = (t0 + 7128);
    xsi_vlogvar_assign_value(t87, t86, 0, 0, 19);
    goto LAB98;

}

static void implSig1_execute(char *t0)
{
    char t3[24];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 10312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3368U);
    t4 = *((char **)t2);
    t2 = (t0 + 2888U);
    t5 = *((char **)t2);
    xsi_vlogtype_concat(t3, 65, 65, 2U, t5, 64, t4, 1);
    t2 = (t0 + 10776);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t3, 0, 65);
    xsi_driver_vfirst_trans(t2, 0, 64);
    t10 = (t0 + 10696);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_01249261672903553917_0294615578_init()
{
	static char *pe[] = {(void *)Always_104_0,(void *)Always_120_1,(void *)Always_129_2,(void *)Always_143_3,(void *)implSig1_execute};
	xsi_register_didat("work_m_01249261672903553917_0294615578", "isim/nf10_rldram_fifo_isim_beh.exe.sim/work/m_01249261672903553917_0294615578.didat");
	xsi_register_executes(pe);
}
