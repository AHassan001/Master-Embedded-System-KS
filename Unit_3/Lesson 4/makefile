# Makefile
# Author: Abdelrahman Maher

CC=arm-none-eabi-
CFLAGS= -mcpu=cortex-m4 -mthumb -gdwarf-2 -g
INCS=-I .
LIBS= 

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

AS = $(wildcard *.s)
AsOBJ = $(AS:.s=.o)

project = Unit3_less4_T_Led_M4

ALL: $(project).bin
	@echo "=======Building Process is finished======="

%.o: %.s
	$(CC)as.exe  $(CFLAGS)  $< -o $@

%.o: %.c
	$(CC)gcc.exe  $(CFLAGS) $(INCS) -c $< -o $@

$(project).elf : $(OBJ) $(AsOBJ)	
	$(CC)ld.exe -T LinkerScript.ld  $(LIBS) $(OBJ) $(AsOBJ) -o $@ -Map=map_file.map
	cp  $(project).elf  $(project).axf

$(project).bin: $(project).elf
	$(CC)objcopy.exe -O binary $< $@

Clear:
	rm *.elf *.bin *.map
	
Clear_All: 
	rm *.o *.elf *.bin *.map
	@echo "=======All compiled and executed files are deleted======="
