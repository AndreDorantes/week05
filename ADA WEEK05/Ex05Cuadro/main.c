/* This program draws a asteriks square*/
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int i,j;
	for (i=0; i<4; i++)
	{for (j=0; j<4; j++)
		 printf ("*");
	printf ("\n");
	}
	getch ();
	return 0;
}
