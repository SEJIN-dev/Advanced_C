//coordinates is stored in array.
//get the slope value via return
//take the yintercept through argument. 

#include <stdio.h>
 
float get_value(int list[], float *y_value);
void main(void)
{
	int coordinates[] = {3,3,6,6};
	float yintercept;
	float slope;
	slope = get_value(coordinates, &yintercept);
	
	printf(" slope = %f, yintercept= %f\n", slope,yintercept);

}

float get_value(int list[], float *y_value){
	float slope;
	slope = (*(list+3)-*(list+1))/( *(list+2)-*(list+0));
	return slope;
	
	*y_value = list[1]- slope*list[0];
}
