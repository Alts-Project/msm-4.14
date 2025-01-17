/* Copyright (c) 2014-2017, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __MSM_CLOCKS_8952_H
#define __MSM_CLOCKS_8952_H

/* clock_gcc controlled clocks */

/* GPLLs */
#define clk_gpll0_clk_src_8952			0x1617c790
#define clk_gpll0_ao_clk_src_8952		0x9b4db4e8
#define clk_gpll0_clk_src_8937			0x94350fc4
#define clk_gpll0_ao_clk_src_8937		0x923c7546
#define clk_gpll0_clk_src			0x5933b69f
#define clk_gpll0_ao_clk_src			0x6b2fb034
#define clk_gpll0_sleep_clk_src			0x4f89fcf0
#define clk_gpll0_out_main			0x850fecec
#define clk_gpll0_out_aux			0x64e55d63
#define clk_gpll0_misc				0xe06ee816
#define clk_gpll3_clk_src			0x5b1eccd5
#define clk_gpll3_out_main			0xf5fc71ab
#define clk_gpll3_out_aux			0xe72bea1a
#define clk_gpll4_clk_src			0x10525d57
#define clk_gpll4_out_main                      0xdca8db2a
#define clk_gpll6_clk_src			0x17dceaad
#define clk_gpll6_out_main			0x27b8b7be
#define clk_a53ss_c0_pll			0xf761da94
#define clk_a53ss_c1_pll			0xfbc57bbd
#define clk_a53ss_cci_pll			0x17d32f1e

/* SRCs */
#define clk_apss_ahb_clk_src			0x36f8495f
#define clk_blsp1_qup1_i2c_apps_clk_src		0x17f78f5e
#define clk_blsp1_qup1_spi_apps_clk_src		0xf534c4fa
#define clk_blsp1_qup2_i2c_apps_clk_src		0x8de71c79
#define clk_blsp1_qup2_spi_apps_clk_src		0x33cf809a
#define clk_blsp1_qup3_i2c_apps_clk_src		0xf161b902
#define clk_blsp1_qup3_spi_apps_clk_src		0x5e95683f
#define clk_blsp1_qup4_i2c_apps_clk_src		0xb2ecce68
#define clk_gcc_blsp2_ahb_clk			0x8f283c1d
#define clk_gcc_blsp2_sleep_clk			0x429ca5d2
#define clk_gcc_blsp2_qup1_spi_apps_clk		0xa32604cc
#define clk_gcc_blsp2_qup1_i2c_apps_clk		0x9ace11dd
#define clk_blsp2_qup1_spi_apps_clk_src		0xcc1b8365
#define clk_blsp2_qup1_i2c_apps_clk_src		0xd6d1e95d
#define clk_gcc_blsp2_uart1_apps_clk		0x8c3512ff
#define clk_gcc_blsp2_uart1_sim_clk		0x2ea81633
#define clk_blsp2_uart1_apps_clk_src		0x562c66dc
#define clk_gcc_blsp2_qup2_spi_apps_clk		0xbf54ca6d
#define clk_gcc_blsp2_qup2_i2c_apps_clk		0x1bf9a57e
#define clk_blsp2_qup2_spi_apps_clk_src		0xd577dc44
#define clk_blsp2_qup2_i2c_apps_clk_src		0x603b5c51
#define clk_gcc_blsp2_uart2_apps_clk		0x1e1965a3
#define clk_gcc_blsp2_uart2_sim_clk		0xca05dfe2
#define clk_blsp2_uart2_apps_clk_src		0xdd448080
#define clk_gcc_blsp2_qup3_spi_apps_clk		0xc68509d6
#define clk_gcc_blsp2_qup3_i2c_apps_clk		0x336d4170
#define clk_blsp2_qup3_spi_apps_clk_src		0xd04b1e92
#define clk_blsp2_qup3_i2c_apps_clk_src		0xea82959c
#define clk_gcc_blsp2_qup4_spi_apps_clk		0x01a72b93
#define clk_gcc_blsp2_qup4_i2c_apps_clk		0xbd22539d
#define clk_blsp2_qup4_spi_apps_clk_src		0x25d4a2b1
#define clk_blsp2_qup4_i2c_apps_clk_src		0x73dc968c
#define clk_blsp1_qup4_spi_apps_clk_src		0xddb5bbdb
#define clk_blsp1_uart1_apps_clk_src		0xf8146114
#define clk_blsp1_uart2_apps_clk_src		0xfc9c2f73
#define clk_byte0_clk_src			0x75cc885b
#define clk_cci_clk_src				0x822f3d97
#define clk_camss_top_ahb_clk_src		0xf92304fb
#define clk_camss_gp0_clk_src			0x43b063e9
#define clk_camss_gp1_clk_src			0xa3315f1b
#define clk_crypto_clk_src			0x37a21414
#define clk_csi0_clk_src			0x227e65bc
#define clk_csi1_clk_src			0x6a2a6c36
#define clk_csi2_clk_src                        0x4113589f
#define clk_csi0phytimer_clk_src		0xc8a309be
#define clk_csi1phytimer_clk_src		0x7c0fe23a
#define clk_esc0_clk_src			0xb41d7c38
#define clk_gfx3d_clk_src			0x917f76ef
#define clk_gp1_clk_src				0xad85b97a
#define clk_gp2_clk_src				0xfb1f0065
#define clk_gp3_clk_src				0x63b693d6
#define clk_jpeg0_clk_src			0x9a0a0ac3
#define clk_mdp_clk_src				0x6dc1f8f1
#define clk_mclk0_clk_src			0x266b3853
#define clk_mclk1_clk_src			0xa73cad0c
#define clk_mclk2_clk_src                       0x42545468
#define clk_pclk0_clk_src			0xccac1f35
#define clk_pdm2_clk_src			0x31e494fd
#define clk_sdcc1_apps_clk_src			0xd4975db2
#define clk_sdcc1_ice_core_clk_src		0xfd6a4301
#define clk_sdcc2_apps_clk_src			0xfc46c821
#define clk_usb_hs_system_clk_src		0x28385546
#define clk_usb_fs_system_clk_src               0x06ee1762
#define clk_usb_fs_ic_clk_src			0x25d4acc8
#define clk_usb_fs_ic_clk_src			0x25d4acc8
#define clk_gcc_qusb2_phy_clk			0x996884d5
#define clk_gcc_usb2_hs_phy_only_clk		0x0047179d
#define clk_vsync_clk_src			0xecb43940
#define clk_vfe0_clk_src			0xa0c2bd8f
#define clk_vcodec0_clk_src			0xbc193019
#define clk_gcc_blsp1_ahb_clk			0x8caa5b4f
#define clk_gcc_boot_rom_ahb_clk		0xde2adeb1
#define clk_gcc_crypto_ahb_clk			0x94de4919
#define clk_gcc_crypto_axi_clk			0xd4415c9b
#define clk_gcc_crypto_clk			0x00d390d2
#define clk_gcc_prng_ahb_clk			0x397e7eaa
#define clk_gcc_qdss_dap_clk			0x7fa9aa73
#define clk_gcc_apss_tcu_clk			0xaf56a329
#define clk_gcc_ipa_tbu_clk			0x75bbfb5c
#define clk_gcc_gfx_tbu_clk			0x18bb9a90
#define clk_gcc_gtcu_ahb_clk			0xb432168e
#define clk_gcc_jpeg_tbu_clk			0xcf8fd944
#define clk_gcc_mdp_tbu_clk			0x82287f76
#define clk_gcc_smmu_cfg_clk			0x75eaefa5
#define clk_gcc_venus_tbu_clk			0x7e0b97ce
#define clk_gcc_vfe_tbu_clk			0x061f2f95
#define clk_gcc_vfe1_tbu_clk			0x4888e70f
#define clk_gcc_cpp_tbu_clk			0xab6f19ab
#define clk_gcc_blsp1_qup1_i2c_apps_clk		0xc303fae9
#define clk_gcc_blsp1_qup1_spi_apps_clk		0x759a76b0
#define clk_gcc_blsp1_qup2_i2c_apps_clk		0x1076f220
#define clk_gcc_blsp1_qup2_spi_apps_clk		0x3e77d48f
#define clk_gcc_blsp1_qup3_i2c_apps_clk		0x9e25ac82
#define clk_gcc_blsp1_qup3_spi_apps_clk		0xfb978880
#define clk_gcc_blsp1_qup4_i2c_apps_clk		0xd7f40f6f
#define clk_gcc_blsp1_qup4_spi_apps_clk		0x80f8722f
#define clk_gcc_blsp1_uart1_apps_clk		0xc7c62f90
#define clk_gcc_blsp1_uart2_apps_clk		0xf8a61c96
#define clk_gcc_camss_cci_ahb_clk		0xa81c11ba
#define clk_gcc_camss_cci_clk			0xb7dd8824
#define clk_gcc_camss_csi0_ahb_clk		0x175d672a
#define clk_gcc_camss_csi0_clk			0x6b01b3e1
#define clk_gcc_camss_csi0phy_clk		0x06a41ff7
#define clk_gcc_camss_csi0pix_clk		0x61a8a930
#define clk_gcc_camss_csi0rdi_clk		0x7053c7ae
#define clk_gcc_camss_csi1_ahb_clk		0x2c2dc261
#define clk_gcc_camss_csi1_clk			0x1aba4a8c
#define clk_gcc_camss_csi1phy_clk		0x0fd1d1fa
#define clk_gcc_camss_csi1pix_clk		0x87fc98d8
#define clk_gcc_camss_csi1rdi_clk		0x6ac996fe
#define clk_gcc_camss_csi2_ahb_clk		0xf3f25940
#define clk_gcc_camss_csi2_clk			0xb6857fa2
#define clk_gcc_camss_csi2phy_clk		0xbeeffbcd
#define clk_gcc_camss_csi2pix_clk		0xa619561a
#define clk_gcc_camss_csi2rdi_clk		0x019fd3f1
#define clk_vfe1_clk_src			0x4e357366
#define clk_gcc_camss_vfe1_clk			0xcaf20d99
#define clk_gcc_camss_vfe1_ahb_clk		0x634a738a
#define clk_gcc_camss_vfe1_axi_clk		0xaf7463b3
#define clk_gcc_vfe1_qdss_at_clk		0xfff1e0be
#define clk_cpp_clk_src				0x8382f56d
#define clk_gcc_camss_cpp_clk			0x7118a0de
#define clk_gcc_camss_cpp_ahb_clk		0x4ac95e14
#define clk_gcc_camss_cpp_axi_clk		0xbbf73861
#define clk_gcc_cpp_qdss_at_clk			0x05805d0d
#define clk_gcc_cpp_qdss_tsctr_div8_clk		0xebd2c356
#define clk_gcc_camss_csi_vfe0_clk		0xcc73453c
#define clk_gcc_camss_csi_vfe1_clk		0xb1ef6e8b
#define clk_gcc_camss_gp0_clk			0xd2bc3892
#define clk_gcc_camss_gp1_clk			0xe4c013e1
#define clk_gcc_camss_ispif_ahb_clk		0x3c0a858f
#define clk_gcc_camss_jpeg0_clk			0x1ed3f032
#define clk_gcc_camss_jpeg_ahb_clk		0x3bfa7603
#define clk_gcc_camss_jpeg_axi_clk		0x3e278896
#define clk_gcc_camss_mclk0_clk			0x80902deb
#define clk_gcc_camss_mclk1_clk			0x5002d85f
#define clk_gcc_camss_mclk2_clk                 0x222f8fff
#define clk_gcc_camss_micro_ahb_clk		0xfbbee8cf
#define clk_gcc_camss_csi0phytimer_clk		0xf8897589
#define clk_gcc_camss_csi1phytimer_clk		0x4d26438f
#define clk_gcc_camss_ahb_clk			0x9894b414
#define clk_gcc_camss_top_ahb_clk		0x4e814a78
#define clk_gcc_camss_vfe0_clk			0xaaa3cd97
#define clk_gcc_camss_vfe_ahb_clk		0x4050f47a
#define clk_gcc_camss_vfe_axi_clk		0x77fe2384
#define clk_gcc_sys_mm_noc_axi_clk		0xb75a7187
#define clk_gcc_oxili_gmem_clk			0x5620913a
#define clk_gcc_gp1_clk				0x057f7b69
#define clk_gcc_gp2_clk				0x9bf83ffd
#define clk_gcc_gp3_clk				0xec6539ee
#define clk_gcc_mdss_ahb_clk			0xbfb92ed3
#define clk_gcc_mdss_axi_clk			0x668f51de
#define clk_gcc_mdss_byte0_clk			0x35da7862
#define clk_gcc_mdss_esc0_clk			0xaec5cb25
#define clk_gcc_mdss_mdp_clk			0x22f3521f
#define clk_gcc_mdss_pclk0_clk			0xcc5c5c77
#define clk_gcc_mdss_vsync_clk			0x32a09f1f
#define clk_gcc_mss_cfg_ahb_clk			0x111cde81
#define clk_gcc_mss_q6_bimc_axi_clk		0x67544d62
#define clk_gcc_oxili_ahb_clk			0xd15c8a00
#define clk_gcc_oxili_gfx3d_clk			0x49a51fd9
#define clk_gcc_oxili_timer_clk			0x1180db06
#define clk_gcc_oxili_aon_clk			0xae18e54d
#define clk_gcc_pdm2_clk			0x99d55711
#define clk_gcc_pdm_ahb_clk			0x365664f6
#define clk_gcc_sdcc1_ahb_clk			0x691e0caa
#define clk_gcc_sdcc1_apps_clk			0x9ad6fb96
#define clk_gcc_sdcc1_ice_core_clk		0x0fd5680a
#define clk_gcc_sdcc2_ahb_clk			0x23d5727f
#define clk_gcc_sdcc2_apps_clk			0x861b20ac
#define clk_gcc_usb2a_phy_sleep_clk		0x6caa736f
#define clk_gcc_usb_hs_phy_cfg_ahb_clk		0xe13808fd
#define clk_gcc_usb_hs_ahb_clk			0x72ce8032
#define clk_gcc_usb_fs_ahb_clk                  0x00e31116
#define clk_gcc_usb_fs_ic_clk			0xbd533d37
#define clk_gcc_usb_hs_system_clk		0xa11972e5
#define clk_gcc_usb_fs_system_clk               0xea3b114c
#define clk_gcc_venus0_ahb_clk			0x08d778c6
#define clk_gcc_venus0_axi_clk			0xcdf4c8f6
#define clk_gcc_venus0_vcodec0_clk		0xf76a02bb
#define clk_gcc_venus0_core0_vcodec0_clk        0x83a7f549
#define clk_gcc_venus0_core1_vcodec0_clk        0xa0813de6
#define clk_gcc_gfx_tcu_clk			0x59505e55
#define clk_gcc_gtcu_ahb_bridge_clk		0x19d2c5fe
#define clk_gcc_bimc_gpu_clk			0x19922503
#define clk_gcc_bimc_gfx_clk			0x3edd69ad
#define clk_ipa_clk				0xfa685cda
#define clk_ipa_a_clk				0xeeec2919
#define clk_mdss_mdp_vote_clk			0x588460a4
#define clk_mdss_rotator_vote_clk		0x5b1f675e

#define clk_pixel_clk_src                       0x8b6f83d8
#define clk_byte_clk_src                        0x3a911c53
#define clk_ext_pclk0_clk_src			0x087c1612
#define clk_ext_byte0_clk_src			0xfb32f31e

#define clk_dsi0pll_byte_clk_src		0xbbaa30be
#define clk_dsi0pll_pixel_clk_src		0x45b3260f
#define clk_dsi0pll_vco_clk			0x15940d40
#define clk_dsi1pll_byte_clk_src		0x63930a8f
#define clk_dsi1pll_pixel_clk_src		0x0e4c9b56
#define clk_dsi1pll_vco_clk			0x99797b50

#define clk_dsi_pll0_byte_clk_src		0x44539836
#define clk_dsi_pll0_pixel_clk_src		0x5767c287
#define clk_dsi_pll1_byte_clk_src		0x73e88d02
#define clk_dsi_pll1_pixel_clk_src		0xce233fcf
#define clk_ext_pclk1_clk_src			0x8067c5a3
#define clk_ext_byte1_clk_src			0x585ef6d4
#define clk_byte1_clk_src			0x63c2c955
#define clk_esc1_clk_src			0x3b0afa42
#define clk_pclk1_clk_src			0x090f68ac
#define clk_gcc_mdss_pclk1_clk			0x9a9c430d
#define clk_gcc_mdss_byte1_clk			0x41f97fd8
#define clk_gcc_mdss_esc1_clk			0x34653cc7
#define clk_gcc_dcc_clk				0xd1000c50
#define clk_gcc_debug_mux_8937			0x917968c2

/* clock_rpm controlled clocks */
#define clk_pnoc_clk				0xc1296d0f
#define clk_pnoc_a_clk				0x9bcffee4
#define clk_pnoc_msmbus_clk			0x2b53b688
#define clk_pnoc_msmbus_a_clk			0x9753a54f
#define clk_pnoc_keepalive_a_clk		0x9464f720
#define clk_pnoc_sps_clk			0x23d3f584
#define clk_pnoc_usb_a_clk			0x11d6a74e
#define clk_pnoc_usb_clk                        0x266d8376
#define clk_snoc_clk				0x2c341aa0
#define clk_snoc_a_clk				0x8fcef2af
#define clk_snoc_usb_a_clk			0x34b7821b
#define clk_snoc_wcnss_a_clk			0xd3949ebc
#define clk_snoc_usb_clk			0x29f9d73d
#define clk_snoc_msmbus_clk			0xe6900bb6
#define clk_snoc_msmbus_a_clk			0x5d4683bd
#define clk_snoc_mmnoc_axi_clk			0xfedd4bd5
#define clk_snoc_mmnoc_ahb_clk			0xd2149dbb
#define clk_sysmmnoc_clk			0xebb1df78
#define clk_sysmmnoc_a_clk			0x6ca682a2
#define clk_sysmmnoc_msmbus_clk			0xd61e5721
#define clk_sysmmnoc_msmbus_a_clk		0x50600f1b
#define clk_bimc_clk				0x4b80bf00
#define clk_bimc_a_clk				0x4b25668a
#define clk_bimc_acpu_a_clk			0x4446311b
#define clk_bimc_msmbus_clk			0xd212feea
#define clk_bimc_msmbus_a_clk			0x71d1a499
#define clk_bimc_usb_a_clk			0xea410834
#define clk_bimc_wcnss_a_clk			0x5a6df715
#define clk_bimc_usb_clk			0x9bd2b2bf
#define clk_bimc_gpu_clk			0xd3e0a327
#define clk_bimc_gpu_a_clk			0x67f0e9a5
#define clk_qdss_clk				0x1492202a
#define clk_qdss_a_clk				0xdd121669
#define clk_xo_clk_src				0x23f5649f
#define clk_xo_a_clk_src			0x2fdd2c7c
#define clk_xo_otg_clk				0x79bca5cc
#define clk_xo_a2				0xeba5a83d
#define clk_xo_dwc3_clk				0xfad488ce
#define clk_xo_ehci_host_clk			0xc7c340b1
#define clk_xo_lpm_clk				0x2be48257
#define clk_xo_pil_mss_clk			0xe97a8354
#define clk_xo_pil_pronto_clk			0x89dae6d0
#define clk_xo_wlan_clk				0x0116b76f
#define clk_xo_pil_lpass_clk			0xb72aa4c9
#define clk_bb_clk1				0xf5304268
#define clk_bb_clk1_a				0xfa113810
#define clk_bb_clk1_pin				0x6dd0a779
#define clk_bb_clk1_a_pin			0x9b637772
#define clk_bb_clk2				0xfe15cb87
#define clk_bb_clk2_a				0x59682706
#define clk_bb_clk2_pin				0x498938e5
#define clk_bb_clk2_a_pin			0x52513787
#define clk_rf_clk1				0xaabeea5a
#define clk_rf_clk1_a				0x72a10cb8
#define clk_rf_clk1_pin				0x8f463562
#define clk_rf_clk1_a_pin			0x62549ff6
#define clk_rf_clk2				0x24a30992
#define clk_rf_clk2_a				0x944d8bbd
#define clk_rf_clk2_pin				0xa7c5602a
#define clk_rf_clk2_a_pin			0x2d75eb4d
#define clk_div_clk1				0xaa1157a6
#define clk_div_clk1_a				0x6b943d68
#define clk_div_clk2				0xd454019f
#define clk_div_clk2_a				0x4bd7bfa8
#define clk_ln_bb_clk				0x3ab0b36d
#define clk_ln_bb_a_clk				0xc7257ea8


/* clock_debug controlled clocks */
#define clk_gcc_debug_mux			0x8121ac15
#define clk_rpm_debug_mux			0x25cd1f3a
#define clk_wcnss_m_clk				0x709f430b
#define clk_apss_debug_pri_mux			0xc691ff55
#define clk_apss_debug_sec_mux			0xc0b680f9
#define clk_apss_debug_ter_mux			0x32041c48
#define clk_apc0_m_clk				0xce1e9473
#define clk_apc1_m_clk				0x990fbaf7
#define clk_cci_m_clk				0xec7e8afc

#define clk_a53ssmux_lc				0x71a9377b
#define clk_a53ssmux_bc				0xb5983c42
#define clk_a53ssmux_cci			0x15560bd5

#define clk_a53_lc_clk				0xc69f0878
#define clk_a53_bc_clk				0xcf28e63a
#define clk_cci_clk                             0x96854074

#define clk_audio_ap_clk			0x312ac429
#define clk_audio_pmi_clk			0xb7ba2274
#define clk_audio_lpass_mclk			0x575ec22b

#endif
