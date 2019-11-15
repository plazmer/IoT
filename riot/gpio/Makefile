# name of your application
APPLICATION = button

# If no BOARD is found in the environment, use this default:
BOARD ?= unwd-range-l1-r3

# This has to be the absolute path to the RIOT base directory:
#RIOTBASE ?= $(CURDIR)/../..
RIOTBASE = /home/u9122197373/Projects/riot_unwds

#list from apps/loralan-gateway
FEATURES_REQUIRED += periph_gpio
FEATURES_REQUIRED += periph_spi
FEATURES_REQUIRED += periph_eeprom
FEATURES_REQUIRED += periph_uart
FEATURES_REQUIRED += periph_pm
FEATURES_REQUIRED += periph_iwdg
FEATURES_REQUIRED += periph_cpuid
FEATURES_REQUIRED += periph_status
FEATURES_REQUIRED += periph_status_extended

# Modules to include:
USEMODULE += shell
USEMODULE += shell_commands
USEMODULE += ps
USEMODULE += od
USEMODULE += xtimer
USEMODULE += crypto
USEMODULE += cipher_modes
USEMODULE += random
USEMODULE += hashes
USEMODULE += checksum
USEMODULE += sx127x
USEMODULE += lptimer
USEMODULE += umdk_meteo


# xtimer
FEATURES_REQUIRED += periph_timer
USEMODULE += xtimer
# /xtimer

# gpio
FEATURES_REQUIRED += periph_gpio
USEMODULE += periph_gpio_irq
# /gpio


#unwds_modules
USEMODULE += loralan-device
USEMODULE += loralan-mac

DIRS += $(RIOTBASE)/apps/unwds-common/loralan-mac/
DIRS += $(RIOTBASE)/apps/unwds-common/loralan-device/

INCLUDES += -I$(RIOTBASE)/apps/unwds-common/loralan-device/include/

# Comment this out to disable code in RIOT that does safety checking
# which is not needed in a production environment but helps in the
# development process:
DEVELHELP ?= 1

# Change this to 0 show compiler invocation lines by default:
QUIET ?= 1

include $(RIOTBASE)/Makefile.include
