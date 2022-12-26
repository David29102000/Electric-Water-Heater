################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HALL/BUTTONS.c \
../HALL/COOLING_SYSTEM.c \
../HALL/DIO.c \
../HALL/HEATING_SYSTEM.c \
../HALL/SEVEN_SEGMENT.c 

OBJS += \
./HALL/BUTTONS.o \
./HALL/COOLING_SYSTEM.o \
./HALL/DIO.o \
./HALL/HEATING_SYSTEM.o \
./HALL/SEVEN_SEGMENT.o 

C_DEPS += \
./HALL/BUTTONS.d \
./HALL/COOLING_SYSTEM.d \
./HALL/DIO.d \
./HALL/HEATING_SYSTEM.d \
./HALL/SEVEN_SEGMENT.d 


# Each subdirectory must supply rules for building sources it contributes
HALL/%.o: ../HALL/%.c HALL/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


