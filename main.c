#include <stdio.h>
#include <stdlib.h>

int main()
{
    int distancia;
    double combustivel, medio;

    printf("Distancia percorrida: ");
    scanf("%d", &distancia);
    printf("Combustivel gasto: ");
    scanf("%lf", &combustivel);

    medio = distancia/combustivel;

    printf("Consumo medio: %.3lf", medio);
    return 0;
}
