#include <stdio.h>
#include "power.h"

int i;

int power(int x, int y, int *return_value)
{
	int result=1;
	
	for(i =0; i<y; i++){
	result *= x;
	}
	*return_value = result; 
	return result;

}
