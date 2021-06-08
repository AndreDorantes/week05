/* This program is used for calculating the area and the volume of a cilinder*/
#include <stdio.h>
#include <stdlib.h>
#define Pi 3.1416

int main(int argc, char *argv[]) {
float h, r, a, v;	
printf ("Insert the height of the cilinder: ");
scanf ("%f",&h);
printf ("Insert the radius of the cilinder: ");
scanf ("%f",&r);
v=Pi*r*r*h;
a=(2*Pi*r*r)+(2*Pi*r*h);
printf ("The volume of the cilinder is %f \n", v);
printf ("The area of the cilinder is %f", a);
getch();
	return 0; }
