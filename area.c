#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float Area, A, B, C, P;

    printf("Diga o valor de três lados de um triângulo, que irei dizer sua área: ");
    scanf("%f %f %f", &A, &B, &C);

    P = (A + B + C) / 2;
    Area = sqrt(P * (P - A) * (P - B) * (P - C));

    printf("A área é %.3f!", Area);

    return 0;
}