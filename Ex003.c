#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
    char nome[40];
    int idade;
    float peso;

    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX003 - Dados >>>\n\n");
    printf("Qual � o seu nome? ");
    gets(nome);
    printf("Quantos anos voc� tem? ");
    scanf("%d", &idade);
    printf("Qual � o seu peso? (Kg) ");
    scanf("%f", &peso);

    printf("\n--------<<< PROCESSANDO >>>--------\n");
    printf("Muito prazer, %s. Voc� tem %d anos e pesa %.2fKg, correto?\nFIM.\n", nome, idade, peso);

    system("pause");

}
