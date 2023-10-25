#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
    char nome[40];
    int idade;
    float peso;

    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX003 - Dados >>>\n\n");
    printf("Qual é o seu nome? ");
    gets(nome);
    printf("Quantos anos você tem? ");
    scanf("%d", &idade);
    printf("Qual é o seu peso? (Kg) ");
    scanf("%f", &peso);

    printf("\n--------<<< PROCESSANDO >>>--------\n");
    printf("Muito prazer, %s. Você tem %d anos e pesa %.2fKg, correto?\nFIM.\n", nome, idade, peso);

    system("pause");

}
