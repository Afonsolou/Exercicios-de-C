#include <stdio.h>
#include <stdlib.h>

int main() {

    int A;

    printf("Digite um número de 1 a 7 que iremos dar o dia correspondente a ele: ");
    scanf("%d", &A);

    switch (A) {
        case 1:
        printf("O seu dia da semana é Domingo!");
        break;

        case 2:
        printf("O seu dia da semana é Segunda!");
        break;

        case 3:
        printf("O seu dia da semana é Terça!");
        break;

        case 4:
        printf("O seu dia da semana é Quarta!");
        break;

        case 5:
        printf("O seu dia da semana é Quinta!");
        break;

        case 6:
        printf("O seu dia da semana é Sexta!");
        break;

        case 7:
        printf("O seu dia da semana é Sábado!");
        break;
    
    default:
        printf("Não existe dia da semana para o número %d!", A);
        break;
    }

    return 0;
}