#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	double V, pi=3.14159;
	int R;
	scanf("%d", &R);
	V=((4.0/3)*pi*R*R*R);
	printf("VOLUME = %.3f\n", V);
	return 0;
}