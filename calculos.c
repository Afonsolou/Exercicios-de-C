#include <stdio.h>
#include <stdlib.h>

int main () {

    int A, B, C, n1, n2, n3, n4, n5;

    A = 3;
    B = 7;
    C = 4;

    n1 = (A + C) > B;
    n2 = B >= (A + 2);
    n3 = C == (B - A);
    n4 = (B + A) <= C;
    n5 = (C + A) > B;

    printf("%d %d %d %d %d", n1, n2, n3, n4, n5);

    //0 1 1 0 0

    return 0;
}