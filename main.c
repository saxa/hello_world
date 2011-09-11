/* The main.c file for hello_world project
 * of course its written in C, because i like
 * C as a programming language.
 */

#include <stdio.h>

void usage (char *pname);

int main (int argc, char **argv)
{
	/* Lets see if we are run with args */
	if ( argc=0 )
		usage (*argv);

	int i = 0;

	for (i=0; i<10; i++)
		printf ("%s\n", argv[1]);

	return 0;
}
void usage (char *progname)
{
	printf ("Hi user :) \n \
		To run this program you must suply one argument.\n \
		Something like this:\n \
		%s: your_name\n", *progname);
}
