#include <stdio.h>
#include <stdlib.h>

// Implementação das funções

char f (int X) {
    if (X == 1) return 'C';
    else if (X == 2) return 'D';
    else if (X == 3) return 'E';
    else if (X == 4) return 'B';
    else if (X == 5) return 'E';

    return '\0';
}

int main() {

    system ("cls");

    char Resposta = f(4);
    printf("\n Teste 1: %c", Resposta);
    printf("\n Teste 2: %c%c", f(2), f(5));

}