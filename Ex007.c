#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"Portuguese");

    int num, dobro;
    float ter;
    printf("<<<  EX007 - Dobro e Ter�a Parte  >>>\n\n");
    printf("Digite um n�mero: ");
    scanf("%d", &num);
    dobro = num * 2;
    ter = (float)num / 3;
    printf("Analisando o n�mero %d, seu dobro � %d e sua ter�a parte � %.2f.\n\n", num, dobro, ter);

    system("pause");
}

/*
void main() {
    setlocale(LC_ALL,"Portuguese");

    int num;
    printf("<<<  EX007 - Dobro e Ter�a Parte  >>>\n\n");
    printf("Digite um n�mero: ");
    scanf("%d", &num);
    printf("Analisando o n�mero %d, seu dobro � %d e sua ter�a parte � %.2f.\n\n", num, (num*2), ((float)num/3));

    system("pause");
}

