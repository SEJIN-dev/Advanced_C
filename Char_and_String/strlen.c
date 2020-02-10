#include <stdio.h>
#include <string.h>

void main(void){
	int len1=0;
	int len2=0;
	char s[] = "hi there";
	
	len1 = strlen(s);
	while(s[len2] !=0) len2++;
	
	printf("len1: %d\n", len1);
	printf("len2: %d\n", len2);
}
