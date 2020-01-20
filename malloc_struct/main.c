#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book{
	int num;
	char title[20];
};

int main(void)
{
	struct book *p;
	int i=0;
	
	if( (p= (struct book *)malloc( 2*sizeof(struct book))) ==NULL )
	{
		printf("failed");
		exit(1);
	}
	
	p-> num = 1;
	strcpy(p->title,"C programming");
	
	(p+1) -> num =2;
	strcpy((p+1)-> title,"Data structure");
	
	while(i<2){
	printf("num:%d title:%s \n", (p+i)->num, (p+i)-> title);
	i++;
	}
	
	printf("struct book size: %ld\n", sizeof(struct book));
	printf("title size: %ld \n ",sizeof((p+1)-> title));
	free(p);
	
}
