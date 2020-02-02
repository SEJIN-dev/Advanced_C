#include <stdio.h>
#include <string.h>

void main(void){
	char A[]= "hello";
	char string[100];
	char B[100];
	strcpy(B," world");
	
	strcat(A,B);
	strcat(A," I'm sejin-dev");
	puts(A);
	printf("\n%s\n", A);	
}
