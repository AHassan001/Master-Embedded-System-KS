# Makefile
# Author: Abdelrahman Maher

CC=arm-none-eabi-
FLAGS=-mcpu=arm926ej-s
INCS=-I .
LIBS= 

SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)

AS=$(wildcard *.s)
AsOBJ=$(AS:.s=.o)

project=app

ALL: $(project).bin
	@echo "=======Building Process is finished======="

%.o:%.s
	$(CC)as.exe  $(FLAGS) $(INCS)    $< -o $@

%.o:%.c
	$(CC)gcc.exe  $(FLAGS) $(INCS) -c $< -o $@

$(project).elf:$(OBJ) $(AsOBJ)	
	$(CC)ld.exe -T LinkerScript.ld  $(OBJ) $(AsOBJ) -o $(project).elf -Map=map_file.map

$(project).bin:$(project).elf
	$(CC)objcopy.exe	-O binary $(project).elf  $(project).bin

Clear:
	rm *.elf *.bin *.map
	
Clear_All: 
	rm *.o *.elf *.bin *.map
	@echo "=======All compiled and executed files are deleted======="
