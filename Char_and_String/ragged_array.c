#include <stdio.h>
#include <string.h>

void main(void){
	int i=0;
	
	char *fruits[] = {
	"aaaaaaaaaaaaaaaapple",
	"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbblueberry",
	"orange",
	"melon"
	};
	
	char *name = "sejin";
	for(i;i<4;i++){
		printf(" name: %s:%ld\n",fruits[i],sizeof(fruits[i]));
	};
	printf("name:%s\n",name);
	printf("*name:%d\n",*name);
	printf("&name[0]:%s\n",&name[0]);
}
