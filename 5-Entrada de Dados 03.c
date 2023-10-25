#include <stdio.h>
#include <stdlib.h>
void main(){
    char nome[30];
    char ender[40];
    printf("Digite seu nome: ");
    gets(nome);
    printf("Seu endereco: ");
    gets(ender);
    printf("Voce digitou \"%s\" que mora em \"%s\"", nome, ender);
    system("pause");
}
