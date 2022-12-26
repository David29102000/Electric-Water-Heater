################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/DIO.c \
../MCAL/I2C.c \
../MCAL/Interrupt_enable.c \
../MCAL/TIMER.c 

OBJS += \
./MCAL/DIO.o \
./MCAL/I2C.o \
./MCAL/Interrupt_enable.o \
./MCAL/TIMER.o 

C_DEPS += \
./MCAL/DIO.d \
./MCAL/I2C.d \
./MCAL/Interrupt_enable.d \
./MCAL/TIMER.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/%.o: ../MCAL/%.c MCAL/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


