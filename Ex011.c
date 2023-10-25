#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int num;

    printf("<<< EX011 - Par ou Ímpar >>>\n\n");
    printf("Digite um número qualquer: ");
    fflush(stdin);
    scanf("%d", &num);
    printf("O número que você digitou é %s\n", (num%2==0)?"PAR":"ÍMPAR");

    system("pause");

}
