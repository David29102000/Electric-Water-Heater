################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HALL/BUTTONS.c \
../HALL/COOLING_SYSTEM.c \
../HALL/EEPROM.c \
../HALL/HEATING_SYSTEM.c \
../HALL/LM35.c \
../HALL/PROTOCOL.c \
../HALL/SEVEN_SEGMENT.c 

OBJS += \
./HALL/BUTTONS.o \
./HALL/COOLING_SYSTEM.o \
./HALL/EEPROM.o \
./HALL/HEATING_SYSTEM.o \
./HALL/LM35.o \
./HALL/PROTOCOL.o \
./HALL/SEVEN_SEGMENT.o 

C_DEPS += \
./HALL/BUTTONS.d \
./HALL/COOLING_SYSTEM.d \
./HALL/EEPROM.d \
./HALL/HEATING_SYSTEM.d \
./HALL/LM35.d \
./HALL/PROTOCOL.d \
./HALL/SEVEN_SEGMENT.d 


# Each subdirectory must supply rules for building sources it contributes
HALL/%.o: ../HALL/%.c HALL/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


