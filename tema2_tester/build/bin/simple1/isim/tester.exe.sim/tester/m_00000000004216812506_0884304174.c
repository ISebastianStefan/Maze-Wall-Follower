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
static const char *ng0 = "C:/Users/Sebas/OneDrive/Desktop/Anul 3/SEMESTRUL 1/(AC) Arhitectura calculatoarelor/Tema2/tema2_tester/build/bin/tester/world.v";
static const char *ng1 = "test.data";
static const char *ng2 = "r";
static const char *ng3 = "error opening data file\n";
static const char *ng4 = "starting_row=%d\n";
static int ng5[] = {1, 0};
static const char *ng6 = "error reading starting_row value\n";
static const char *ng7 = "starting_col=%d\n";
static const char *ng8 = "error reading starting_col value\n";
static int ng9[] = {0, 0};
static int ng10[] = {64, 0};
static const char *ng11 = "%d\n";
static const char *ng12 = "error reading test data\n";
static const char *ng13 = "sol.data";
static const char *ng14 = "error opening solution file\n";
static const char *ng15 = "error reading solution starting_row value\n";
static const char *ng16 = "error reading solution starting_col value\n";
static const char *ng17 = "error reading solution data\n";
static int ng18[] = {2, 0};



static void Initial_35_0(char *t0)
{
    char t8[8];
    char t18[8];
    char t22[8];
    char t37[8];
    char t40[8];
    char t41[8];
    char t62[8];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    int t55;
    char *t56;
    int t57;
    int t58;
    int t59;
    int t60;
    char *t61;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;

LAB0:    xsi_set_current_line(35, ng0);

LAB2:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 472);
    t2 = *((char **)t1);
    t1 = (t2 + 4);
    t3 = *((unsigned int *)t1);
    t4 = (~(t3));
    t5 = *((unsigned int *)t2);
    t6 = (t5 & t4);
    t7 = (t6 != 0);
    if (t7 > 0)
        goto LAB3;

LAB4:
LAB5:
LAB1:    return;
LAB3:    xsi_set_current_line(36, ng0);

LAB6:    xsi_set_current_line(38, ng0);
    *((int *)t8) = xsi_vlogfile_file_open_of_cname_ctype(ng1, ng2);
    t9 = (t8 + 4);
    *((int *)t9) = 0;
    t10 = (t0 + 3024);
    xsi_vlogvar_assign_value(t10, t8, 0, 0, 32);
    xsi_set_current_line(39, ng0);
    t1 = (t0 + 3024);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    memset(t8, 0, 8);
    t10 = (t9 + 4);
    t3 = *((unsigned int *)t10);
    t4 = (~(t3));
    t5 = *((unsigned int *)t9);
    t6 = (t5 & t4);
    t7 = (t6 & 4294967295U);
    if (t7 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t10) == 0)
        goto LAB7;

LAB9:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;

LAB10:    t12 = (t8 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 3024);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = (t0 + 3184);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_bit_copy(t8, 0, t12, 0, 32);
    *((int *)t18) = xsi_vlogfile_fscanf(*((unsigned int *)t9), ng4, 2, t0, (char)119, t8, 32);
    t19 = (t18 + 4);
    *((int *)t19) = 0;
    t20 = (t0 + 3184);
    xsi_vlogvar_assign_value(t20, t8, 0, 0, 32);
    t21 = ((char*)((ng5)));
    memset(t22, 0, 8);
    xsi_vlog_signed_not_equal(t22, 32, t18, 32, t21, 32);
    t23 = (t22 + 4);
    t3 = *((unsigned int *)t23);
    t4 = (~(t3));
    t5 = *((unsigned int *)t22);
    t6 = (t5 & t4);
    t7 = (t6 != 0);
    if (t7 > 0)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 3024);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = (t0 + 3184);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_bit_copy(t8, 0, t12, 0, 32);
    *((int *)t18) = xsi_vlogfile_fscanf(*((unsigned int *)t9), ng7, 2, t0, (char)119, t8, 32);
    t19 = (t18 + 4);
    *((int *)t19) = 0;
    t20 = (t0 + 3184);
    xsi_vlogvar_assign_value(t20, t8, 0, 0, 32);
    t21 = ((char*)((ng5)));
    memset(t22, 0, 8);
    xsi_vlog_signed_not_equal(t22, 32, t18, 32, t21, 32);
    t23 = (t22 + 4);
    t3 = *((unsigned int *)t23);
    t4 = (~(t3));
    t5 = *((unsigned int *)t22);
    t6 = (t5 & t4);
    t7 = (t6 != 0);
    if (t7 > 0)
        goto LAB19;

LAB20:
LAB21:    xsi_set_current_line(57, ng0);
    xsi_set_current_line(57, ng0);
    t1 = ((char*)((ng9)));
    t2 = (t0 + 3344);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB23:    t1 = (t0 + 3344);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = ((char*)((ng10)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t9, 32, t10, 32);
    t11 = (t8 + 4);
    t3 = *((unsigned int *)t11);
    t4 = (~(t3));
    t5 = *((unsigned int *)t8);
    t6 = (t5 & t4);
    t7 = (t6 != 0);
    if (t7 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 3024);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    xsi_vlogfile_fclose(*((unsigned int *)t9));
    xsi_set_current_line(71, ng0);
    *((int *)t8) = xsi_vlogfile_file_open_of_cname_ctype(ng13, ng2);
    t1 = (t8 + 4);
    *((int *)t1) = 0;
    t2 = (t0 + 3024);
    xsi_vlogvar_assign_value(t2, t8, 0, 0, 32);
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 3024);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    memset(t8, 0, 8);
    t10 = (t9 + 4);
    t3 = *((unsigned int *)t10);
    t4 = (~(t3));
    t5 = *((unsigned int *)t9);
    t6 = (t5 & t4);
    t7 = (t6 & 4294967295U);
    if (t7 != 0)
        goto LAB40;

LAB38:    if (*((unsigned int *)t10) == 0)
        goto LAB37;

LAB39:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;

LAB40:    t12 = (t8 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB41;

LAB42:
LAB43:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 3024);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = (t0 + 3184);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_bit_copy(t8, 0, t12, 0, 32);
    *((int *)t18) = xsi_vlogfile_fscanf(*((unsigned int *)t9), ng4, 2, t0, (char)119, t8, 32);
    t19 = (t18 + 4);
    *((int *)t19) = 0;
    t20 = (t0 + 3184);
    xsi_vlogvar_assign_value(t20, t8, 0, 0, 32);
    t21 = ((char*)((ng5)));
    memset(t22, 0, 8);
    xsi_vlog_signed_not_equal(t22, 32, t18, 32, t21, 32);
    t23 = (t22 + 4);
    t3 = *((unsigned int *)t23);
    t4 = (~(t3));
    t5 = *((unsigned int *)t22);
    t6 = (t5 & t4);
    t7 = (t6 != 0);
    if (t7 > 0)
        goto LAB45;

LAB46:
LAB47:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 3024);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = (t0 + 3184);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_bit_copy(t8, 0, t12, 0, 32);
    *((int *)t18) = xsi_vlogfile_fscanf(*((unsigned int *)t9), ng7, 2, t0, (char)119, t8, 32);
    t19 = (t18 + 4);
    *((int *)t19) = 0;
    t20 = (t0 + 3184);
    xsi_vlogvar_assign_value(t20, t8, 0, 0, 32);
    t21 = ((char*)((ng5)));
    memset(t22, 0, 8);
    xsi_vlog_signed_not_equal(t22, 32, t18, 32, t21, 32);
    t23 = (t22 + 4);
    t3 = *((unsigned int *)t23);
    t4 = (~(t3));
    t5 = *((unsigned int *)t22);
    t6 = (t5 & t4);
    t7 = (t6 != 0);
    if (t7 > 0)
        goto LAB49;

LAB50:
LAB51:    xsi_set_current_line(90, ng0);
    xsi_set_current_line(90, ng0);
    t1 = ((char*)((ng9)));
    t2 = (t0 + 3344);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB53:    t1 = (t0 + 3344);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = ((char*)((ng10)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t9, 32, t10, 32);
    t11 = (t8 + 4);
    t3 = *((unsigned int *)t11);
    t4 = (~(t3));
    t5 = *((unsigned int *)t8);
    t6 = (t5 & t4);
    t7 = (t6 != 0);
    if (t7 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 3024);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    xsi_vlogfile_fclose(*((unsigned int *)t9));
    goto LAB5;

LAB7:    *((unsigned int *)t8) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(39, ng0);

LAB14:    xsi_set_current_line(40, ng0);
    xsi_vlogfile_write(0, 0, 1, ng3, 1, t0);
    xsi_set_current_line(41, ng0);
    xsi_vlog_finish(1);
    goto LAB13;

LAB15:    xsi_set_current_line(45, ng0);

LAB18:    xsi_set_current_line(46, ng0);
    xsi_vlogfile_write(0, 0, 1, ng6, 1, t0);
    xsi_set_current_line(47, ng0);
    xsi_vlog_finish(1);
    goto LAB17;

LAB19:    xsi_set_current_line(51, ng0);

LAB22:    xsi_set_current_line(52, ng0);
    xsi_vlogfile_write(0, 0, 1, ng8, 1, t0);
    xsi_set_current_line(53, ng0);
    xsi_vlog_finish(1);
    goto LAB21;

LAB24:    xsi_set_current_line(57, ng0);

LAB26:    xsi_set_current_line(58, ng0);
    xsi_set_current_line(58, ng0);
    t12 = ((char*)((ng9)));
    t19 = (t0 + 3504);
    xsi_vlogvar_assign_value(t19, t12, 0, 0, 32);

LAB27:    t1 = (t0 + 3504);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = ((char*)((ng10)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t9, 32, t10, 32);
    t11 = (t8 + 4);
    t3 = *((unsigned int *)t11);
    t4 = (~(t3));
    t5 = *((unsigned int *)t8);
    t6 = (t5 & t4);
    t7 = (t6 != 0);
    if (t7 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 3344);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = ((char*)((ng5)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t9, 32, t10, 32);
    t11 = (t0 + 3344);
    xsi_vlogvar_assign_value(t11, t8, 0, 0, 32);
    goto LAB23;

LAB28:    xsi_set_current_line(58, ng0);

LAB30:    xsi_set_current_line(60, ng0);
    t12 = (t0 + 3024);
    t19 = (t12 + 56U);
    t20 = *((char **)t19);
    t21 = (t0 + 2704);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    t25 = (t0 + 2704);
    t26 = (t25 + 72U);
    t27 = *((char **)t26);
    t28 = (t0 + 2704);
    t29 = (t28 + 64U);
    t30 = *((char **)t29);
    t31 = (t0 + 3344);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t0 + 3504);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    xsi_vlog_generic_get_array_select_value(t22, 2, t24, t27, t30, 2, 2, t33, 32, 1, t36, 32, 1);
    xsi_vlog_bit_copy(t18, 0, t22, 0, 2);
    *((int *)t37) = xsi_vlogfile_fscanf(*((unsigned int *)t20), ng11, 2, t0, (char)118, t18, 2);
    t38 = (t37 + 4);
    *((int *)t38) = 0;
    t39 = (t0 + 2704);
    t42 = (t0 + 2704);
    t43 = (t42 + 72U);
    t44 = *((char **)t43);
    t45 = (t0 + 2704);
    t46 = (t45 + 64U);
    t47 = *((char **)t46);
    t48 = (t0 + 3344);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    t51 = (t0 + 3504);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    xsi_vlog_generic_convert_array_indices(t40, t41, t44, t47, 2, 2, t50, 32, 1, t53, 32, 1);
    t54 = (t40 + 4);
    t13 = *((unsigned int *)t54);
    t55 = (!(t13));
    t56 = (t41 + 4);
    t14 = *((unsigned int *)t56);
    t57 = (!(t14));
    t58 = (t55 && t57);
    if (t58 == 1)
        goto LAB31;

LAB32:    t61 = ((char*)((ng5)));
    memset(t62, 0, 8);
    xsi_vlog_signed_not_equal(t62, 32, t37, 32, t61, 32);
    t63 = (t62 + 4);
    t17 = *((unsigned int *)t63);
    t64 = (~(t17));
    t65 = *((unsigned int *)t62);
    t66 = (t65 & t64);
    t67 = (t66 != 0);
    if (t67 > 0)
        goto LAB33;

LAB34:
LAB35:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 3504);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = ((char*)((ng5)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t9, 32, t10, 32);
    t11 = (t0 + 3504);
    xsi_vlogvar_assign_value(t11, t8, 0, 0, 32);
    goto LAB27;

LAB31:    t15 = *((unsigned int *)t40);
    t16 = *((unsigned int *)t41);
    t59 = (t15 - t16);
    t60 = (t59 + 1);
    xsi_vlogvar_assign_value(t39, t18, 0, *((unsigned int *)t41), t60);
    goto LAB32;

LAB33:    xsi_set_current_line(60, ng0);

LAB36:    xsi_set_current_line(61, ng0);
    xsi_vlogfile_write(0, 0, 1, ng12, 1, t0);
    xsi_set_current_line(62, ng0);
    xsi_vlog_finish(1);
    goto LAB35;

LAB37:    *((unsigned int *)t8) = 1;
    goto LAB40;

LAB41:    xsi_set_current_line(72, ng0);

LAB44:    xsi_set_current_line(73, ng0);
    xsi_vlogfile_write(0, 0, 1, ng14, 1, t0);
    xsi_set_current_line(74, ng0);
    xsi_vlog_finish(1);
    goto LAB43;

LAB45:    xsi_set_current_line(78, ng0);

LAB48:    xsi_set_current_line(79, ng0);
    xsi_vlogfile_write(0, 0, 1, ng15, 1, t0);
    xsi_set_current_line(80, ng0);
    xsi_vlog_finish(1);
    goto LAB47;

LAB49:    xsi_set_current_line(84, ng0);

LAB52:    xsi_set_current_line(85, ng0);
    xsi_vlogfile_write(0, 0, 1, ng16, 1, t0);
    xsi_set_current_line(86, ng0);
    xsi_vlog_finish(1);
    goto LAB51;

LAB54:    xsi_set_current_line(90, ng0);

LAB56:    xsi_set_current_line(91, ng0);
    xsi_set_current_line(91, ng0);
    t12 = ((char*)((ng9)));
    t19 = (t0 + 3504);
    xsi_vlogvar_assign_value(t19, t12, 0, 0, 32);

LAB57:    t1 = (t0 + 3504);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = ((char*)((ng10)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t9, 32, t10, 32);
    t11 = (t8 + 4);
    t3 = *((unsigned int *)t11);
    t4 = (~(t3));
    t5 = *((unsigned int *)t8);
    t6 = (t5 & t4);
    t7 = (t6 != 0);
    if (t7 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 3344);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = ((char*)((ng5)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t9, 32, t10, 32);
    t11 = (t0 + 3344);
    xsi_vlogvar_assign_value(t11, t8, 0, 0, 32);
    goto LAB53;

LAB58:    xsi_set_current_line(91, ng0);

LAB60:    xsi_set_current_line(93, ng0);
    t12 = (t0 + 3024);
    t19 = (t12 + 56U);
    t20 = *((char **)t19);
    t21 = (t0 + 2864);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    t25 = (t0 + 2864);
    t26 = (t25 + 72U);
    t27 = *((char **)t26);
    t28 = (t0 + 2864);
    t29 = (t28 + 64U);
    t30 = *((char **)t29);
    t31 = (t0 + 3344);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t0 + 3504);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    xsi_vlog_generic_get_array_select_value(t22, 2, t24, t27, t30, 2, 2, t33, 32, 1, t36, 32, 1);
    xsi_vlog_bit_copy(t18, 0, t22, 0, 2);
    *((int *)t37) = xsi_vlogfile_fscanf(*((unsigned int *)t20), ng11, 2, t0, (char)118, t18, 2);
    t38 = (t37 + 4);
    *((int *)t38) = 0;
    t39 = (t0 + 2864);
    t42 = (t0 + 2864);
    t43 = (t42 + 72U);
    t44 = *((char **)t43);
    t45 = (t0 + 2864);
    t46 = (t45 + 64U);
    t47 = *((char **)t46);
    t48 = (t0 + 3344);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    t51 = (t0 + 3504);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    xsi_vlog_generic_convert_array_indices(t40, t41, t44, t47, 2, 2, t50, 32, 1, t53, 32, 1);
    t54 = (t40 + 4);
    t13 = *((unsigned int *)t54);
    t55 = (!(t13));
    t56 = (t41 + 4);
    t14 = *((unsigned int *)t56);
    t57 = (!(t14));
    t58 = (t55 && t57);
    if (t58 == 1)
        goto LAB61;

LAB62:    t61 = ((char*)((ng5)));
    memset(t62, 0, 8);
    xsi_vlog_signed_not_equal(t62, 32, t37, 32, t61, 32);
    t63 = (t62 + 4);
    t17 = *((unsigned int *)t63);
    t64 = (~(t17));
    t65 = *((unsigned int *)t62);
    t66 = (t65 & t64);
    t67 = (t66 != 0);
    if (t67 > 0)
        goto LAB63;

LAB64:
LAB65:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 3504);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = ((char*)((ng5)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t9, 32, t10, 32);
    t11 = (t0 + 3504);
    xsi_vlogvar_assign_value(t11, t8, 0, 0, 32);
    goto LAB57;

LAB61:    t15 = *((unsigned int *)t40);
    t16 = *((unsigned int *)t41);
    t59 = (t15 - t16);
    t60 = (t59 + 1);
    xsi_vlogvar_assign_value(t39, t18, 0, *((unsigned int *)t41), t60);
    goto LAB62;

LAB63:    xsi_set_current_line(93, ng0);

LAB66:    xsi_set_current_line(94, ng0);
    xsi_vlogfile_write(0, 0, 1, ng17, 1, t0);
    xsi_set_current_line(95, ng0);
    xsi_vlog_finish(1);
    goto LAB65;

}

static void Always_106_1(char *t0)
{
    char t14[8];
    char t24[8];
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
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    int t30;
    unsigned int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;

LAB0:    t1 = (t0 + 4992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 5808);
    *((int *)t2) = 1;
    t3 = (t0 + 5024);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 1664U);
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
LAB8:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB6:    xsi_set_current_line(108, ng0);
    t11 = (t0 + 2704);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t15 = (t0 + 2704);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 2704);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 1344U);
    t22 = *((char **)t21);
    t21 = (t0 + 1504U);
    t23 = *((char **)t21);
    xsi_vlog_generic_get_array_select_value(t14, 2, t13, t17, t20, 2, 2, t22, 6, 2, t23, 6, 2);
    t21 = (t0 + 2704);
    t25 = (t21 + 72U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng9)));
    xsi_vlog_generic_get_index_select_value(t24, 1, t14, t26, 2, t27, 32, 1);
    t28 = (t0 + 2384);
    xsi_vlogvar_wait_assign_value(t28, t24, 0, 0, 1, 0LL);
    goto LAB8;

LAB9:    xsi_set_current_line(110, ng0);
    t4 = ((char*)((ng18)));
    t5 = (t0 + 2704);
    t11 = (t0 + 2704);
    t12 = (t11 + 72U);
    t13 = *((char **)t12);
    t15 = (t0 + 2704);
    t16 = (t15 + 64U);
    t17 = *((char **)t16);
    t18 = (t0 + 1344U);
    t19 = *((char **)t18);
    t18 = (t0 + 1504U);
    t20 = *((char **)t18);
    xsi_vlog_generic_convert_array_indices(t14, t24, t13, t17, 2, 2, t19, 6, 2, t20, 6, 2);
    t18 = (t14 + 4);
    t29 = *((unsigned int *)t18);
    t30 = (!(t29));
    t21 = (t24 + 4);
    t31 = *((unsigned int *)t21);
    t32 = (!(t31));
    t33 = (t30 && t32);
    if (t33 == 1)
        goto LAB12;

LAB13:    goto LAB11;

LAB12:    t34 = *((unsigned int *)t14);
    t35 = *((unsigned int *)t24);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t24), t37, 0LL);
    goto LAB13;

}

static void Cont_114_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
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

LAB0:    t1 = (t0 + 5240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 2704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2704);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2704);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1344U);
    t13 = *((char **)t12);
    t12 = (t0 + 1504U);
    t14 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 2, t4, t8, t11, 2, 2, t13, 6, 2, t14, 6, 2);
    t12 = (t0 + 5920);
    t15 = (t12 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 3U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t12, 0, 1);
    t27 = (t0 + 5824);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_118_3(char *t0)
{
    char t6[8];
    char t16[8];
    char t32[8];
    char t45[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
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
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t46;
    char *t47;
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
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;

LAB0:    t1 = (t0 + 5488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 5840);
    *((int *)t2) = 1;
    t3 = (t0 + 5520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(118, ng0);

LAB5:    xsi_set_current_line(119, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t0 + 2544);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(120, ng0);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 3664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    goto LAB2;

LAB7:    xsi_set_current_line(120, ng0);

LAB9:    xsi_set_current_line(121, ng0);
    xsi_set_current_line(121, ng0);
    t13 = ((char*)((ng9)));
    t14 = (t0 + 3824);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 32);

LAB10:    t2 = (t0 + 3824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 3664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 3664);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB11:    xsi_set_current_line(121, ng0);

LAB13:    xsi_set_current_line(122, ng0);
    t13 = (t0 + 2704);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 2704);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2704);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 3664);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t0 + 3824);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    xsi_vlog_generic_get_array_select_value(t16, 2, t15, t19, t22, 2, 2, t25, 32, 1, t28, 32, 1);
    t29 = (t0 + 2864);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t33 = (t0 + 2864);
    t34 = (t33 + 72U);
    t35 = *((char **)t34);
    t36 = (t0 + 2864);
    t37 = (t36 + 64U);
    t38 = *((char **)t37);
    t39 = (t0 + 3664);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t42 = (t0 + 3824);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    xsi_vlog_generic_get_array_select_value(t32, 2, t31, t35, t38, 2, 2, t41, 32, 1, t44, 32, 1);
    memset(t45, 0, 8);
    t46 = (t16 + 4);
    t47 = (t32 + 4);
    t48 = *((unsigned int *)t16);
    t49 = *((unsigned int *)t32);
    t50 = (t48 ^ t49);
    t51 = *((unsigned int *)t46);
    t52 = *((unsigned int *)t47);
    t53 = (t51 ^ t52);
    t54 = (t50 | t53);
    t55 = *((unsigned int *)t46);
    t56 = *((unsigned int *)t47);
    t57 = (t55 | t56);
    t58 = (~(t57));
    t59 = (t54 & t58);
    if (t59 != 0)
        goto LAB15;

LAB14:    if (t57 != 0)
        goto LAB16;

LAB17:    t61 = (t45 + 4);
    t62 = *((unsigned int *)t61);
    t63 = (~(t62));
    t64 = *((unsigned int *)t45);
    t65 = (t64 & t63);
    t66 = (t65 != 0);
    if (t66 > 0)
        goto LAB18;

LAB19:
LAB20:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 3824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 3824);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB10;

LAB15:    *((unsigned int *)t45) = 1;
    goto LAB17;

LAB16:    t60 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(122, ng0);

LAB21:    xsi_set_current_line(123, ng0);
    t67 = ((char*)((ng9)));
    t68 = (t0 + 2544);
    xsi_vlogvar_assign_value(t68, t67, 0, 0, 1);
    goto LAB20;

}


extern void tester_m_00000000004216812506_0884304174_init()
{
	static char *pe[] = {(void *)Initial_35_0,(void *)Always_106_1,(void *)Cont_114_2,(void *)Always_118_3};
	xsi_register_didat("tester_m_00000000004216812506_0884304174", "isim/tester.exe.sim/tester/m_00000000004216812506_0884304174.didat");
	xsi_register_executes(pe);
}
