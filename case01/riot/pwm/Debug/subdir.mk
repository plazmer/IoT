################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../main.c 

OBJS += \
./main.o 

C_DEPS += \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
main.o: ../main.c
	arm-none-eabi-gcc "$<" -std=gnu11 -g3 -c -I/home/u9122197373/Projects/riot_unwds/cpu/stm32_common/periph -I/home/u9122197373/Projects/riot_unwds/cpu/stm32_common/include -I/home/u9122197373/Projects/riot_unwds/cpu/stm32_common -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"main.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

