#include <stdio.h>

int get_line_parameter(int x1,int y1, int x2, int y2, float *slope, float *yintercept);

int main(void)
{
	int x1,y1,x2,y2;
	float s,y;
	
	printf("please enter x1 and y1 :");
	scanf("%d %d",&x1,&y1);
	printf("please enter x2 and y2 :");
	scanf("%d %d",&x2,&y2);
	
	get_line_parameter(x1,y1,x2,y2,&s,&y);
	printf("slope is %f and yintercept is %f\n", s,y);
	
	return 0;
}


int get_line_parameter(int x1,int y1, int x2, int y2, float *slope,float *yintercept)
{
	*slope = (float)(y2-y1)/(float)(x2-x1);
	*yintercept = y1-(*slope)*x1;
	return 0;
}

	
