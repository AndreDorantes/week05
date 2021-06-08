/*This program will turn seconds into hrs:min:seg*/
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int h, m, s=0;
	printf ("Insert a number of seconds that you want to convert into hours:minutes:seconds \n");
	scanf ("%d", &s);
	h=s/3600;
	s=s%3600;
	m=s/60;
	s=s%60;
	printf ("The convertion is %dhours:%dminutes:%dseconds", h,m,s);
	getch();
	return 0;
}
