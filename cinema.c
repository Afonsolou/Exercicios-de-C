#include <stdio.h>
#include <stdlib.h>

int main() {

    int filme, horario, preco, quantidade;
    char genero;

    float preco_basico = 0.0;
    float perc_desconto_tipo = 0.0;
    float perc_desconto_terror = 0.0;
    float valor_unitario = 0.0;
    float subtotal = 0.0;
    float perc_desconto_qtd = 0.0;
    float valor_desconto_qtd = 0.0;
    float valor_total = 0.0;

    printf("\nSeja bem vindo ao Cinema!\n\n");

    printf("Escolha seu filme:\n\n");
    printf("1. Aventura\n2. Comedia\n3. Ficcao cientifica\n4. Terror\n\n");
    printf("Digite um numero de 1 a 4: ");
    scanf("%d", &filme);

    switch (filme) {
        case 1:
            genero = 'A';
            printf("\nVoce selecionou Aventura!");
            break;

        case 2:
            genero = 'C';
            printf("\nVoce selecionou Comedia!");
            break;

        case 3:
            genero = 'F';
            printf("\nVoce selecionou Ficcao cientifica!");
            break;

        case 4:
            genero = 'T';
            printf("\nVoce selecionou Terror!");
            break;

        default:
            printf("\nOpcao de filme invalida!");
            exit(1);
    }

    printf("\n\nEscolha seu horario:\n\n");
    printf("1. 14h = R$ 20,00\n");
    printf("2. 17h = R$ 24,00\n");
    printf("3. 20h = R$ 30,00\n");
    printf("4. 22h = R$ 32,00\n\n");
    printf("Digite um numero de 1 a 4: ");
    scanf("%d", &horario);

    switch (horario) {
        case 1:
            printf("\nVoce escolheu 14h!");
            preco_basico = 20.00;
            break;

        case 2:
            printf("\nVoce escolheu 17h!");
            preco_basico = 24.00;
            break;

        case 3:
            printf("\nVoce escolheu 20h!");
            preco_basico = 30.00;
            break;

        case 4:
            printf("\nVoce escolheu 22h!");
            preco_basico = 32.00;
            break;

        default:
            printf("\nHorario invalido!");
            exit(1);
    }

    printf("\n\nQue tipo de ingresso deseja comprar?\n\n");
    printf("1. Inteira\n");
    printf("2. Meia-entrada\n");
    printf("3. Ingresso promocional\n\n");
    printf("Digite um numero de 1 a 3: ");
    scanf("%d", &preco);

    switch (preco) {
        case 1:
            printf("\nVoce escolheu ingresso inteira!");
            perc_desconto_tipo = 0.0;
            break;

        case 2:
            printf("\nVoce escolheu meia-entrada!");
            perc_desconto_tipo = 0.50;
            break;

        case 3:
            if (horario == 3 || horario == 4) {
                printf("\nIngresso promocional nao permitido nas sessoes das 20h e 22h!\n");
                exit(1);
            }

            printf("\nVoce escolheu ingresso promocional!");
            perc_desconto_tipo = 0.30;
            break;

        default:
            printf("\nTipo de ingresso invalido!");
            exit(1);
    }

    printf("\n\nQuantos ingressos deseja comprar? ");
    scanf("%d", &quantidade);

    if (quantidade <= 0) {
        printf("\nQuantidade de ingressos invalida!");
        exit(1);
    }

    if (genero == 'T' && horario == 1) {
        perc_desconto_terror = 0.10;
    }

    valor_unitario = preco_basico *
        (1.0 - perc_desconto_tipo) *
        (1.0 - perc_desconto_terror);

    subtotal = valor_unitario * quantidade;

    if (quantidade > 5) {
        perc_desconto_qtd = 0.05;
        valor_desconto_qtd = subtotal * perc_desconto_qtd;
    }

    valor_total = subtotal - valor_desconto_qtd;

    printf("\n========== RESUMO DA COMPRA ==========\n");

    switch (filme) {
        case 1:
            printf("\nFilme escolhido: Aventura!");
            break;

        case 2:
            printf("\nFilme escolhido: Comedia!");
            break;

        case 3:
            printf("\nFilme escolhido: Ficcao cientifica!");
            break;

        case 4:
            printf("\nFilme escolhido: Terror!");
            break;
    }

    switch (horario) {
        case 1:
            printf("\nHorario: 14h!");
            break;

        case 2:
            printf("\nHorario: 17h!");
            break;

        case 3:
            printf("\nHorario: 20h!");
            break;

        case 4:
            printf("\nHorario: 22h!");
            break;
    }

    switch (preco) {
        case 1:
            printf("\nTipo de ingresso: Inteira!");
            break;

        case 2:
            printf("\nTipo de ingresso: Meia-entrada!");
            break;

        case 3:
            printf("\nTipo de ingresso: Promocional!");
            break;
    }

    printf("\nQuantidade: %d", quantidade);
    printf("\nPreco basico do ingresso: R$ %.2f", preco_basico);

    if (preco == 2) {
        printf("\nDesconto meia-entrada: 50%%");
    }
    else if (preco == 3) {
        printf("\nDesconto promocional: 30%%");
    }

    if (genero == 'T' && horario == 1) {
        printf("\nDesconto especial Terror (14h): 10%%");
    }

    printf("\nValor unitario com desconto: R$ %.2f", valor_unitario);
    printf("\nSubtotal: R$ %.2f", subtotal);

    if (quantidade > 5) {
        printf("\nDesconto por quantidade: 5%%");
        printf("\nValor do desconto por quantidade: R$ %.2f", valor_desconto_qtd);
    }

    printf("\nValor total: R$ %.2f\n", valor_total);

    return 0;
}


