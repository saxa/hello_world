/* The main.c file for hello_world project
 * of course its written in C, because i like
 * C as a programming language.
 */

#include <stdio.h>

int main (int argv, char **argc)
{
	int i = 0;

	for (i=0; i<10; i++)
		printf ("%s\n", argc[1]);

	return 0;
}

