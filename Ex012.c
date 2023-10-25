#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"Portuguese");

    float n1, n2;

    printf("<<< EX012 - Situação do Aluno >>>\n\n");
    printf("Primeira nota: ");
    fflush(stdin);
    scanf("%f", &n1);
    printf("Segunda nota: ");
    fflush(stdin);
    scanf("%f", &n2);
    printf("A média do aluno foi %.1f\n", (n1 + n2)/2);
    printf("A sua situação é %s\n", ((n1 + n2)/2)>=7?"APROVADO":"REPROVADO");

    system("pause");
}
