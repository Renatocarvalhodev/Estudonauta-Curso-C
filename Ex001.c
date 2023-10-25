#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void  main() {
    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX001 - Listagem >>>\n");
    printf("\n Listagem de Alunos");
    printf("\n Nome\t\tNota");
    printf("\n----------------------");
    printf("\nAna Beatriz \t8.5");
    printf("\nBianca Martins \t5.5");
    printf("\nCláudio Sá \t5.5");
    printf("\nGiovana Silva \t7.5");
    printf("\n----------------------");
    printf("\n\n");
    system("pause");

}
