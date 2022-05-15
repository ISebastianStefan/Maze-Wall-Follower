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
static const char *ng0 = "C:/Users/Sebas/OneDrive/Desktop/Anul 3/SEMESTRUL 1/(AC) Arhitectura calculatoarelor/Tema2/tema2_tester/build/bin/tester/tester.v";
static const char *ng1 = "test.config";
static const char *ng2 = "r";
static const char *ng3 = "error opening config file\n";
static const char *ng4 = "name=%16s\n";
static int ng5[] = {1, 0};
static const char *ng6 = "error reading test name\n";
static const char *ng7 = "value=%f\n";
static const char *ng8 = "error reading test value\n";
static const char *ng9 = "penalty=%f\n";
static const char *ng10 = "error reading test penalty\n";
static const char *ng11 = "max_cycles=%d\n";
static const char *ng12 = "error reading allowed maximum cycles for one world update\n";
static const char *ng13 = "sol.data";
static const char *ng14 = "error opening solution file\n";
static const char *ng15 = "starting_row=%d\n";
static const char *ng16 = "error reading solution starting_row value\n";
static const char *ng17 = "starting_col=%d\n";
static const char *ng18 = "error reading solution starting_col value\n";
static int ng19[] = {0, 0};
static const char *ng20 = "--------------------------------------------------------------------------------\n";
static const char *ng21 = "done in %0d cycles\n";
static int ng22[] = {2, 0};
static const char *ng23 = "timeout after %0d cycles\n";
static int ng24[] = {4, 0};
static const char *ng25 = "\tworld: ";
static const char *ng26 = "\n\t";
static const char *ng27 = "%d";
static const char *ng28 = "\n";
static int ng29[] = {1, 0, 0, 0};
static const char *ng30 = "result.tester";
static const char *ng31 = "%6.2f: test %0s %0s\n";
static int ng32[] = {28523, 0, 0, 0};
static int ng33[] = {1768711524, 0, 26209, 0};



static void Initial_28_0(char *t0)
{
    char t1[8];
    char t18[32];
    char t22[8];
    char t25[8];
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
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    double t24;
    char *t26;

LAB0:    xsi_set_current_line(28, ng0);

LAB2:    xsi_set_current_line(29, ng0);
    *((int *)t1) = xsi_vlogfile_file_open_of_cname_ctype(ng1, ng2);
    t2 = (t1 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 5104);
    xsi_vlogvar_assign_value(t3, t1, 0, 0, 32);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t1, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 4294967295U);
    if (t10 != 0)
        goto LAB6;

LAB4:    if (*((unsigned int *)t5) == 0)
        goto LAB3;

LAB5:    t11 = (t1 + 4);
    *((unsigned int *)t1) = 1;
    *((unsigned int *)t11) = 1;

LAB6:    t12 = (t1 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t1);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB7;

LAB8:
LAB9:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4144);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_bit_copy(t18, 0, t12, 0, 128);
    *((int *)t1) = xsi_vlogfile_fscanf(*((unsigned int *)t4), ng4, 2, t0, (char)118, t18, 128);
    t19 = (t1 + 4);
    *((int *)t19) = 0;
    t20 = (t0 + 4144);
    xsi_vlogvar_assign_value(t20, t18, 0, 0, 128);
    t21 = ((char*)((ng5)));
    memset(t22, 0, 8);
    xsi_vlog_signed_not_equal(t22, 32, t1, 32, t21, 32);
    t23 = (t22 + 4);
    t6 = *((unsigned int *)t23);
    t7 = (~(t6));
    t8 = *((unsigned int *)t22);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4304);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t24 = *((double *)t12);
    t19 = xsi_vlog_convert_real_to_bits(t24, t1, 64);
    *((int *)t22) = xsi_vlogfile_fscanf(*((unsigned int *)t4), ng7, 2, t0, (char)101, t1, 64);
    t20 = (t22 + 4);
    *((int *)t20) = 0;
    t21 = (t0 + 4304);
    xsi_vlogvar_assign_value_double(t21, *((double *)t1), 0);
    t23 = ((char*)((ng5)));
    memset(t25, 0, 8);
    xsi_vlog_signed_not_equal(t25, 32, t22, 32, t23, 32);
    t26 = (t25 + 4);
    t6 = *((unsigned int *)t26);
    t7 = (~(t6));
    t8 = *((unsigned int *)t25);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4464);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t24 = *((double *)t12);
    t19 = xsi_vlog_convert_real_to_bits(t24, t1, 64);
    *((int *)t22) = xsi_vlogfile_fscanf(*((unsigned int *)t4), ng9, 2, t0, (char)101, t1, 64);
    t20 = (t22 + 4);
    *((int *)t20) = 0;
    t21 = (t0 + 4464);
    xsi_vlogvar_assign_value_double(t21, *((double *)t1), 0);
    t23 = ((char*)((ng5)));
    memset(t25, 0, 8);
    xsi_vlog_signed_not_equal(t25, 32, t22, 32, t23, 32);
    t26 = (t25 + 4);
    t6 = *((unsigned int *)t26);
    t7 = (~(t6));
    t8 = *((unsigned int *)t25);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB19;

LAB20:
LAB21:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4624);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_bit_copy(t1, 0, t12, 0, 32);
    *((int *)t22) = xsi_vlogfile_fscanf(*((unsigned int *)t4), ng11, 2, t0, (char)119, t1, 32);
    t19 = (t22 + 4);
    *((int *)t19) = 0;
    t20 = (t0 + 4624);
    xsi_vlogvar_assign_value(t20, t1, 0, 0, 32);
    t21 = ((char*)((ng5)));
    memset(t25, 0, 8);
    xsi_vlog_signed_not_equal(t25, 32, t22, 32, t21, 32);
    t23 = (t25 + 4);
    t6 = *((unsigned int *)t23);
    t7 = (~(t6));
    t8 = *((unsigned int *)t25);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB23;

LAB24:
LAB25:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t4));
    xsi_set_current_line(52, ng0);
    *((int *)t1) = xsi_vlogfile_file_open_of_cname_ctype(ng13, ng2);
    t2 = (t1 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 5104);
    xsi_vlogvar_assign_value(t3, t1, 0, 0, 32);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t1, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 4294967295U);
    if (t10 != 0)
        goto LAB30;

LAB28:    if (*((unsigned int *)t5) == 0)
        goto LAB27;

LAB29:    t11 = (t1 + 4);
    *((unsigned int *)t1) = 1;
    *((unsigned int *)t11) = 1;

LAB30:    t12 = (t1 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t1);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB31;

LAB32:
LAB33:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4784);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_bit_copy(t1, 0, t12, 0, 6);
    *((int *)t22) = xsi_vlogfile_fscanf(*((unsigned int *)t4), ng15, 2, t0, (char)118, t1, 6);
    t19 = (t22 + 4);
    *((int *)t19) = 0;
    t20 = (t0 + 4784);
    xsi_vlogvar_assign_value(t20, t1, 0, 0, 6);
    t21 = ((char*)((ng5)));
    memset(t25, 0, 8);
    xsi_vlog_signed_not_equal(t25, 32, t22, 32, t21, 32);
    t23 = (t25 + 4);
    t6 = *((unsigned int *)t23);
    t7 = (~(t6));
    t8 = *((unsigned int *)t25);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB35;

LAB36:
LAB37:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4944);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_bit_copy(t1, 0, t12, 0, 6);
    *((int *)t22) = xsi_vlogfile_fscanf(*((unsigned int *)t4), ng17, 2, t0, (char)118, t1, 6);
    t19 = (t22 + 4);
    *((int *)t19) = 0;
    t20 = (t0 + 4944);
    xsi_vlogvar_assign_value(t20, t1, 0, 0, 6);
    t21 = ((char*)((ng5)));
    memset(t25, 0, 8);
    xsi_vlog_signed_not_equal(t25, 32, t22, 32, t21, 32);
    t23 = (t25 + 4);
    t6 = *((unsigned int *)t23);
    t7 = (~(t6));
    t8 = *((unsigned int *)t25);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB39;

LAB40:
LAB41:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t4));

LAB1:    return;
LAB3:    *((unsigned int *)t1) = 1;
    goto LAB6;

LAB7:    xsi_set_current_line(30, ng0);

LAB10:    xsi_set_current_line(31, ng0);
    xsi_vlogfile_write(0, 0, 1, ng3, 1, t0);
    xsi_set_current_line(32, ng0);
    xsi_vlog_finish(1);
    goto LAB9;

LAB11:    xsi_set_current_line(34, ng0);

LAB14:    xsi_set_current_line(35, ng0);
    xsi_vlogfile_write(0, 0, 1, ng6, 1, t0);
    xsi_set_current_line(36, ng0);
    xsi_vlog_finish(1);
    goto LAB13;

LAB15:    xsi_set_current_line(38, ng0);

LAB18:    xsi_set_current_line(39, ng0);
    xsi_vlogfile_write(0, 0, 1, ng8, 1, t0);
    xsi_set_current_line(40, ng0);
    xsi_vlog_finish(1);
    goto LAB17;

LAB19:    xsi_set_current_line(42, ng0);

LAB22:    xsi_set_current_line(43, ng0);
    xsi_vlogfile_write(0, 0, 1, ng10, 1, t0);
    xsi_set_current_line(44, ng0);
    xsi_vlog_finish(1);
    goto LAB21;

LAB23:    xsi_set_current_line(46, ng0);

LAB26:    xsi_set_current_line(47, ng0);
    xsi_vlogfile_write(0, 0, 1, ng12, 1, t0);
    xsi_set_current_line(48, ng0);
    xsi_vlog_finish(1);
    goto LAB25;

LAB27:    *((unsigned int *)t1) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(53, ng0);

LAB34:    xsi_set_current_line(54, ng0);
    xsi_vlogfile_write(0, 0, 1, ng14, 1, t0);
    xsi_set_current_line(55, ng0);
    xsi_vlog_finish(1);
    goto LAB33;

LAB35:    xsi_set_current_line(57, ng0);

LAB38:    xsi_set_current_line(58, ng0);
    xsi_vlogfile_write(0, 0, 1, ng16, 1, t0);
    xsi_set_current_line(59, ng0);
    xsi_vlog_finish(1);
    goto LAB37;

LAB39:    xsi_set_current_line(61, ng0);

LAB42:    xsi_set_current_line(62, ng0);
    xsi_vlogfile_write(0, 0, 1, ng18, 1, t0);
    xsi_set_current_line(63, ng0);
    xsi_vlog_finish(1);
    goto LAB41;

}

static void Initial_100_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(100, ng0);

LAB2:    xsi_set_current_line(102, ng0);
    t1 = ((char*)((ng19)));
    t2 = (t0 + 5264);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t1 = ((char*)((ng19)));
    t2 = (t0 + 5904);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_107_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 7960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 7768);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 5264);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t0 + 5264);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

}

static void Cont_109_3(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
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

LAB0:    t1 = (t0 + 8208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 5424);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 6);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 6);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 63U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 63U);
    t14 = (t0 + 9136);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 63U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 5);
    t27 = (t0 + 9024);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_110_4(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
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

LAB0:    t1 = (t0 + 8456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 5424);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 63U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 63U);
    t14 = (t0 + 9200);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 63U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 5);
    t27 = (t0 + 9040);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_156_5(char *t0)
{
    char t8[8];
    char t25[8];
    char t28[8];
    char t42[8];
    char t45[8];
    char t53[8];
    char t85[8];
    char t93[8];
    char t127[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    int t77;
    int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    double t122;
    double t123;
    double t124;
    double t125;
    double t126;

LAB0:    t1 = (t0 + 8704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(156, ng0);
    t2 = (t0 + 9056);
    *((int *)t2) = 1;
    t3 = (t0 + 8736);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(156, ng0);

LAB5:    xsi_set_current_line(157, ng0);
    t4 = (t0 + 3264U);
    t5 = *((char **)t4);
    t4 = (t0 + 5584);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(159, ng0);
    t2 = (t0 + 5904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng19)));
    t6 = xsi_vlog_signed_case_compare(t4, 32, t5, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng22)));
    t6 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng24)));
    t6 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(160, ng0);

LAB16:    xsi_set_current_line(161, ng0);
    xsi_vlogfile_write(0, 0, 1, ng20, 1, t0);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 5744);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 6064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB15;

LAB9:    xsi_set_current_line(170, ng0);

LAB17:    xsi_set_current_line(172, ng0);
    t3 = (t0 + 5744);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    memset(t8, 0, 8);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t9) != 0)
        goto LAB20;

LAB21:    t16 = (t8 + 4);
    t17 = *((unsigned int *)t8);
    t18 = (!(t17));
    t19 = *((unsigned int *)t16);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB22;

LAB23:    memcpy(t93, t8, 8);

LAB24:    t121 = (t0 + 5744);
    xsi_vlogvar_wait_assign_value(t121, t93, 0, 0, 1, 0LL);
    xsi_set_current_line(174, ng0);
    t2 = (t0 + 5744);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t8, 0, 8);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB55;

LAB53:    if (*((unsigned int *)t7) == 0)
        goto LAB52;

LAB54:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;

LAB55:    t15 = (t8 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (~(t17));
    t19 = *((unsigned int *)t8);
    t20 = (t19 & t18);
    t30 = (t20 != 0);
    if (t30 > 0)
        goto LAB56;

LAB57:
LAB58:    xsi_set_current_line(179, ng0);
    t2 = (t0 + 5744);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(187, ng0);

LAB64:    xsi_set_current_line(189, ng0);
    t2 = (t0 + 6064);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 4624);
    t9 = (t7 + 56U);
    t15 = *((char **)t9);
    memset(t8, 0, 8);
    xsi_vlog_signed_greatereq(t8, 32, t5, 32, t15, 32);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t16);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB65;

LAB66:
LAB67:
LAB62:    goto LAB15;

LAB11:    xsi_set_current_line(198, ng0);

LAB69:    xsi_set_current_line(199, ng0);
    t3 = (t0 + 472);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB70;

LAB71:
LAB72:    xsi_set_current_line(214, ng0);
    t2 = (t0 + 5424);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng5)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t5, 12, t7, 32);
    t9 = (t0 + 5424);
    xsi_vlogvar_wait_assign_value(t9, t8, 0, 0, 12, 0LL);
    xsi_set_current_line(216, ng0);
    t2 = (t0 + 5424);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t8, 0, 8);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t7);
    t12 = (t10 | t11);
    if (t12 != 4095U)
        goto LAB96;

LAB95:    if (*((unsigned int *)t7) == 0)
        goto LAB97;

LAB98:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;

LAB96:    t15 = (t8 + 4);
    t13 = *((unsigned int *)t15);
    t14 = (~(t13));
    t17 = *((unsigned int *)t8);
    t18 = (t17 & t14);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB99;

LAB100:
LAB101:    goto LAB15;

LAB13:    xsi_set_current_line(221, ng0);

LAB103:    xsi_set_current_line(222, ng0);
    xsi_vlogfile_write(0, 0, 1, ng20, 1, t0);
    xsi_set_current_line(224, ng0);
    t2 = (t0 + 3424U);
    t3 = *((char **)t2);
    t122 = xsi_vlog_convert_to_real(t3, 1, 2);
    t123 = (t122 * 1.0000000000000000);
    t2 = ((char*)((ng29)));
    t124 = xsi_vlog_convert_to_real(t2, 32, 1);
    t125 = (t123 / t124);
    t5 = (t0 + 6224);
    xsi_vlogvar_assign_value_double(t5, t125, 0);
    xsi_set_current_line(225, ng0);
    t2 = (t0 + 6224);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t122 = *((double *)t5);
    t7 = (t0 + 6384);
    xsi_vlogvar_assign_value_double(t7, t122, 0);
    xsi_set_current_line(228, ng0);
    *((int *)t8) = xsi_vlogfile_file_open_of_cname(ng30);
    t2 = (t8 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 6544);
    xsi_vlogvar_assign_value(t3, t8, 0, 0, 32);
    xsi_set_current_line(229, ng0);
    t2 = (t0 + 6544);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 4304);
    t9 = (t7 + 56U);
    t15 = *((char **)t9);
    t122 = *((double *)t15);
    t16 = (t0 + 6384);
    t21 = (t16 + 56U);
    t22 = *((char **)t21);
    t123 = *((double *)t22);
    t23 = (t0 + 4464);
    t24 = (t23 + 56U);
    t26 = *((char **)t24);
    t124 = *((double *)t26);
    t125 = (t123 - t124);
    t126 = (t122 * t125);
    *((double *)t8) = t126;
    t27 = (t0 + 4144);
    t29 = (t27 + 56U);
    t35 = *((char **)t29);
    t36 = (t0 + 3424U);
    t40 = *((char **)t36);
    memset(t25, 0, 8);
    t36 = (t40 + 4);
    t10 = *((unsigned int *)t36);
    t11 = (~(t10));
    t12 = *((unsigned int *)t40);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t36) != 0)
        goto LAB106;

LAB107:    t43 = (t25 + 4);
    t17 = *((unsigned int *)t25);
    t18 = *((unsigned int *)t43);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB108;

LAB109:    t20 = *((unsigned int *)t25);
    t30 = (~(t20));
    t31 = *((unsigned int *)t43);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t43) > 0)
        goto LAB112;

LAB113:    if (*((unsigned int *)t25) > 0)
        goto LAB114;

LAB115:    memcpy(t127, t46, 16);

LAB116:    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng31, 4, t0, (char)114, t8, 64, (char)118, t35, 128, (char)118, t127, 48);
    xsi_set_current_line(233, ng0);
    t2 = (t0 + 6544);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    xsi_set_current_line(234, ng0);
    xsi_vlog_finish(1);
    goto LAB15;

LAB18:    *((unsigned int *)t8) = 1;
    goto LAB21;

LAB20:    t15 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB21;

LAB22:    t21 = (t0 + 5584);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng5)));
    memset(t25, 0, 8);
    if (*((unsigned int *)t23) != *((unsigned int *)t24))
        goto LAB26;

LAB25:    t26 = (t23 + 4);
    t27 = (t24 + 4);
    if (*((unsigned int *)t26) != *((unsigned int *)t27))
        goto LAB26;

LAB27:    memset(t28, 0, 8);
    t29 = (t25 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t25);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t29) != 0)
        goto LAB30;

LAB31:    t36 = (t28 + 4);
    t37 = *((unsigned int *)t28);
    t38 = *((unsigned int *)t36);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB32;

LAB33:    memcpy(t53, t28, 8);

LAB34:    memset(t85, 0, 8);
    t86 = (t53 + 4);
    t87 = *((unsigned int *)t86);
    t88 = (~(t87));
    t89 = *((unsigned int *)t53);
    t90 = (t89 & t88);
    t91 = (t90 & 1U);
    if (t91 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t86) != 0)
        goto LAB47;

LAB48:    t94 = *((unsigned int *)t8);
    t95 = *((unsigned int *)t85);
    t96 = (t94 | t95);
    *((unsigned int *)t93) = t96;
    t97 = (t8 + 4);
    t98 = (t85 + 4);
    t99 = (t93 + 4);
    t100 = *((unsigned int *)t97);
    t101 = *((unsigned int *)t98);
    t102 = (t100 | t101);
    *((unsigned int *)t99) = t102;
    t103 = *((unsigned int *)t99);
    t104 = (t103 != 0);
    if (t104 == 1)
        goto LAB49;

LAB50:
LAB51:    goto LAB24;

LAB26:    *((unsigned int *)t25) = 1;
    goto LAB27;

LAB28:    *((unsigned int *)t28) = 1;
    goto LAB31;

LAB30:    t35 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB31;

LAB32:    t40 = (t0 + 3264U);
    t41 = *((char **)t40);
    t40 = ((char*)((ng5)));
    memset(t42, 0, 8);
    if (*((unsigned int *)t41) != *((unsigned int *)t40))
        goto LAB37;

LAB35:    t43 = (t41 + 4);
    t44 = (t40 + 4);
    if (*((unsigned int *)t43) != *((unsigned int *)t44))
        goto LAB37;

LAB36:    *((unsigned int *)t42) = 1;

LAB37:    memset(t45, 0, 8);
    t46 = (t42 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t42);
    t50 = (t49 & t48);
    t51 = (t50 & 1U);
    if (t51 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t46) != 0)
        goto LAB40;

LAB41:    t54 = *((unsigned int *)t28);
    t55 = *((unsigned int *)t45);
    t56 = (t54 & t55);
    *((unsigned int *)t53) = t56;
    t57 = (t28 + 4);
    t58 = (t45 + 4);
    t59 = (t53 + 4);
    t60 = *((unsigned int *)t57);
    t61 = *((unsigned int *)t58);
    t62 = (t60 | t61);
    *((unsigned int *)t59) = t62;
    t63 = *((unsigned int *)t59);
    t64 = (t63 != 0);
    if (t64 == 1)
        goto LAB42;

LAB43:
LAB44:    goto LAB34;

LAB38:    *((unsigned int *)t45) = 1;
    goto LAB41;

LAB40:    t52 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB41;

LAB42:    t65 = *((unsigned int *)t53);
    t66 = *((unsigned int *)t59);
    *((unsigned int *)t53) = (t65 | t66);
    t67 = (t28 + 4);
    t68 = (t45 + 4);
    t69 = *((unsigned int *)t28);
    t70 = (~(t69));
    t71 = *((unsigned int *)t67);
    t72 = (~(t71));
    t73 = *((unsigned int *)t45);
    t74 = (~(t73));
    t75 = *((unsigned int *)t68);
    t76 = (~(t75));
    t77 = (t70 & t72);
    t78 = (t74 & t76);
    t79 = (~(t77));
    t80 = (~(t78));
    t81 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t81 & t79);
    t82 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t82 & t80);
    t83 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t83 & t79);
    t84 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t84 & t80);
    goto LAB44;

LAB45:    *((unsigned int *)t85) = 1;
    goto LAB48;

LAB47:    t92 = (t85 + 4);
    *((unsigned int *)t85) = 1;
    *((unsigned int *)t92) = 1;
    goto LAB48;

LAB49:    t105 = *((unsigned int *)t93);
    t106 = *((unsigned int *)t99);
    *((unsigned int *)t93) = (t105 | t106);
    t107 = (t8 + 4);
    t108 = (t85 + 4);
    t109 = *((unsigned int *)t107);
    t110 = (~(t109));
    t111 = *((unsigned int *)t8);
    t112 = (t111 & t110);
    t113 = *((unsigned int *)t108);
    t114 = (~(t113));
    t115 = *((unsigned int *)t85);
    t116 = (t115 & t114);
    t117 = (~(t112));
    t118 = (~(t116));
    t119 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t119 & t117);
    t120 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t120 & t118);
    goto LAB51;

LAB52:    *((unsigned int *)t8) = 1;
    goto LAB55;

LAB56:    xsi_set_current_line(174, ng0);

LAB59:    xsi_set_current_line(176, ng0);
    t16 = (t0 + 6064);
    t21 = (t16 + 56U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng5)));
    memset(t25, 0, 8);
    xsi_vlog_signed_add(t25, 32, t22, 32, t23, 32);
    t24 = (t0 + 6064);
    xsi_vlogvar_wait_assign_value(t24, t25, 0, 0, 32, 0LL);
    goto LAB58;

LAB60:    xsi_set_current_line(179, ng0);

LAB63:    xsi_set_current_line(181, ng0);
    t9 = (t0 + 6064);
    t15 = (t9 + 56U);
    t16 = *((char **)t15);
    xsi_vlogfile_write(0, 0, 1, ng21, 2, t0, (char)119, t16, 32);
    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 5424);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 12, 0LL);
    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 5904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB62;

LAB65:    xsi_set_current_line(189, ng0);

LAB68:    xsi_set_current_line(191, ng0);
    t21 = (t0 + 6064);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    xsi_vlogfile_write(0, 0, 1, ng23, 2, t0, (char)119, t23, 32);
    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 5904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB67;

LAB70:    xsi_set_current_line(199, ng0);

LAB73:    xsi_set_current_line(201, ng0);
    t7 = (t0 + 5424);
    t9 = (t7 + 56U);
    t15 = *((char **)t9);
    t16 = ((char*)((ng19)));
    memset(t8, 0, 8);
    t21 = (t15 + 4);
    t22 = (t16 + 4);
    t17 = *((unsigned int *)t15);
    t18 = *((unsigned int *)t16);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t21);
    t30 = *((unsigned int *)t22);
    t31 = (t20 ^ t30);
    t32 = (t19 | t31);
    t33 = *((unsigned int *)t21);
    t34 = *((unsigned int *)t22);
    t37 = (t33 | t34);
    t38 = (~(t37));
    t39 = (t32 & t38);
    if (t39 != 0)
        goto LAB77;

LAB74:    if (t37 != 0)
        goto LAB76;

LAB75:    *((unsigned int *)t8) = 1;

LAB77:    t24 = (t8 + 4);
    t47 = *((unsigned int *)t24);
    t48 = (~(t47));
    t49 = *((unsigned int *)t8);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB78;

LAB79:
LAB80:    xsi_set_current_line(204, ng0);
    t2 = (t0 + 3744U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng19)));
    memset(t8, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t7);
    t17 = (t13 ^ t14);
    t18 = (t12 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t7);
    t30 = (t19 | t20);
    t31 = (~(t30));
    t32 = (t18 & t31);
    if (t32 != 0)
        goto LAB84;

LAB81:    if (t30 != 0)
        goto LAB83;

LAB82:    *((unsigned int *)t8) = 1;

LAB84:    t15 = (t8 + 4);
    t33 = *((unsigned int *)t15);
    t34 = (~(t33));
    t37 = *((unsigned int *)t8);
    t38 = (t37 & t34);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB85;

LAB86:
LAB87:    xsi_set_current_line(207, ng0);
    t2 = (t0 + 3104U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(0, 0, 1, ng27, 2, t0, (char)118, t3, 2);
    xsi_set_current_line(210, ng0);
    t2 = (t0 + 5424);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t8, 0, 8);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t7);
    t12 = (t10 | t11);
    if (t12 != 4095U)
        goto LAB89;

LAB88:    if (*((unsigned int *)t7) == 0)
        goto LAB90;

LAB91:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;

LAB89:    t15 = (t8 + 4);
    t13 = *((unsigned int *)t15);
    t14 = (~(t13));
    t17 = *((unsigned int *)t8);
    t18 = (t17 & t14);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB92;

LAB93:
LAB94:    goto LAB72;

LAB76:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB77;

LAB78:    xsi_set_current_line(202, ng0);
    xsi_vlogfile_write(0, 0, 1, ng25, 1, t0);
    goto LAB80;

LAB83:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB84;

LAB85:    xsi_set_current_line(205, ng0);
    xsi_vlogfile_write(0, 0, 1, ng26, 1, t0);
    goto LAB87;

LAB90:    *((unsigned int *)t8) = 1;
    goto LAB89;

LAB92:    xsi_set_current_line(211, ng0);
    xsi_vlogfile_write(0, 0, 1, ng28, 1, t0);
    goto LAB94;

LAB97:    *((unsigned int *)t8) = 1;
    goto LAB96;

LAB99:    xsi_set_current_line(216, ng0);

LAB102:    xsi_set_current_line(217, ng0);
    t16 = ((char*)((ng24)));
    t21 = (t0 + 5904);
    xsi_vlogvar_wait_assign_value(t21, t16, 0, 0, 32, 0LL);
    goto LAB101;

LAB104:    *((unsigned int *)t25) = 1;
    goto LAB107;

LAB106:    t41 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB107;

LAB108:    t44 = ((char*)((ng32)));
    goto LAB109;

LAB110:    t46 = ((char*)((ng33)));
    goto LAB111;

LAB112:    xsi_vlog_unsigned_bit_combine(t127, 48, t44, 48, t46, 48);
    goto LAB116;

LAB114:    memcpy(t127, t44, 16);
    goto LAB116;

}


extern void tester_m_00000000002801501926_2613777659_init()
{
	static char *pe[] = {(void *)Initial_28_0,(void *)Initial_100_1,(void *)Always_107_2,(void *)Cont_109_3,(void *)Cont_110_4,(void *)Always_156_5};
	xsi_register_didat("tester_m_00000000002801501926_2613777659", "isim/tester.exe.sim/tester/m_00000000002801501926_2613777659.didat");
	xsi_register_executes(pe);
}
