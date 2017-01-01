################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../BioloidCControl.c \
../adc.c \
../button.c \
../buzzer.c \
../clock.c \
../dxl_hal.c \
../dynamixel.c \
../led.c \
../motion.c \
../pose.c \
../serial.c \
../walk.c 

OBJS += \
./BioloidCControl.o \
./adc.o \
./button.o \
./buzzer.o \
./clock.o \
./dxl_hal.o \
./dynamixel.o \
./led.o \
./motion.o \
./pose.o \
./serial.o \
./walk.o 

C_DEPS += \
./BioloidCControl.d \
./adc.d \
./button.d \
./buzzer.d \
./clock.d \
./dxl_hal.d \
./dynamixel.d \
./led.d \
./motion.d \
./pose.d \
./serial.d \
./walk.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O1 -fpack-struct -fshort-enums -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega2560 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


