################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include bin/bluepill/stm32_common_periph/subdir.mk
-include bin/bluepill/stm32_common/subdir.mk
-include bin/bluepill/stdio_uart/subdir.mk
-include bin/bluepill/pm_layered/subdir.mk
-include bin/bluepill/periph_common/subdir.mk
-include bin/bluepill/periph/subdir.mk
-include bin/bluepill/newlib_syscalls_default/subdir.mk
-include bin/bluepill/cpu/subdir.mk
-include bin/bluepill/cortexm_common_periph/subdir.mk
-include bin/bluepill/cortexm_common/subdir.mk
-include bin/bluepill/core/subdir.mk
-include bin/bluepill/boards_common_blxxxpill/subdir.mk
-include bin/bluepill/auto_init/subdir.mk
-include bin/bluepill/application_pwm/subdir.mk
-include bin/bluepill/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
pwm.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
pwm.list \


# All Target
all: pwm.elf secondary-outputs

# Tool invocations
pwm.elf: $(OBJS) $(USER_OBJS)
	arm-none-eabi-gcc -o "pwm.elf" @"objects.list" $(USER_OBJS) $(LIBS) --specs=nosys.specs -Wl,-Map="pwm.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

pwm.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "pwm.list"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
