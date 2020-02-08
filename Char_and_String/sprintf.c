#include <stdio.h>

void main(void){
	char name[]="sejin";
	char buffer[10];
	sprintf(buffer,"%s","hello");
	printf("%s\n", buffer);
	
	sprintf(buffer,"%s",name);
	printf("%s\n", buffer);
	
}
