#include <stdio.h>
#include <stdlib.h>

void main(void){
	int *pi;
	int j;
	if( (pi=(int *)malloc(3*sizeof(int))) ==NULL){
		printf("error");
		exit(1);
	}
	
	pi[0]=0;
	*(pi+1)= 100;
	*(pi+2)= 200;
	//pi[4] =NULL;
	
	for(j=0;j<4;j++){
		printf("%3d:%3d\n",j,*(pi+j));
	}
	
	free(pi);
	
	
}

	
