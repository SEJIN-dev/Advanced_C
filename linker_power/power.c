#include <stdio.h>
#include "power.h"

int power(int x, int y)
{
	int i;
	int result=1;
	
	for(i =0; i<y; i++){
	result *= x;
	}
	
	return result;
}
