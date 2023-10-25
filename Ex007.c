#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"Portuguese");

    int num, dobro;
    float ter;
    printf("<<<  EX007 - Dobro e Terça Parte  >>>\n\n");
    printf("Digite um número: ");
    scanf("%d", &num);
    dobro = num * 2;
    ter = (float)num / 3;
    printf("Analisando o número %d, seu dobro é %d e sua terça parte é %.2f.\n\n", num, dobro, ter);

    system("pause");
}

/*
void main() {
    setlocale(LC_ALL,"Portuguese");

    int num;
    printf("<<<  EX007 - Dobro e Terça Parte  >>>\n\n");
    printf("Digite um número: ");
    scanf("%d", &num);
    printf("Analisando o número %d, seu dobro é %d e sua terça parte é %.2f.\n\n", num, (num*2), ((float)num/3));

    system("pause");
}

