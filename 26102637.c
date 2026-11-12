#include <stdio.h>
#include <stdlib.h>

int main() {

    char palavra[21];
    int i, soma, primo, j;

    while (scanf("%20s", palavra) != EOF) {
        soma = 0;
        if (palavra[0] == 'E' && palavra[1] == 'O' && palavra[2] == 'F' && palavra[3] == '\0') break;

        for (i = 0; palavra[i] != '\0'; i++) {
            if (palavra[i] >= 'a' && palavra[i] <= 'z'){
                soma += palavra[i] - 'a' + 1;
            }
            else {
                soma += palavra[i] - 'A' + 27;
            }
        }
        
        primo = 1;

        if(soma < 2) {
            primo = 0;
        }
        else {
            for (j = 2; j < soma; j++) {
                if (soma % j == 0) {
                    primo = 0;
                    break;
                }
            }
        }

        if (primo == 1) {
            printf("%d It is a prime word.\n", soma);
        } else {
            printf("%d It is not a prime word.\n", soma);
        }
    }

    return 0;
}

/*
Testes:

Entrada:
b
ABELHA
ZOO
misunderstanding
hello
presidente
a
dog
programa
computer

Saída:
2 It is a prime word.
185 It is not a prime word.
134 It is not a prime word.
191 It is a prime word.
52 It is not a prime word.
115 It is not a prime word.
1 It is not a prime word.
26 It is not a prime word.
89 It is a prime word.
111 It is not a prime word.
*/