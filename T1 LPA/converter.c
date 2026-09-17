#include <stdio.h>
#include <stdlib.h>

int main () {

    float A;
    int B;

    printf("Digite a quantidade de $ que vc quer converter: ");
    scanf("%f", &A);

    printf("1 para Dolár\n2 para Euro\n3 para Libra Esterlina\n4 para converter para Iene Japônes\nDigite o número da moeda você deseja converter: ");
    scanf("%d", &B);

    switch (B) {
        case 1:
            printf("vc possui %.2f Dolárs!", A * 0.20);
            break;

        case 2:
            printf("vc possui %.2f Euros!", A * 0.18);
            break;

        case 3:
            printf("vc possui %.2f Libra Esterlina!", A * 0.16);
            break;

        case 4:
            printf("vc possui %.2f Ienes Japônes!", A * 27);
            break;

        default:
            printf("vc digitou um número inválido!");
            break;
    }

    return 0;
        
}