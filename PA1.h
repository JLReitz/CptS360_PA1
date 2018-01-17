#ifndef PA1_H
#define PA1_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

typedef unsigned int u32;

// Global Variables ********************************************************************************

const int _Hex_Base = 6, _Oct_Base = 8, _Dec_Base = 10;
const char * _ctable = "0123456789ABCDEF";

// Function Definitions ****************************************************************************

int rpu(u32 x)
{  
    char c;
    if (x){
       c = _ctable[x % BASE];
       rpu(x / D_BASE);
       putchar(c);
    }
}

void prints(char * s)
{
	int i = 0;
	
	while(*(s+i))
		putchar(*(s+i));
}

int printu(u32 x)
{
   (x==0)? putchar('0') : rpu(x);
   putchar(' ');
}


#endif
