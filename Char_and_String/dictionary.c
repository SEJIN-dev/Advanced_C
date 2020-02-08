#include <stdio.h>
#define WORDS 5
#include <string.h>
void main(void){
	
	char word[10];
	
	char dictionary[WORDS][2][10] ={
		{"book", "책"},
		{"boy","소년"},
		{"computer","소년"},
		{"rain","비"},
		{"hi","안녕"}
	};
	
	puts("검색할 단어를 입력하세요:");
	gets(word);

	int i=0;
	while(i<WORDS){
		if(strcmp(word,dictionary[i][0])==0){ 
			printf("%s\n",dictionary[i][1]);
		}
		
		i++;
	}	
}
