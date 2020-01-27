#include <stdio.h>

int power(int a, int b);
int add (int a, int b);
int sub (int a, int b);
void main()
{
	int x,y;
	printf("enter x,y:");
	scanf("%d %d",&x,&y);
	 
	int (*pf)(int,int);
	pf =power;
	printf("power result = %d\n",pf(x,y));
	
	pf=add;
	printf("add result = %d\n", pf(x,y));

	pf= sub;
	printf("sub result = %d\n", pf(x,y));
}

int sub(int a,int b){
	return a-b;
}

int power(int a, int b){
	
	int result =1;
	int i;
	for(int i=0;i<b; i++)
	{ result *= a;
	}
		
	return result;
}

int add(int a, int b){
	return a+b;
}
