#include <stdio.h>
#define SIZE 10
void swap(int *a,int *b);

void main(void)
{
	int A[SIZE]= {7,4,11,64,83,3,0,22,6,3};
	int i,j,least;
	
	for(i=0; i<SIZE-1;i++){
		least = i;
		for(j=i+1;j<SIZE;j++){
			if(A[least]>A[j]) least =j;
		}
		swap(&A[least],&A[i]);
	}
	
	for(i=0;i<SIZE;i++){
		printf("%d ",A[i]);
	}
	printf("\n");
}

void swap(int *a,int *b){
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

