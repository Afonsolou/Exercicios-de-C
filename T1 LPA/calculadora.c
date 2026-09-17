#include <stdio.h>
#include <stdlib.h>

int main() {

    float A, B;
    char operador;

    printf("Me dê dois valores e um operador nessa ordem, que irei te dar o resultado da conta. \n");
    scanf("%f %f %c", &A, &B, &operador);


    switch (operador) {
        case '+':
            printf("%.0f + %.0f = %.2f", A, B, A + B);
            break;
        
        case '-':
            printf("%.0f - %.0f = %.2f", A, B, A - B);
            break;

        case '*':
            printf("%.0f * %.0f = %.2f", A, B, A * B);
            break;

        case '/':
            if (B != 0) {
                printf("%.0f / %.0f = %.2f", A, B, A / B);
                break;
            }

            else {
                printf("Erro, divisão por zero não é permitida");
                break;
            }            

        default:
            printf("Operador %c é inválido!", operador);
            break;
    }
    

    return 0;
}