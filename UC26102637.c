#include <stdio.h>

int main() {
    double e = 0.0;
    double termo = 1.0; // Primeiro termo (1/0! = 1.0)

    for (int n = 0; n < 5; n++) {
        if (n > 0) {
            termo /= (double)n; // Divide o termo anterior por n em ponto flutuante
        }
        e += termo;
    }

    printf("Valor aproximado de e: %.15f\n", e);

    return 0;
}