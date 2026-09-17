#include <stdio.h>
#include <stdlib.h>

int main() {

    float Y, A, X, B;

    printf("da equação da reta Y = aX + b, me forneça a absorbância (Y), o coeficiente angular (a) e o coeficiente linear (b) na ordem que está, que lhe darei a concentração (X) \n");
    scanf("%f %f %f", &Y, &A, &B);

    X = (Y - B) / A;

    printf("A concentração (X) é igual a: %.2f", X);

    return 0;
}