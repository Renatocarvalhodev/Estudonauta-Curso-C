#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"Portuguese");

    char letra;

    printf("<<< EX008 - Alfabeto >>>\n\n");
    printf("Digite uma letra: ");
    letra = getchar();
    printf("Antes da letra %c temos a letra %c. Depois temos a letra %c.\n\n", letra, (letra-1), (letra+1));

    system("pause");
}

/*
void main() {
    setlocale(LC_ALL,"Portuguese");

    char letra, ant, suc;

    printf("<<< EX008 - Alfabeto >>>\n\n");
    printf("Digite uma letra: ");
    letra = getchar();
    ant = letra - 1;
    suc = letra + 1;
    printf("Antes da letra %c temos a letra %c. Depois temos a letra %c.\n\n", letra, ant, suc);

    system("pause");


}
*/
