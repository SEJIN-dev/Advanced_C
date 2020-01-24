#include <stdio.h>

int power(int a, int b);

void main()
{
	int x,y;
	printf("enter x,y:");
	scanf("%d %d",&x,&y);
	 
	int (*pf)(int,int);
	pf =power;
	printf("result = %d\n",pf(x,y));
}


int power(int a, int b){
	
	int result =1;
	int i;
	for(int i=0;i<b; i++)
	{ result *= a;
	}
		
	return result;
}
