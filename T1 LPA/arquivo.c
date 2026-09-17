#include <stdio.h>
#include <stdlib.h>

int main () {

    int N, U, D, C, T;

    printf("Digite um número inteiro de 3 digitos: ");
    scanf("%d", &N);

    if (N < 100 || N > 999) {
        printf("O numero digitado não possui 3 digitos\n");
        return 1;
    }

    U = N % 10;
    D = (N / 10) % 10;
    C = N / 100;

    T = (100 * U) + (10 * D) + C;

    printf("O valor calculado de T é: %d\n", T);

    /*
    Ex 1

        N = 123  

        passa a verificação de 3 Dígitos (N > 100 e N < 999)

        U = 3       
        D = 2
        C = 1
            
        T = 321
        Imprime (O valor calculado de T é: 321)
    
    Ex 2

        N = 3024
        Imprime (O numero digitado não possui 3 digitos)

    Ex 3

        N = 30
        Imprime (O numero digitado não possui 3 digitos)

    Ex 4

        N = 12A
        Imprime (O numero digitado não possui 3 digitos)

    Ex 5

        N = 519

        passa a verificação de 3 Dígitos (N > 100 e N < 999)

        U = 9
        D = 1
        C = 5

        T = 915
        Imprime (O valor calculado de T é: 915)

    */

    return 0;
}