################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/Led/green_led.c 

OBJS += \
./HAL/Led/green_led.o 

C_DEPS += \
./HAL/Led/green_led.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/Led/%.o: ../HAL/Led/%.c HAL/Led/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"/Users/bishoykamel/Documents/Study/Projects/vote/APP" -I"/Users/bishoykamel/Documents/Study/Projects/vote/HAL" -I"/Users/bishoykamel/Documents/Study/Projects/vote/Libraries" -I"/Users/bishoykamel/Documents/Study/Projects/vote/HAL/Keybad" -I"/Users/bishoykamel/Documents/Study/Projects/vote/HAL/LCD" -I"/Users/bishoykamel/Documents/Study/Projects/vote/MCAl/GPIO" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


