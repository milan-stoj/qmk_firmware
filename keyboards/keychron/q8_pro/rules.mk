# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE
OPT_DEFS += -DNO_USB_STARTUP_CHECK -DENABLE_FACTORY_TEST

include keyboards/keychron/common/wireless/bluetooth.mk
include keyboards/keychron/common/keychron_common.mk

SRC += $(KEYCHRON_COMMON_DIR)/matrix.c
