# MPLAB IDE generated this makefile for use with GNU make.
# Project: Exp6.mcp
# Date: Tue Oct 31 15:55:44 2023

AS = MPASMWIN.exe
CC = mcc18.exe
LD = mplink.exe
AR = mplib.exe
RM = rm

Exp6.cof : square.o
	$(LD) /p18F4550 /l"C:\Program Files (x86)\Microchip\mplabc18\v3.45\lib" "Bootloader_18f4550 (1).lkr" "square.o" /u_CRUNTIME /u_DEBUG /z__MPLAB_BUILD=1 /z__MPLAB_DEBUG=1 /o"Exp6.cof" /M"Exp6.map" /W

square.o : square.c C:/Program\ Files\ (x86)/Microchip/mplabc18/v3.45/h/p18f4550.h
	$(CC) -p=18F4550 "square.c" -fo="square.o" -D__DEBUG -Ou- -Ot- -Ob- -Op- -Or- -Od- -Opa-

clean : 
	$(RM) "square.o" "Exp6.cof" "Exp6.hex"

