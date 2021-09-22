#include<stdio.h>
#include<stdlib.h>

double rel(double a, double b)
{
    double ret=0;
	if(a<b)
	{
		ret=b;
	}
	else if(a>b)
	{
		ret=a;
	}
    return ret;
}

int main()
{
    double a=0, b=0;
    printf("Ingrese 2 numeros:\n");
	scanf("%lf %lf", &a, &b);
    printf("El numero mayor es %g\n", rel(a, b));
    return 0;
}