#include <stdio.h>
#include <string.h>

void main(void){
	int i=0;
	
	char *fruits[] = {
	"apple",
	"blueberry",
	"orange",
	"melon"
	};
	
	printf(" fruits[0] : %s\n",fruits[0]);
	printf(" *fruits[0] : %d\n",*fruits[0]);
	printf(" &fruits[0] : %c\n",&fruits[0]);
	/*
	for(i;i<4;i++){
		printf(" name: %s:%ld\n",fruits[i],sizeof(fruits[i]));
	};
	*/
}
