#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    char nome[30];
    float nota1, nota2, media;

    printf("<<<  EX009 - Média do Aluno  >>>\n\n");
    printf("Nome do aluno: ");
    fflush(stdin);
    gets(nome);
    printf("Nota 1: ");
    fflush(stdin);
    scanf("%f", &nota1);
    fflush(stdin);
    printf("Nota 2: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2)/2;
    printf("O aluno %s tirou notas %.1f e %.1f.\nA média final foi %.1f\n\n", nome, nota1, nota2, media);

    system("pause");
}
