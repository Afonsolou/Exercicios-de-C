#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int Magic, Palpite;

    srand(time(NULL));

    Magic = (rand() % 1000) + 1;

    printf("======= Jogo da Adivinhação ========\n");
    printf("Tente adivinhar o numero secreto entre 1 e 1000!\n\n");
    
    while (1) {
        printf("Digite o seu palpite: ");
        scanf("%d", &Palpite);
    
        if (Palpite == Magic) {
            printf("\nParabéns, você acertou o número %d", Magic);
            break;
        }
        else if (Palpite > Magic) {
            printf("\nO número %d é maior que o número sorteado.\n\n", Palpite);
        }
        else {
            printf("\nO número %d é menor que o número sorteado.\n\n", Palpite);
        }
    }
    return 0;
}