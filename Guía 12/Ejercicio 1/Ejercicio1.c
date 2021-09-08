#include <stdio.h>
#include <stdlib.h>

double writeA()
{
	double a=0;
	scanf("%lf", &a);
	return a;
}

double writeB()
{
	double b=0;
	scanf("%lf", &b);
	return b;
}

int main(int argc, char *argv[])
{
	double a=0, b=0;
	printf("Ingrese 2 numeros:\n");
	a=writeA();
	b=writeB();
	printf("El primer numero es %g\nEl segundo es %g", a, b);
	return 0;
}

