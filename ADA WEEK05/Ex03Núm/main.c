#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
float i, r, summatory = 0, sum=0;
for(i=0; i<5; i++){ summatory=summatory + (4/(1+(4*i)));
} 
for(i=0; i<5; i++){sum=sum + (4/(3+(4*i)));
} 
r=summatory-sum;
printf("The summatory of the first 10 numbers of the series is %f", r);
getch ();
	return 0;
}	
