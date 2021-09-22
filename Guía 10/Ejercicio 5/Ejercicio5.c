#include<stdio.h>
#include<stdlib.h>

double totRes()
{
    double a=0, b=0;
    for (int i = 1; i <= 5; i++)
    {
        scanf("%lf", &a);
        printf("El valor de esta resistencia es %g\n", a);
        b+=a;
    }
    return b;
}

int main()
{
    double a=0, b=0;
    printf("Ingrese el valor de las 5 resistencias:\n");
    printf("La resistencia total es de %g", totRes());
    return 0;
}