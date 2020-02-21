#include <stdio.h>
#include <stdlib.h>

void main(void){
	int *p;
	int i,j;
	p= (int *) malloc(5*sizeof(int));
	
	for(i=0;i<2;i++){
	*(p+i) = i;
	}
	
	printf("p size:%5ld\n",sizeof(p));
	for(j=0;j<2;j++){
		printf("%5d",p[j]);
	}
	
	
	puts("\n");
	p= realloc(p,7*sizeof(int));
	*(p+5) =500;
	p[6] =600;
	
		for(j=2;j<7;j++){
		printf("%5d",p[j]);
	}
	printf("\np size:%5ld\n",sizeof(p));
	
	puts("\n");
	free(p);
	
}
