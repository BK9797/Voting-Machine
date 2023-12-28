################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAl/gpio.c 

OBJS += \
./MCAl/gpio.o 

C_DEPS += \
./MCAl/gpio.d 


# Each subdirectory must supply rules for building sources it contributes
MCAl/%.o: ../MCAl/%.c MCAl/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"C:\Users\EGYPT\eclipse-workspace\vote\APP" -I"C:\Users\EGYPT\eclipse-workspace\vote\HAL" -I"C:\Users\EGYPT\eclipse-workspace\vote\Libraries" -I"C:\Users\EGYPT\eclipse-workspace\vote\MCAl" -I"C:\Users\EGYPT\eclipse-workspace\vote\HAL\Keybad" -I"C:\Users\EGYPT\eclipse-workspace\vote\HAL\LCD" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


