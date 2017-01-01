################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
Bioloid-A.lss \

FLASH_IMAGE += \
Bioloid-A.hex \

EEPROM_IMAGE += \
Bioloid-A.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: Bioloid-A.elf secondary-outputs

# Tool invocations
Bioloid-A.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Bioloid-A.map -mmcu=atmega2560 -o "Bioloid-A.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Bioloid-A.lss: Bioloid-A.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Bioloid-A.elf  >"Bioloid-A.lss"
	@echo 'Finished building: $@'
	@echo ' '

Bioloid-A.hex: Bioloid-A.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -O ihex Bioloid-A.elf  "Bioloid-A.hex"
	@echo 'Finished building: $@'
	@echo ' '

Bioloid-A.eep: Bioloid-A.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex Bioloid-A.elf  "Bioloid-A.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Bioloid-A.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega2560 Bioloid-A.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(ASM_DEPS)$(EEPROM_IMAGE)$(FLASH_IMAGE)$(ELFS)$(LSS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS) Bioloid-A.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
