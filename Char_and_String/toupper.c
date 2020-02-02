#include <stdio.h>
#include <ctype.h>

int main( void )
{
	int c;

	while((c = getchar()) != EOF)
	{
		if( islower(c) )
			c = toupper(c);
		putchar(c);
		printf("%ld\n",sizeof(c));
	}
	return 0;
}
