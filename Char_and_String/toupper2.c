//gets is dangerous because gets function don't inspect overflow. 
//in other words, thouth we define length of array, it is possible to store much more

#include <stdio.h>	//for using gets
#include <ctype.h>  //for using toupper
void main(void){
	char str[10];
	puts("입력:");
	gets(str);
	int i=0;
	
	while(str[i]!=0){
		str[i]=toupper(str[i]);
		printf("%c",str[i]);
		i++;
	}
	puts("\n");	
}
