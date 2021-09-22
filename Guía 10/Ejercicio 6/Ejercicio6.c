#include<stdio.h>
#include<stdlib.h>

double divis(double a)
{
    double b=0;
    b= (double) a/8;
    return b;
}

int main()
{
    double a=0;
	printf("Ingrese un numero:\n");
	scanf("%lf", &a);
	printf("La octava parte de %g es %g", a, divis(a));
    return 0;
}