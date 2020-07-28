#include<stdlib.h>
#include<stdio.h> 

void main(void){
	FILE *in,*out;
	char buf[100]={0};

	if(( in=fopen("a.txt","r"))==NULL){
			fprintf(stderr,"can't open a.txt\n");
			exit(1);
			}

	if(( out=fopen("b.txt","w+"))==NULL){
			fprintf(stderr,"can't open b.txt\n");
			exit(1);
			}
	while( fread(buf,1,1,in) != 0){			//copy a.txt b.txt
	fwrite (buf,1,1,out);
	}


	rewind(out);

	while( fread(buf,1,100,out) != 0){
		puts(buf);
	}

	rewind(in);
	fflush(in);



	fclose(in);
	fclose(out);
}


