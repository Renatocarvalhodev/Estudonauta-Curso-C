#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int num;

    printf("<<< EX011 - Par ou �mpar >>>\n\n");
    printf("Digite um n�mero qualquer: ");
    fflush(stdin);
    scanf("%d", &num);
    printf("O n�mero que voc� digitou � %s\n", (num%2==0)?"PAR":"�MPAR");

    system("pause");

}
