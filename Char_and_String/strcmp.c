#include <stdio.h>
//#include <string.h>

void main(void){
	char s1[80];
	char s2[80];
	int result;
	
	puts("첫번째 단어를 입력하시오:");
	gets(s1);
	printf("두번째 단어를 입력하시오:");
	scanf("%s", s2);
	
	result=strcmp(s1,s2);
	
	if(result<0) printf("%s가 %s보다 뒤에있습니다.\n",s1,s2);
	else if(result ==0) printf(" 둘이 같습니다.\n");
	else printf("%s가 %s보다 앞에 있습니다.\n",s1,s2);
}
