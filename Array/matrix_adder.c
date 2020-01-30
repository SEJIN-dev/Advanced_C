#include <stdio.h>
#define cols 3
#define rows 3

void main(void)
{
	int i,j,k;
	int matrix[3][rows][cols] = {
								 {{2,3,0},
								  {8,9,1}, 
								  {7,0,5}},
								 {{1,0,0},
								  {1,0,0},
								  {1,0,0}}
								  
							  };
	
	for(j=0;j<rows;j++){
			for(i=0;i<cols;i++){
				matrix[2][j][i]= matrix[0][j][i]+matrix[1][j][i];
			}
		}
		
								  
							 
	for(k=0;k<3;k++){
		for(j=0;j<rows;j++){
			for(i=0;i<cols;i++){
				printf("%d,",matrix[k][j][i]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
