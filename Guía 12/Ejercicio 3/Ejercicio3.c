#include <stdio.h>
#include <stdlib.h>

double percH(double a, double b, double c)
{
	a= (double) (a/c)*100;
	return a;
}

double percM(double a, double b, double c)
{
	b= (double) (b/c)*100;
	return b;
}

int main(int argc, char *argv[])
{
	double a=0, b=0, c=0;
	printf("Ingrese el total de hombres y mujeres:\n");
	scanf("%lf %lf", &a, &b);
	c=a+b;
	printf("El porcentaje de hombres que enviaron su curriculum es del %g porciento y el de mujeres es el %g porciento\n", percH(a, b, c), percM(a, b, c));
	return 0;
}

