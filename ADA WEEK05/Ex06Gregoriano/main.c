#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int a;
	printf("Insert the year: ");
	scanf("%d",&a);
	if(a % 4 == 0 && a% 100 != 0 || a % 400 == 0 )
        printf( "\n   Is a leap year" );
    else
        printf( "\n Is not a leap year" );
getch();
	return 0;
}
