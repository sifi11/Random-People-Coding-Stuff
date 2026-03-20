#include "vga.h"

int puts(char* str) // totally not stolen from crystal, lol
{
	volatile char* pVgaTextBuff = 0xB8000;
	for (str; *str != 0; str++ )
        {
        	pVgaTextBuff[0] = *str;
        	pVgaTextBuff[1] = 0x0f; //color atrib
        	pVgaTextBuff += 2;
        }
}
