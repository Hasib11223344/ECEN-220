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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000833456090_2367744413_init();
    work_m_00000000002470671504_0334430593_init();
    work_m_00000000000591346911_0929639693_init();
    work_m_00000000002498273651_0776202794_init();
    work_m_00000000003421489841_0429726232_init();
    work_m_00000000002625201352_2972452113_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002625201352_2972452113");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
