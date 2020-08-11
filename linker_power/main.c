#include <stdio.h>
#include "power.h"

int main(int argc, char *argv[])
{
	int x,y;
	int return_value=0;
	printf("Enter x: ");
	scanf("%d",&x);
	printf("Enter y: ");
	scanf("%d",&y);
	

	printf("%d to the power of %d is %d\n", x,y,power(x,y,&return_value));
	printf("call by reference is :%d", return_value);
	
	return 0;
}
