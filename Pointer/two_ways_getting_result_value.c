#include <stdio.h>
#define count 6
void value_check(int value[], int n);
double get_avg(int list[], int N);
void get_argument_value(int list[], int n, double *result);


int main(void){
	int i=0;
	int list[count] ={1,2,3,4,5,-20};
	double return_value ;
	double arg_value;
	value_check(list, count);
	
	
	return_value = get_avg(list, count);
	printf("return value = %f\n", return_value);
	
	get_argument_value(list,count, &arg_value);
	printf("arg_value = %f\n", arg_value);

	
	return 0;
	
}

void value_check(int value[], int n){
	int i=0;
	while(i<n){
		if(value[i]<0) 
		{	
			value[i] = 0;
			printf("value[%d] changed to 0\n",i);
		}
	i++;
	}

}

double get_avg(int list[], int N){
	int i=0;
	double sum=0.0;
	
	while(i<N){
		sum += list[i];
		printf("%d\n",list[i]);
		i++;
	}
	printf("sum = %.2f\n", sum);
	return sum/N;
}

void get_argument_value(int list[], int n, double *result)
{
	int i;
	double sum=0.0;
	for( i=0;i<n;i++){
		sum += list[i];
	}
	
	*result = sum/n;
}


