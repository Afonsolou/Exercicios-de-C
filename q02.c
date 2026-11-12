#include <stdio.h>
#include <stdlib.h>

int main() {

    float Taxa, D1, D2, D3;
    Taxa = 1.025;
    D1 = 1500 * Taxa;
    D2 = D1 * Taxa;
    D3 = D2 * Taxa;

    printf("seu montante é R$%.2f.", D3);

    //seu montante é R$1615.34.

    return 0;   
}