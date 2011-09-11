/* The main.c file for hello_world project
 * of course its written in C, because i like
 * C as a programming language.
 */
#include "main.h"

int main (int argc, char *argv[])
{

#ifdef DEBUG
	printf ("argc: %d\n", argc);
#endif

	/* Lets see if we are run with args */
	if ( argc<2 ){
#ifdef DEBUG
		printf ("argc: %d\n", argc);
#endif
		usage(argv[0]);
		exit (0);
	}
	int i = 0;

	for (i=0; i<10; i++)
		printf ("%s\n", argv[1]);

	return 0;
}
