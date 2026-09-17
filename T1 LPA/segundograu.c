#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    float A, B, C, X1, X2, D;

    printf("Me forneça os coeficientes A, B e C na ordem que estão, que irei determinas os valores de X: ");
    scanf("%f %f %f", &A, &B, &C);

    D = B * B - 4 * A * C;

    X1 = (-B + sqrt(D)) / (2 * A);
    X2 = (-B - sqrt(D)) / (2 * A);

    printf("X1 é igual a %.2f e X2 é igual a %.2f", X1, X2);
    

    return 0;
}