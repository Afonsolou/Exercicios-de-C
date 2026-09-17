#include <stdio.h>
#include <stdlib.h>

int main () {

    int A, B, X;

    printf("Vou verificar se o X pertence ao intervalo [A,B], coloque os três valores começando pelo X primeiro por favor: ");
    scanf("%d %d %d", &X, &A, &B);
    
    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }

    if (A <= X && X <= B) {
        printf("X está no intervalo de [A,B]!");
    }
    else {
        printf("X não está no intervalo de [A,B]!");
    }

    return 0;
}