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
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
first_avr_proj.lss \

FLASH_IMAGE += \
first_avr_proj.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: first_avr_proj.elf secondary-outputs

# Tool invocations
first_avr_proj.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,first_avr_proj.map -mmcu=atmega32 -o "first_avr_proj.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

first_avr_proj.lss: first_avr_proj.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S first_avr_proj.elf  >"first_avr_proj.lss"
	@echo 'Finished building: $@'
	@echo ' '

first_avr_proj.hex: first_avr_proj.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex first_avr_proj.elf  "first_avr_proj.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: first_avr_proj.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 first_avr_proj.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) first_avr_proj.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
