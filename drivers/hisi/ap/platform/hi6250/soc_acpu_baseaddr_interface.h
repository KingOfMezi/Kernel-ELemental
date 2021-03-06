#ifndef __SOC_ACPU_BASEADDR_INTERFACE_H__
#define __SOC_ACPU_BASEADDR_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_ACPU_BOOTROM_NAND_REMAP_BASE_ADDR (0xFFFF0000)
#define SOC_ACPU_DMSS_BASE_ADDR (0xFFFC0000)
#define SOC_ACPU_DDRC_QOSB_BASE_ADDR (0xFFFC8000)
#define SOC_ACPU_DDRC_DMC_BASE_ADDR (0xFFFC9000)
#define SOC_ACPU_PACK_A_BASE_ADDR (0xFFFD0000)
#define SOC_ACPU_DDRPHY_STATIC_AC_DX_BASE_ADDR (0xFFFD1000)
#define SOC_ACPU_EXMBIST_BASE_ADDR (0xFFFD8000)
#define SOC_ACPU_NANDC_CFG_BASE_ADDR (0xFFFA0000)
#define SOC_ACPU_NANDC_BASE_ADDR (0xFFF80000)
#define SOC_ACPU_BOOTROM_BASE_ADDR (0xFFF60000)
#define SOC_ACPU_LPMCU_RAM_BASE_ADDR (0xFFF50000)
#define SOC_ACPU_LP_RAM_BASE_ADDR (0xFFF40000)
#define SOC_ACPU_LP_CONFIG_BASE_ADDR (0xFFF3F000)
#define SOC_ACPU_LP_TIMER_BASE_ADDR (0xFFF3E000)
#define SOC_ACPU_LP_Watchdog_BASE_ADDR (0xFFF3D000)
#define SOC_ACPU_GNSPWM_BASE_ADDR (0xFFF37000)
#define SOC_ACPU_PMU_SSI1_BASE_ADDR (0xFFF36000)
#define SOC_ACPU_PERI_CRG_BASE_ADDR (0xFFF35000)
#define SOC_ACPU_PMU_SSI0_BASE_ADDR (0xFFF34000)
#define SOC_ACPU_PMU_I2C_BASE_ADDR (0xFFF33000)
#define SOC_ACPU_UART6_BASE_ADDR (0xFFF32000)
#define SOC_ACPU_PMCTRL_BASE_ADDR (0xFFF31000)
#define SOC_ACPU_TSENSORC_BASE_ADDR (0xFFF30000)
#define SOC_ACPU_TIMER0_BASE_ADDR (0xFFF14000)
#define SOC_ACPU_TIMER1_BASE_ADDR (0xFFF15000)
#define SOC_ACPU_TIMER2_BASE_ADDR (0xFFF16000)
#define SOC_ACPU_TIMER3_BASE_ADDR (0xFFF17000)
#define SOC_ACPU_TIMER4_BASE_ADDR (0xFFF18000)
#define SOC_ACPU_TIMER5_BASE_ADDR (0xFFF19000)
#define SOC_ACPU_TIMER6_BASE_ADDR (0xFFF1A000)
#define SOC_ACPU_TIMER7_BASE_ADDR (0xFFF1B000)
#define SOC_ACPU_TIMER8_BASE_ADDR (0xFFF1C000)
#define SOC_ACPU_GPIO28_BASE_ADDR (0xFFF1D000)
#define SOC_ACPU_GPIO29_BASE_ADDR (0xFFF1E000)
#define SOC_ACPU_GPIO30_BASE_ADDR (0xFFF1F000)
#define SOC_ACPU_AO_IOC_BASE_ADDR (0xFFF11000)
#define SOC_ACPU_GPIO27_BASE_ADDR (0xFFF10000)
#define SOC_ACPU_GPIO26_BASE_ADDR (0xFFF0F000)
#define SOC_ACPU_GPIO25_BASE_ADDR (0xFFF0E000)
#define SOC_ACPU_GPIO24_BASE_ADDR (0xFFF0D000)
#define SOC_ACPU_GPIO23_BASE_ADDR (0xFFF0C000)
#define SOC_ACPU_GPIO22_BASE_ADDR (0xFFF0B000)
#define SOC_ACPU_SCTRL_BASE_ADDR (0xFFF0A000)
#define SOC_ACPU_SYS_CNT_BASE_ADDR (0xFFF08000)
#define SOC_ACPU_SCI1_BASE_ADDR (0xFFF07000)
#define SOC_ACPU_SCI0_BASE_ADDR (0xFFF06000)
#define SOC_ACPU_RTC1_BASE_ADDR (0xFFF05000)
#define SOC_ACPU_RTC0_BASE_ADDR (0xFFF04000)
#define SOC_ACPU_EFUSEC_BASE_ADDR (0xFFF03000)
#define SOC_ACPU_MMBUF_CFG_BASE_ADDR (0xFFF02000)
#define SOC_ACPU_MMBUF_ASC0_BASE_ADDR (0xFFF00000)
#define SOC_ACPU_IOMCU_RTC_BASE_ADDR (0xFFD7F000)
#define SOC_ACPU_IOMCU_CONFIG_BASE_ADDR (0xFFD7E000)
#define SOC_ACPU_IOMCU_TIMER_BASE_ADDR (0xFFD7D000)
#define SOC_ACPU_IOMCU_Watchdog_BASE_ADDR (0xFFD7C000)
#define SOC_ACPU_IOMCU_GPIO3_BASE_ADDR (0xFFD7B000)
#define SOC_ACPU_IOMCU_GPIO2_BASE_ADDR (0xFFD7A000)
#define SOC_ACPU_IOMCU_GPIO1_BASE_ADDR (0xFFD79000)
#define SOC_ACPU_IOMCU_GPIO0_BASE_ADDR (0xFFD78000)
#define SOC_ACPU_IOMCU_DMAC_BASE_ADDR (0xFFD77000)
#define SOC_ACPU_IOMCU_UART7_BASE_ADDR (0xFFD76000)
#define SOC_ACPU_IOMCU_BLPWM_BASE_ADDR (0xFFD75000)
#define SOC_ACPU_IOMCU_UART3_BASE_ADDR (0xFFD74000)
#define SOC_ACPU_IOMCU_I2C2_BASE_ADDR (0xFFD73000)
#define SOC_ACPU_IOMCU_I2C0_BASE_ADDR (0xFFD71000)
#define SOC_ACPU_IOMCU_SPI_BASE_ADDR (0xFFD70000)
#define SOC_ACPU_DTCM1Remap_BASE_ADDR (0xFFD6F000)
#define SOC_ACPU_DTCM0Remap_BASE_ADDR (0xFFD6E000)
#define SOC_ACPU_ITCMRemap_BASE_ADDR (0xFFD6C000)
#define SOC_ACPU_RemapCtrl_BASE_ADDR (0xFFD6B000)
#define SOC_ACPU_IOMCU_I2C3_BASE_ADDR (0xFFD6A000)
#define SOC_ACPU_IOMCU_UART8_BASE_ADDR (0xFFD69000)
#define SOC_ACPU_IOMCU_SPI2_BASE_ADDR (0xFFD68000)
#define SOC_ACPU_EMMC0_BASE_ADDR (0xFF390000)
#define SOC_ACPU_SD3_BASE_ADDR (0xFF37F000)
#define SOC_ACPU_SDIO0_BASE_ADDR (0xFF37D000)
#define SOC_ACPU_USB2OTG_BC_BASE_ADDR (0xFF200000)
#define SOC_ACPU_USB2OTG_BASE_ADDR (0xFF100000)
#define SOC_ACPU_IPF_PSAM_BASE_ADDR (0xFF040000)
#define SOC_ACPU_IPF_BASE_ADDR (0xFF031000)
#define SOC_ACPU_SOCP_BASE_ADDR (0xFF030000)
#define SOC_ACPU_PERF_STAT_BASE_ADDR (0xFF012000)
#define SOC_ACPU_SECENG_S_BASE_ADDR (0xFF011000)
#define SOC_ACPU_SECENG_P_BASE_ADDR (0xFF010000)
#define SOC_ACPU_CS_STM_BASE_ADDR (0xFE000000)
#define SOC_ACPU_PERI_DMAC_BASE_ADDR (0xFDF30000)
#define SOC_ACPU_IPC_MDM_S_BASE_ADDR (0xFDF22000)
#define SOC_ACPU_IPC_MDM_BASE_ADDR (0xFDF21000)
#define SOC_ACPU_I2C4_BASE_ADDR (0xFDF0D000)
#define SOC_ACPU_I2C3_BASE_ADDR (0xFDF0C000)
#define SOC_ACPU_SPI1_BASE_ADDR (0xFDF08000)
#define SOC_ACPU_UART5_BASE_ADDR (0xFDF05000)
#define SOC_ACPU_UART2_BASE_ADDR (0xFDF03000)
#define SOC_ACPU_UART0_BASE_ADDR (0xFDF02000)
#define SOC_ACPU_UART4_BASE_ADDR (0xFDF01000)
#define SOC_ACPU_UART1_BASE_ADDR (0xFDF00000)
#define SOC_ACPU_IOMCU_TCM_BASE_ADDR (0xF0000000)
#define SOC_ACPU_A53_L_ROM_TABLE_BASE_ADDR (0xEC800000)
#define SOC_ACPU_A53_L_FUNNEL_BASE_ADDR (0xEC801000)
#define SOC_ACPU_A53_L_ETF_BASE_ADDR (0xEC802000)
#define SOC_ACPU_A53_L_CTI_BASE_ADDR (0xEC803000)
#define SOC_ACPU_A53_B_ROM_TABLE_BASE_ADDR (0xED000000)
#define SOC_ACPU_A53_B_FUNNEL_BASE_ADDR (0xED001000)
#define SOC_ACPU_A53_B_ETF_BASE_ADDR (0xED002000)
#define SOC_ACPU_A53_B_CTI_BASE_ADDR (0xED003000)
#define SOC_ACPU_CSSYS_APB_BASE_ADDR (0xEC000000)
#define SOC_ACPU_CSSYS_ROM_TABLE_BASE_ADDR (0xEC030000)
#define SOC_ACPU_CSSYS_FUNNEL_BASE_ADDR (0xEC031000)
#define SOC_ACPU_CSSYS_TPIU_BASE_ADDR (0xEC032000)
#define SOC_ACPU_CSSYS_ETR_BASE_ADDR (0xEC033000)
#define SOC_ACPU_CSSYS_CTI_BASE_ADDR (0xEC034000)
#define SOC_ACPU_CSSYS_STM_BASE_ADDR (0xEC035000)
#define SOC_ACPU_CSSYS_ETF_BASE_ADDR (0xEC036000)
#define SOC_ACPU_CSSYS_Tsgen_BASE_ADDR (0xEC037000)
#define SOC_ACPU_CSSYS_Tsgen_RO_BASE_ADDR (0xEC038000)
#define SOC_ACPU_MMBUF_BASE_ADDR (0xEA800000)
#define SOC_ACPU_HKMEM_BASE_ADDR (0xEA000000)
#define SOC_ACPU_MMC0_NOC_Service_Target_BASE_ADDR (0xE9890000)
#define SOC_ACPU_MMC1_NOC_Service_Target_BASE_ADDR (0xE9880000)
#define SOC_ACPU_DEBUG_SEC_NOC_Service_Target_BASE_ADDR (0xE9870000)
#define SOC_ACPU_DMA_NOC_Service_Target_BASE_ADDR (0xE9860000)
#define SOC_ACPU_SYS_BUS_Service_Target_BASE_ADDR (0xE9840000)
#define SOC_ACPU_ASP_Service_Target_BASE_ADDR (0xE9830000)
#define SOC_ACPU_Modem_Service_Target_BASE_ADDR (0xE9820000)
#define SOC_ACPU_CFGBUS_Service_Target_BASE_ADDR (0xE9800000)
#define SOC_ACPU_TZPC_BASE_ADDR (0xE8A21000)
#define SOC_ACPU_GPIO0_BASE_ADDR (0xE8A0B000)
#define SOC_ACPU_GPIO1_BASE_ADDR (0xE8A0C000)
#define SOC_ACPU_GPIO2_BASE_ADDR (0xE8A0D000)
#define SOC_ACPU_GPIO3_BASE_ADDR (0xE8A0E000)
#define SOC_ACPU_GPIO4_BASE_ADDR (0xE8A0F000)
#define SOC_ACPU_GPIO5_BASE_ADDR (0xE8A10000)
#define SOC_ACPU_GPIO6_BASE_ADDR (0xE8A11000)
#define SOC_ACPU_GPIO7_BASE_ADDR (0xE8A12000)
#define SOC_ACPU_GPIO8_BASE_ADDR (0xE8A13000)
#define SOC_ACPU_GPIO9_BASE_ADDR (0xE8A14000)
#define SOC_ACPU_GPIO10_BASE_ADDR (0xE8A15000)
#define SOC_ACPU_GPIO11_BASE_ADDR (0xE8A16000)
#define SOC_ACPU_GPIO12_BASE_ADDR (0xE8A17000)
#define SOC_ACPU_GPIO13_BASE_ADDR (0xE8A18000)
#define SOC_ACPU_GPIO14_BASE_ADDR (0xE8A19000)
#define SOC_ACPU_GPIO15_BASE_ADDR (0xE8A1A000)
#define SOC_ACPU_GPIO16_BASE_ADDR (0xE8A1B000)
#define SOC_ACPU_GPIO17_BASE_ADDR (0xE8A1C000)
#define SOC_ACPU_GPIO18_BASE_ADDR (0xE8A1D000)
#define SOC_ACPU_GPIO19_BASE_ADDR (0xE8A1E000)
#define SOC_ACPU_GPIO20_BASE_ADDR (0xE8A1F000)
#define SOC_ACPU_GPIO21_BASE_ADDR (0xE8A20000)
#define SOC_ACPU_PCTRL_BASE_ADDR (0xE8A09000)
#define SOC_ACPU_LoadMonitor_BASE_ADDR (0xE8A08000)
#define SOC_ACPU_Watchdog1_BASE_ADDR (0xE8A07000)
#define SOC_ACPU_Watchdog0_BASE_ADDR (0xE8A06000)
#define SOC_ACPU_CTF_BASE_ADDR (0xE8A05000)
#define SOC_ACPU_PWM_BASE_ADDR (0xE8A04000)
#define SOC_ACPU_TIMER12_BASE_ADDR (0xE8A03000)
#define SOC_ACPU_TIMER11_BASE_ADDR (0xE8A02000)
#define SOC_ACPU_TIMER10_BASE_ADDR (0xE8A01000)
#define SOC_ACPU_TIMER9_BASE_ADDR (0xE8A00000)
#define SOC_ACPU_G3D_BASE_ADDR (0xE8970000)
#define SOC_ACPU_IOC_BASE_ADDR (0xE896C000)
#define SOC_ACPU_IPC_NS_BASE_ADDR (0xE896B000)
#define SOC_ACPU_IPC_BASE_ADDR (0xE896A000)
#define SOC_ACPU_NOC_VENC_Service_Target_BASE_ADDR (0xE8940000)
#define SOC_ACPU_NOC_VDEC_Service_Target_BASE_ADDR (0xE8930000)
#define SOC_ACPU_NOC_VCODECBUS_Service_Target_BASE_ADDR (0xE8920000)
#define SOC_ACPU_VENC_BASE_ADDR (0xE8900000)
#define SOC_ACPU_VDEC_BASE_ADDR (0xE8800000)
#define SOC_ACPU_NOC_ISP_Service_Target_BASE_ADDR (0xE86D0000)
#define SOC_ACPU_NOC_DSS_Service_Target_BASE_ADDR (0xE86C0000)
#define SOC_ACPU_ISP_CORE_CFG_BASE_ADDR (0xE8400000)
#define SOC_ACPU_ISP_Watchdog_BASE_ADDR (0xE8580000)
#define SOC_ACPU_ISP_TIMER_BASE_ADDR (0xE8581000)
#define SOC_ACPU_ISP_IPC_BASE_ADDR (0xE8582000)
#define SOC_ACPU_ISP_SUB_CTRL_BASE_ADDR (0xE8583000)
#define SOC_ACPU_GLB0_BASE_ADDR (0xE8600000)
#define SOC_ACPU_DSI0_BASE_ADDR (0xE8601000)
#define SOC_ACPU_CMD_BASE_ADDR (0xE8602000)
#define SOC_ACPU_AIF0_BASE_ADDR (0xE8607000)
#define SOC_ACPU_AIF1_BASE_ADDR (0xE8609000)
#define SOC_ACPU_MIF_BASE_ADDR (0xE860A000)
#define SOC_ACPU_MCTL_SYS_BASE_ADDR (0xE8610000)
#define SOC_ACPU_MCTL_MUTEX0_BASE_ADDR (0xE8610800)
#define SOC_ACPU_MCTL_MUTEX1_BASE_ADDR (0xE8610900)
#define SOC_ACPU_MCTL_MUTEX2_BASE_ADDR (0xE8610A00)
#define SOC_ACPU_MCTL_MUTEX3_BASE_ADDR (0xE8610B00)
#define SOC_ACPU_MCTL_MUTEX4_BASE_ADDR (0xE8610C00)
#define SOC_ACPU_MCTL_MUTEX5_BASE_ADDR (0xE8610D00)
#define SOC_ACPU_DBUG_BASE_ADDR (0xE8611000)
#define SOC_ACPU_RCH_V1_BASE_ADDR (0xE8628000)
#define SOC_ACPU_RCH_G1_BASE_ADDR (0xE8640000)
#define SOC_ACPU_RCH_D0_BASE_ADDR (0xE8650000)
#define SOC_ACPU_RCH_D1_BASE_ADDR (0xE8651000)
#define SOC_ACPU_RCH_D2_BASE_ADDR (0xE8652000)
#define SOC_ACPU_RCH_D3_BASE_ADDR (0xE8653000)
#define SOC_ACPU_WCH0_BASE_ADDR (0xE865A000)
#define SOC_ACPU_OV6_0_BASE_ADDR (0xE8660000)
#define SOC_ACPU_OV6_1_BASE_ADDR (0xE8660800)
#define SOC_ACPU_SCF_BASE_ADDR (0xE8664000)
#define SOC_ACPU_DBUF0_BASE_ADDR (0xE866D000)
#define SOC_ACPU_DPP_BASE_ADDR (0xE8670000)
#define SOC_ACPU_INTF0_BASE_ADDR (0xE867D000)
#define SOC_ACPU_OCB_CTRL_BASE_ADDR (0xE82C0000)
#define SOC_ACPU_CODEC_SSI_BASE_ADDR (0xE82B9000)
#define SOC_ACPU_HKADC_SSI_BASE_ADDR (0xE82B8000)
#define SOC_ACPU_GIC_BASE_ADDR (0xE82B0000)
#define SOC_ACPU_CCI_CFG_BASE_ADDR (0xE8100000)
#define SOC_ACPU_DSP_ITCM_BASE_ADDR (0xE8070000)
#define SOC_ACPU_DSP_DTCM_BASE_ADDR (0xE8058000)
#define SOC_ACPU_DigACodec_BASE_ADDR (0xE8052000)
#define SOC_ACPU_SLIMBUS_BASE_ADDR (0xE8050000)
#define SOC_ACPU_SIO_BT_BASE_ADDR (0xE804F800)
#define SOC_ACPU_SIO_VOICE_BASE_ADDR (0xE804F400)
#define SOC_ACPU_SIO_AUDIO_BASE_ADDR (0xE804F000)
#define SOC_ACPU_ASP_CFG_BASE_ADDR (0xE804E000)
#define SOC_ACPU_ASP_Watchdog_BASE_ADDR (0xE804D000)
#define SOC_ACPU_ASP_IPC_BASE_ADDR (0xE804C000)
#define SOC_ACPU_ASP_DMAC_BASE_ADDR (0xE804B000)
#define SOC_ACPU_ASP_TIMER1_BASE_ADDR (0xE804A000)
#define SOC_ACPU_ASP_TIMER0_BASE_ADDR (0xE8049000)
#define SOC_ACPU_ASP_GPIO_BASE_ADDR (0xE8048000)
#define SOC_ACPU_SECRAM_BASE_ADDR (0xE8000000)
#define SOC_ACPU_DRAM_BASE_ADDR (0x00000000)
#define SOC_ACPU_CBBE16_ITCM_BASE_ADDR (0xE2980000)
#define SOC_ACPU_CBBE16_DTCM_BASE_ADDR (0xE2900000)
#define SOC_ACPU_TL_BBE16_ITCM_BASE_ADDR (0xE2800000)
#define SOC_ACPU_TL_BBE16_DTCM_BASE_ADDR (0xE2700000)
#define SOC_ACPU_ON_CHIP_MEMORY_BASE_ADDR (0xE0800000)
#define SOC_ACPU_AXI_MON_BASE_ADDR (0xE0476000)
#define SOC_ACPU_IPCM_BASE_ADDR (0xE0475000)
#define SOC_ACPU_VIC_BBE16_BASE_ADDR (0xE0474000)
#define SOC_ACPU_Modem_HS_UART_BASE_ADDR (0xE0473000)
#define SOC_ACPU_Modem_IPF_BASE_ADDR (0xE0472000)
#define SOC_ACPU_UPACC_BASE_ADDR (0xE0471000)
#define SOC_ACPU_CIPHER_BASE_ADDR (0xE0470000)
#define SOC_ACPU_CICOM1_BASE_ADDR (0xE0450000)
#define SOC_ACPU_CICOM0_BASE_ADDR (0xE0440000)
#define SOC_ACPU_UICC_BASE_ADDR (0xE0400000)
#define SOC_ACPU_Modem_TIMER0_BASE_ADDR (0xE0300000)
#define SOC_ACPU_Modem_TIMER1_BASE_ADDR (0xE0301000)
#define SOC_ACPU_Modem_TIMER2_BASE_ADDR (0xE0302000)
#define SOC_ACPU_Modem_TIMER3_BASE_ADDR (0xE0303000)
#define SOC_ACPU_Modem_TIMER4_BASE_ADDR (0xE0304000)
#define SOC_ACPU_Modem_TIMER5_BASE_ADDR (0xE0305000)
#define SOC_ACPU_Modem_TIMER6_BASE_ADDR (0xE0306000)
#define SOC_ACPU_Modem_TIMER7_BASE_ADDR (0xE0307000)
#define SOC_ACPU_Modem_TIMER8_BASE_ADDR (0xE0308000)
#define SOC_ACPU_Modem_TIMER9_BASE_ADDR (0xE0309000)
#define SOC_ACPU_Modem_ASHB_Bridge_BASE_ADDR (0xE0205000)
#define SOC_ACPU_Modem_EDMAC_BASE_ADDR (0xE0204000)
#define SOC_ACPU_Modem_UART_BASE_ADDR (0xE0203000)
#define SOC_ACPU_Modem_WatchDog_BASE_ADDR (0xE0201000)
#define SOC_ACPU_Modem_Sysctrl_BASE_ADDR (0xE0200000)
#define SOC_ACPU_MCPU_Private_Space_BASE_ADDR (0xE0100000)
#define SOC_ACPU_MCPU_L2Cache_BASE_ADDR (0xE0000000)
#define SOC_ACPU_LTE_RFIN_BASE_ADDR (0xE1000000)
#define SOC_ACPU_LTE_FPU_BASE_ADDR (0xE1100000)
#define SOC_ACPU_BBP_DMA_BASE_ADDR (0xE1200000)
#define SOC_ACPU_DBG_BASE_ADDR (0xE1300000)
#define SOC_ACPU_LTE_PB_BASE_ADDR (0xE1400000)
#define SOC_ACPU_LTE_VDL_BASE_ADDR (0xE1500000)
#define SOC_ACPU_LTE_UL_BASE_ADDR (0xE1600000)
#define SOC_ACPU_LTE_INT_BASE_ADDR (0xE1700000)
#define SOC_ACPU_GSM0_BASE_ADDR (0xE1800000)
#define SOC_ACPU_GSM1_BASE_ADDR (0xE1880000)
#define SOC_ACPU_LTE_CQI_BASE_ADDR (0xE1A00000)
#define SOC_ACPU_LTE_PDU_BASE_ADDR (0xE1B00000)
#define SOC_ACPU_LTE_TDL_BASE_ADDR (0xE1C00000)
#define SOC_ACPU_TW_Share_BASE_ADDR (0xE1900000)
#define SOC_ACPU_WBBP_TOP1_BASE_ADDR (0xE1900000)
#define SOC_ACPU_XBBP_BASE_ADDR (0xE19E0000)
#define SOC_ACPU_TDS122_BASE_ADDR (0xE1D00000)
#define SOC_ACPU_TDS245_BASE_ADDR (0xE1E00000)
#define SOC_ACPU_CTU_BASE_ADDR (0xE1F80000)
#define SOC_ACPU_ET_BASE_ADDR (0xE1F88000)
#define SOC_ACPU_GU_BBP_MASTER_BASE_ADDR (0xE1F8A800)
#define SOC_ACPU_IRM_PS_CFG_BASE_ADDR (0xE1F8B000)
#define SOC_ACPU_ABB_BASE_ADDR (0xE1F8C000)
#define SOC_ACPU_ABB_CFG_BASE_ADDR (0xE1F8E000)
#define SOC_ACPU_LTE_ON_BASE_ADDR (0xFFF12000)
#define SOC_ACPU_BBP_COMM_ON_BASE_ADDR (0xFFF12000)
#define SOC_ACPU_GSM0_ON_BASE_ADDR (0xFFF12800)
#define SOC_ACPU_GSM1_ON_BASE_ADDR (0xFFF12C00)
#define SOC_ACPU_AFC_CH0_BASE_ADDR (0xFFF13000)
#define SOC_ACPU_AFC_CH1_BASE_ADDR (0xFFF13200)
#define SOC_ACPU_TDS_ON_BASE_ADDR (0xFFF13400)
#define SOC_ACPU_BBP_GLB_ON_BASE_ADDR (0xFFF12000)
#define SOC_ACPU_WCDMA_ON_BASE_ADDR (0xFFF12000)
#define SOC_ACPU_CDMA_ON_BASE_ADDR (0xFFF12000)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
