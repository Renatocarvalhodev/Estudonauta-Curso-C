#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"");
    char nome1[50], nome2[50], nome3[50];
    char sexo1, sexo2, sexo3;
    float nota1, nota2, nota3;

    printf("<<<  EX004 - Listagem  >>>\n");
    printf("\nCadastrando a primeira pessoa:\n");
    printf("------------------------------\n");
    fflush(stdin);
    printf("NOME: ");
    gets(nome1);
    printf("SEXO [M/F]: ");
    fflush(stdin);
    sexo1 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota1);

    printf("\nCadastrando a segunda pessoa:\n");
    printf("------------------------------\n");
    fflush(stdin);
    printf("NOME: ");
    gets(nome2);
    printf("SEXO [M/F]: ");
    fflush(stdin);
    sexo2 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota2);

    printf("\nCadastrando a terceira pessoa:\n");
    printf("------------------------------\n");
    fflush(stdin);
    printf("NOME: ");
    gets(nome3);
    printf("SEXO [M/F]: ");
    fflush(stdin);
    sexo3 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota3);

    printf("\nListagem Completa\n");
    printf("-----------------------------------------------\n");
    printf("%-30s %-6s %-6s\n","NOME","SEXO","NOTA");
    printf("%-30s %3c %7.1f\n", nome1, sexo1, nota1);
    printf("%-30s %3c %7.1f\n", nome2, sexo2, nota2);
    printf("%-30s %3c %7.1f\n", nome3, sexo3, nota3);
    printf("-----------------------------------------------\n\n");

    system("pause");

}
