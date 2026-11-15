#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {

    float L;
    float A ;

} Ret ;

float calcularArea(Ret R);
float calcularPerimetro(Ret R);
int verificarQuadrado(Ret R); // 1 para "SIM" e 0 para "NÃO"

int main() {

    system("cls");

    Ret ABCD;
    ABCD.A = 3.0;
    ABCD.L = 4.0;

    printf("Area: %.2f \n", calcularArea(ABCD));
    printf("Perimetro: %.2f \n", calcularPerimetro(ABCD));
    printf("E quadrado: %s \n", verificarQuadrado(ABCD) ? "SIM" : "NÃO");

    return 0;

}

float calcularArea(Ret R) {
    float Area = R.A * R.L;
    return Area;

}

float calcularPerimetro(Ret R) {
    return R.A * 2 + R.L * 2;

}

int verificarQuadrado(Ret R) {
    if (R.A == R.L) return 1;
    else return 0;

}