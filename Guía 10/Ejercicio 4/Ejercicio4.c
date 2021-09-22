#include<stdio.h>
#include<stdlib.h>

double calcPa(double a, double b)
{
	double Pa=0;
	Pa= (double) a/b;
	return Pa;
}

int main()
{
    double a=0, b=0;
	printf("Ingrese la fuerza (en newtons) y la superficie (en metros cuadrados):\n");
	scanf("%lf %lf", &a, &b);
	printf("La presion es de %g pa", calcPa(a, b));
	return 0;
}