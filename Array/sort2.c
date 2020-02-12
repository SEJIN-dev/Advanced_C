#include <stdio.h>
#include <stdlib.h> // for random function 
#define MAX 10

void swap(int *a, int *b);

void main(void)
{
	int list[MAX];
	int i,j,min;
	for(i=0;i<MAX; i++){ 
		list[i] = rand() %10;
		printf("%d  ",list[i]);
	}
	printf("\n");
	
	for(i=0;i<MAX-1;i++){
		min = i;
		
		for(j=i+1;j<MAX;j++){
			if(list[min]>list[j]) min=j;
		}
		swap(&list[min],&list[i]);
	}
	
	for(i=0;i<MAX;i++) printf("%d  ",list[i]);
	printf("\n");


}


void swap(int *a,int *b){
	int tmp;
	tmp= *a;
	*a=*b;
	*b=tmp;
}

	
