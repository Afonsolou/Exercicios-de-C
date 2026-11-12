#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265

int main() {

    double graus, resultado;

    printf("Vou calcular o seno do angulo que vc me mandar: ");
    scanf("%lf", &graus);

    resultado = sin(graus * PI / 180);

    printf("o seno de %lf é %.1lf", graus, resultado);

    return 0;
}