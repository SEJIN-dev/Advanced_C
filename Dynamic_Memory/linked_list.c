#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define S_SIZE 50
#define MAX_BOOKS 10

struct book{
	char title[S_SIZE];
	int year;
};

int main(void){
	struct book books[MAX_BOOKS];
	char buffer[S_SIZE];
	int n=0, i, year;
	
	while(n < MAX_BOOKS){
		printf("Enter name for book: press enter if you want to stop");
		gets(buffer);
		if (buffer[0] =='/0') break;
		strcpy books[n].title, buffer);
		printf("Enter year when the books is released");
		scanf("%d," &books[n].year);
		n++;
	}
	
	printf("\n");
	
	for(i=0;i<n;i++){
		printf("책제목:
