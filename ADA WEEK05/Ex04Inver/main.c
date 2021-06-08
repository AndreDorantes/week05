#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int a,b,c,d, e, f, g, h, i, j, k, l;
	float p, r, v, x,y,z, t;
	printf("insert the value of the first p1 of 3 digits:");
	scanf("%d",&a);
	printf("insert the value of the first p2 of 3 digits:");
	scanf("%d",&b);
	printf("insert the value of the first p3 of 3 digits:");
	scanf("%d",&c);
	d=a/100;
	a=a%100;
	e=a/10;
	f=a%10;
	x=f*100+e*10+d;
	g=b/100;
	b=b%100;
	h=b/10;
	i=b%10;
	y=i*100+h*10+g;
	j=c/100;
	c=c%100;
	k=c/10;
	l=c%10;
	z=l*100+k*10+j;
	t=x+y+z;
	p=(x/t)*100;
	r=(y/t)*100;
	v=(z/t)*100;

	printf("the percentage of the first is: %f", p);
	printf("\n the percentage of the second is: %f", r);
	printf("\n the percentage of the third is: %f", v);
	getch();
	return 0;

}
