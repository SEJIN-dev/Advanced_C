#include <stdio.h>
#include "power.h"

int main()
{
	int x,y;
	
	printf("Enter x: ");
	scanf("%d",&x);
	printf("Enter y: ");
	scanf("%d",&y);
	

	printf("%d to the power of %d is %d\n", x,y,power(x,y));
	
	return 0;
}
