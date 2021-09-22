#include<stdio.h>
#include<stdlib.h>

double calcPerim(double a, double b)
{
	double P=0;
	P= (double) 2*a+2*b;
	return P;
}

double calcArea(double a, double b)
{
	double A=0;
	A= (double) a*b;
	return A;
}

int main()
{
    double a=0, b=0;
	printf("Ingrese la altura y anchura del rectangulo:\n");
	scanf("%lf %lf", &a, &b);
	printf("El perimetro del rectangulo es %g y su area es %g\n", calcPerim(a, b), calcArea(a, b));
	return 0;
}