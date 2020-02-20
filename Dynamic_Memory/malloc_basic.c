#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	char *pc = NULL;

	if( (pc = (char *)malloc(sizeof(char)) ) == NULL )	{
		printf( "메모리 할당 오류\n" );
		exit(1);
	}

	*pc = 'm';
	printf( "*pc = %c\n", *pc );
	free( pc );

	return 0;
}
