#include <stdio.h>
#include "power.h"

int main(int argc, char *argv[])
{
	int x,y;
	int return_value=0;
	extern int i; 
	
	
	printf("Enter x: ");
	scanf("%d",&x);
	printf("Enter y: ");
	scanf("%d",&y);
	
	printf("before performing program, extern i = %d\n",i); 
	printf("%d to the power of %d is %d\n", x,y,power(x,y,&return_value));
	printf("call by reference is :%d\n", return_value);
	
	printf("after performing program, extern i = %d\n",i); 
	return 0;
}
