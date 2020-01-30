//take two numbers and store in the array. 
//make power function getting result through argument
 
#include <stdio.h>
void power(int value[], int *result);
void main(void){
	int result =1;
	
	int list[2]; 
	printf("put two numbers ");
	scanf("%d %d",list,&list[1]);
	
	printf("%d to the power of %d is : ",*(list),*(list+1));
	power(list,&result);
	printf("%d\n",result);
}

void power(int value[], int *result){
	int i=0;
	
	for(i; i< *(value+1) ;i++){
		*result *= *(value+0);
	}
}
