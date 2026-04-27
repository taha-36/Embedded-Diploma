################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
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
EXECUTABLES += \
LiveLab1.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
LiveLab1.list \

OBJCOPY_HEX += \
LiveLab1.hex \

OBJCOPY_BIN += \
LiveLab1.bin \


# All Target
all: LiveLab1.elf secondary-outputs

# Tool invocations
LiveLab1.elf: $(OBJS) $(USER_OBJS) C:\Users\abdel\Workspace\Embedded-Diploma\Embedded\ C\EmbeddedC_Lec1\STM32F103C6TX_FLASH.ld
	arm-none-eabi-gcc -o "LiveLab1.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"C:\Users\abdel\Workspace\Embedded-Diploma\Embedded C\EmbeddedC_Lec1\STM32F103C6TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="LiveLab1.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

LiveLab1.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "LiveLab1.list"
	@echo 'Finished building: $@'
	@echo ' '

LiveLab1.hex: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "LiveLab1.hex"
	@echo 'Finished building: $@'
	@echo ' '

LiveLab1.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "LiveLab1.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
