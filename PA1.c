/*
  Jensen Reitz
  CptS 360 -- K.C. Wang
  Programming Assingment 1
 */


#include "PA1.h"

#define DEBUG_PRINTS

int main(int argc, char * argv[], char * env[])
{
#ifdef DEBUG_PRINTS
	if(argc > 1)
	{
		printf("Line printed by prints(): ");
		prints(argv[1]);
		printf("\n");
	}
	else
		printf("Enter a string to be reprinted\n");
#endif
	
	return 0;
}
