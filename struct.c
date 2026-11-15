#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definindo a struct (ou registro) Pessoa

struct Pessoa {

    char Nome[30]; // 20 * 1 = 20 bytes
    int Idade; // 1 * 4 = 4 bytes
    float Altura; // 1 * 4 = 4 bytes
};

void exibirDados(struct Pessoa P);
struct Pessoa inicializarDados(char * N, int I, float A);
// Exemplo de utilização

int main() {

    system("cls");

    struct Pessoa Lista[3];

    Lista[0] = inicializarDados("Afonso", 25, 1.75);
    Lista[1] = inicializarDados("Andreia", 36, 1.60);
    Lista[2] = inicializarDados("Adriano", 20, 1.90);

    for(int i = 0; i < 3; i++) exibirDados(Lista[i]);

    return 0;
}

void exibirDados(struct Pessoa P) {

    printf("Exibindo os dados de uma pessoa: ");
    printf("%s \t", P.Nome);
    printf("%d \t", P.Idade);
    printf("%.2f \n", P.Altura);
}

struct Pessoa inicializarDados(char * N, int I, float A) {

    struct Pessoa P;

    strcpy(P.Nome, N);
    P.Idade = I;
    P.Altura = A;

    return P;
}