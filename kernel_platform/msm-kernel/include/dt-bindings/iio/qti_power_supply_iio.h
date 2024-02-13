/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2020-2021 The Linux Foundation. All rights reserved.
 * Copyright (c) 2022, Qualcomm Innovation Center, Inc. All rights reserved.
 */

#ifndef __QTI_POWER_SUPPLY_IIO_H__
#define __QTI_POWER_SUPPLY_IIO_H__

/* PSY_IIO properties */

/* USB */
#define PSY_IIO_PD_CURRENT_MAX			0x00
#define PSY_IIO_TYPEC_MODE			0x01
#define PSY_IIO_TYPEC_POWER_ROLE		0x02
#define PSY_IIO_TYPEC_CC_ORIENTATION		0x03
#define PSY_IIO_PD_ACTIVE			0x04
#define PSY_IIO_USB_INPUT_CURRENT_SETTLED	0x05
#define PSY_IIO_INPUT_CURRENT_NOW		0x06
#define PSY_IIO_PE_START			0x07
#define PSY_IIO_CTM_CURRENT_MAX			0x08
#define PSY_IIO_HW_CURRENT_MAX			0x09
#define PSY_IIO_USB_REAL_TYPE			0x0a
#define PSY_IIO_PD_VOLTAGE_MAX			0x0b
#define PSY_IIO_PD_VOLTAGE_MIN			0x0c
#define PSY_IIO_CONNECTOR_TYPE			0x0d
#define PSY_IIO_CONNECTOR_HEALTH		0x0e
#define PSY_IIO_VOLTAGE_MAX_LIMIT		0x0f
#define PSY_IIO_SMB_EN_MODE			0x10
#define PSY_IIO_SMB_EN_REASON			0x11
#define PSY_IIO_ADAPTER_CC_MODE			0x12
#define PSY_IIO_MOISTURE_DETECTED		0x13
#define PSY_IIO_HVDCP_OPTI_ALLOWED		0x14
#define PSY_IIO_QC_OPTI_DISABLE			0x15
#define PSY_IIO_VOLTAGE_VPH			0x16
#define PSY_IIO_THERM_ICL_LIMIT			0x17
#define PSY_IIO_SKIN_HEALTH			0x18
#define PSY_IIO_APSD_RERUN			0x19
#define PSY_IIO_APSD_TIMEOUT			0x1a
#define PSY_IIO_CHARGER_STATUS			0x1b
#define PSY_IIO_USB_INPUT_VOLTAGE_SETTLED	0x1c

#define PSY_IIO_TYPEC_SRC_RP			0x1d
#define PSY_IIO_PD_IN_HARD_RESET		0x1e
#define PSY_IIO_PD_USB_SUSPEND_SUPPORTED	0x1f
#define PSY_IIO_PR_SWAP				0x20

/* MAIN */
#define PSY_IIO_MAIN_INPUT_CURRENT_SETTLED	0x21
#define PSY_IIO_MAIN_INPUT_VOLTAGE_SETTLED	0x22
#define PSY_IIO_FCC_DELTA			0x23
#define PSY_IIO_FLASH_ACTIVE			0x24
#define PSY_IIO_FLASH_TRIGGER			0x25
#define PSY_IIO_TOGGLE_STAT			0x26
#define PSY_IIO_MAIN_FCC_MAX			0x27
#define PSY_IIO_IRQ_STATUS			0x28
#define PSY_IIO_FORCE_MAIN_FCC			0x29
#define PSY_IIO_FORCE_MAIN_ICL			0x2a
#define PSY_IIO_COMP_CLAMP_LEVEL		0x2b
#define PSY_IIO_HOT_TEMP			0x2c

#define PSY_IIO_VOLTAGE_MAX			0x2d
#define PSY_IIO_CONSTANT_CHARGE_CURRENT_MAX	0x2e
#define PSY_IIO_CURRENT_MAX			0x2f
#define PSY_IIO_HEALTH				0x30

/* DC */
#define PSY_IIO_INPUT_VOLTAGE_REGULATION	0x31
#define PSY_IIO_DC_REAL_TYPE			0x32
#define PSY_IIO_DC_RESET			0x33
#define PSY_IIO_AICL_DONE			0x34

/* BATTERY */
#define PSY_IIO_CHARGER_TEMP			0x35
#define PSY_IIO_CHARGER_TEMP_MAX		0x36
#define PSY_IIO_INPUT_CURRENT_LIMITED		0x37
#define PSY_IIO_SW_JEITA_ENABLED		0x38
#define PSY_IIO_CHARGE_DONE			0x39
#define PSY_IIO_PARALLEL_DISABLE		0x3a
#define PSY_IIO_SET_SHIP_MODE			0x3b
#define PSY_IIO_DIE_HEALTH			0x3c
#define PSY_IIO_RERUN_AICL			0x3d
#define PSY_IIO_DP_DM				0x3e
#define PSY_IIO_RECHARGE_SOC			0x3f
#define PSY_IIO_FORCE_RECHARGE			0x40
#define PSY_IIO_FCC_STEPPER_ENABLE		0x41

/* BMS */
#define PSY_IIO_CAPACITY			0x42
#define PSY_IIO_CAPACITY_RAW			0x43
#define PSY_IIO_REAL_CAPACITY			0x44
#define PSY_IIO_TEMP				0x45
#define PSY_IIO_VOLTAGE_NOW			0x46
#define PSY_IIO_VOLTAGE_OCV			0x47
#define PSY_IIO_CURRENT_NOW			0x48
#define PSY_IIO_CHARGE_COUNTER			0x49
#define PSY_IIO_RESISTANCE			0x4a
#define PSY_IIO_RESISTANCE_ID			0x4b
#define PSY_IIO_SOC_REPORTING_READY		0x4c
#define PSY_IIO_RESISTANCE_CAPACITIVE		0x4d
#define PSY_IIO_DEBUG_BATTERY			0x4e
#define PSY_IIO_VOLTAGE_MIN			0x4f
#define PSY_IIO_BATT_FULL_CURRENT		0x50
#define PSY_IIO_BATT_PROFILE_VERSION		0x51
#define PSY_IIO_CYCLE_COUNT			0x52
#define PSY_IIO_CHARGE_FULL			0x53
#define PSY_IIO_CHARGE_FULL_DESIGN		0x54
#define PSY_IIO_TIME_TO_FULL_AVG		0x55
#define PSY_IIO_TIME_TO_FULL_NOW		0x56
#define PSY_IIO_TIME_TO_EMPTY_AVG		0x57
#define PSY_IIO_ESR_ACTUAL			0x58
#define PSY_IIO_ESR_NOMINAL			0x59
#define PSY_IIO_SOH				0x5a
#define PSY_IIO_CC_SOC				0x5b
#define PSY_IIO_FG_RESET			0x5c
#define PSY_IIO_VOLTAGE_AVG			0x5d
#define PSY_IIO_CURRENT_AVG			0x5e
#define PSY_IIO_POWER_AVG			0x5f
#define PSY_IIO_POWER_NOW			0x60
#define PSY_IIO_SCALE_MODE_EN			0x61
#define PSY_IIO_BATT_AGE_LEVEL			0x62
#define PSY_IIO_FG_TYPE				0x63

#define PSY_IIO_TYPEC_ACCESSORY_MODE		0x64

/* CHARGE PUMP */
#define PSY_IIO_CP_STATUS1			0x65
#define PSY_IIO_CP_STATUS2			0x66
#define PSY_IIO_CP_ENABLE			0x67
#define PSY_IIO_CP_SWITCHER_EN			0x68
#define PSY_IIO_CP_DIE_TEMP			0x69
#define PSY_IIO_CP_ISNS				0x6a
#define PSY_IIO_CP_ISNS_SLAVE			0x6b
#define PSY_IIO_CP_TOGGLE_SWITCHER		0x6c
#define PSY_IIO_CP_ILIM				0x6d
#define PSY_IIO_CHIP_VERSION			0x6e
#define PSY_IIO_PARALLEL_MODE			0x6f
#define PSY_IIO_PARALLEL_OUTPUT_MODE		0x70
#define PSY_IIO_MIN_ICL				0x71

#define PSY_IIO_CP_INPUT_CURRENT_MAX		0x72
#define PSY_IIO_CURRENT_CAPABILITY		0x73

/* SMB1355 Parallel */
#define PSY_IIO_CHARGE_TYPE			0x74
#define PSY_IIO_ONLINE				0x75
#define PSY_IIO_CHARGING_ENABLED		0x76
#define PSY_IIO_PIN_ENABLED			0x77
#define PSY_IIO_INPUT_SUSPEND			0x78
#define PSY_IIO_PARALLEL_BATFET_MODE		0x79
#define PSY_IIO_PARALLEL_FCC_MAX		0x7a

/* USB */
#define PSY_IIO_MOISTURE_DETECTION_EN		0x7b

/* BMS */
#define PSY_IIO_CLEAR_SOH			0x7c
#define PSY_IIO_SYS_SOC				0x7d

/* DS */
#define PSY_IIO_DS_ROMID                        0x7e
#define PSY_IIO_DS_STATUS                        0x7f
#define PSY_IIO_DS_PAGENUMBER                        0x80
#define PSY_IIO_DS_PAGEDATA                        0x81
#define PSY_IIO_DS_AUTHEN_RESULT                0x82
#define PSY_IIO_DS_SESSION_SEED                        0x83
#define PSY_IIO_DS_S_SECRET                        0x84
#define PSY_IIO_DS_CHALLENGE                        0x85
#define PSY_IIO_DS_AUTH_ANON                        0x86
#define PSY_IIO_DS_AUTH_BDCONST                        0x87
#define PSY_IIO_DS_PAGE0_DATA                        0x88
#define PSY_IIO_DS_PAGE1_DATA                        0x89
#define PSY_IIO_DS_VERIFY_MODEL_NAME                0x8a
#define PSY_IIO_DS_CHIP_OK                        0x8b
#define PSY_IIO_DS_CYCLE_COUNT                        0x8c
#define PSY_IIO_DS_AUTHENTIC                        0x8d

/* nopmi */
#define PSY_IIO_MTBF_CUR                        0x8e

/* sc8551 charge pump */
#define PSY_IIO_STATUS                                0x8f
#define PSY_IIO_PRESENT                                0x90
#define PSY_IIO_SP2130_FAULT_STATUS                        0x91
#define PSY_IIO_SP2130_BATTERY_PRESENT                 0x92
#define PSY_IIO_SP2130_VBUS_PRESENT                 0x93
#define PSY_IIO_SP2130_BATTERY_VOLTAGE                 0x94
#define PSY_IIO_SP2130_BATTERY_CURRENT                0x95
#define PSY_IIO_SP2130_BATTERY_TEMPERATURE                0x96
#define PSY_IIO_SP2130_BUS_VOLTAGE                        0x97
#define PSY_IIO_SP2130_BUS_CURRENT                        0x98
#define PSY_IIO_SP2130_BUS_TEMPERATURE                0x99
#define PSY_IIO_SP2130_DIE_TEMPERATURE                0x9a
#define PSY_IIO_SP2130_ALARM_STATUS                        0x9b
#define PSY_IIO_SP2130_VBUS_ERROR_STATUS                0x9c
#define PSY_IIO_SP2130_CHIP_VENDOR                        0x9d

/* MAIN charge */
#define PSY_IIO_CHARGE_ENABLED                        0x9e

/* sm5602 fg*/
#define PSY_IIO_SHUTDOWN_DELAY                        0x9f
#define PSY_IIO_SOC_DECIMAL                        0xa0
#define PSY_IIO_SOC_DECIMAL_RATE                0xa1
#define PSY_IIO_FASTCHARGE_MODE                        0xa2
#define PSY_IIO_BATTERY_TYPE                        0xa3


/*ln8000*/
#define PSY_IIO_TI_BYPASS_MODE_ENABLED                0xa4
#define PSY_IIO_TI_SET_BUS_PROTECTION_FOR_QC3        0xa5
#define PSY_IIO_CONSTANT_CHARGE_VOLTAGE                0xa6
#define PSY_IIO_MODEL_NAME                        0xa7
#define PSY_IIO_TI_REG_STATUS                        0xa8
#define PSY_IIO_HV_CHARGE_ENABLED                0xa9
#define PSY_IIO_CP_INPUT_CURRENT_LIMIT                0xaa

#define PSY_IIO_DEV_CHIP_ID                        0xab

#define PSY_IIO_APDO_VOLT                        0xac
#define PSY_IIO_APDO_CURR                        0xad

// for NOPMI
#define PSY_IIO_CHARGE_IC_TYPE                        0xae
#define PSY_IIO_FFC_DISABLE                        0xaf

// for sm5602 fg
#define PSY_IIO_FG_MONITOR_WORK                        0xb0
#define PSY_IIO_BATT_ID                                0xb1

/* QNOVO5 */
#define PSY_IIO_VOLTAGE_QNOVO       0xb2
#define PSY_IIO_CURRENT_QNOVO       0xb3

#define PSY_IIO_USB_MA		0xb4
#define PSY_IIO_CHARGE_AFC	0xb5
#define PSY_IIO_CHARGE_DISABLE		0xb6

#define PSY_IIO_QUICK_CHARGE_DISABLE 0xb7
#define PSY_IIO_CHARGE_AFC_DISABLE   0xb8
#define PSY_IIO_PPS_CHARGE_DISABLE 0xb9

#endif /* __QTI_POWER_SUPPLY_IIO_H__ */