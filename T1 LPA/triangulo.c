#include <stdio.h>
#include <stdlib.h>

int main() {

    int A, B, C;

    printf("Me diga 3 valores que irei dizer se formam um triângulo e também o classificarei. \n");
    scanf("%d %d %d", &A, &B, &C);

    if (A + B > C && B + C > A && A + C > B) {
    
        if (A == B && B == C) {
        printf(" é um triângulo Equilátero");
        }
        else if (A == B || B == C || C == A) {
        printf("É um triângulo Isósceles");
        }
        else {
        printf("É um triângulo Escaleno");
        }
    }
    
    else{
        printf("Não é um triângulo!");
    }


    return 0;
}