# Makefile
# Author: Abdelrahman Maher

CC=arm-none-eabi-
CFLAGS= -mcpu=cortex-m3 -mthumb -gdwarf-2
INCS=-I .
LIBS= 

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

AS = $(wildcard *.s)
AsOBJ = $(AS:.s=.o)

project = Toggle_Led_cortex_M3

ALL: $(project).bin
	@echo "=======Building Process is finished======="

%.o: %.s
	$(CC)as.exe  $(CFLAGS)  $< -o $@

%.o: %.c
	$(CC)gcc.exe  $(CFLAGS) $(INCS) -c $< -o $@

$(project).elf : $(OBJ) $(AsOBJ)	
	$(CC)ld.exe -T LinkerScript.ld  $(LIBS) $(OBJ) $(AsOBJ) -o $@ -Map=map_file.map

$(project).bin: $(project).elf
	$(CC)objcopy.exe -O binary $< $@

Clear:
	rm *.elf *.bin *.map
	
Clear_All: 
	rm *.o *.elf *.bin *.map
	@echo "=======All compiled and executed files are deleted======="
