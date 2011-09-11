/* The main.c file for hello_world project
 * of course its written in C, because i like
 * C as a programming language.
 */

#include <stdio.h>
#include <stdlib.h>

void usage (char *pname);

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
void usage (char *pname)
{
	printf ("Hi user :) \n");
	printf ("To run this program you must suply one argument.\n");
	printf ("Something like this:\n");
	printf ("%s: your_name\n", pname);
}
