#include <stdio.h>
#include <stdlib.h>

int main() {

    int A;

    printf("Me diga um número e irei verificar se ele é par ou ímpar: ");
    scanf("%d", &A);

    switch (A % 2) {
        case 0:
            printf("O número %d é par!", A);
            break;
        
        case 1:
            printf("O número %d é ímpar!", A);
            break;
    
        default:
            printf("Não foi possível identificar %d como número Natural!", A);
            break;
    }

    return 0;
}