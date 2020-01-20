#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);

int main(void)
{
	int num[10];
	int i=0,j;
	
	for(i=0;i<10;i++) num[i]=rand()%10;
	
	i=0;	
	while( i<10 ) 
	{printf("num[%d]=%d   ",i,num[i]);
		i++;
	}
	
	
	printf("\n");
	
	for(i=0;i<9;i++){
		for(j=i+1;j<10;j++){
			if(num[i]>num[j]) swap(&num[i],&num[j]);
		}
	}
	
	
	for(i=0;i<10;i++) {
		printf("num[%d]=%d   ",i,num[i]);
	}
	printf("\n");
	
	return 0;
}

void swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
		
