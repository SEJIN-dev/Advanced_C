#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *pc = NULL;
	int i = 0;

	if( (pc = (char *)malloc(100*sizeof(char)) ) == NULL ) {    //100byte할당함
		printf("메모리 할당 오류\n");
		exit(1);
	}
	for(i=0; i<26; i++){   *(pc+i) = 'a'+i;	}  // 알파벳 소문자를 순서대로 대입   

	*(pc+i) = 0;	// 마지막에 NULL 문자 추가, *은 Asterisk(아스테리스크)라 읽음.

	printf("%s\n", pc);
	free(pc);
	return 0;
}
