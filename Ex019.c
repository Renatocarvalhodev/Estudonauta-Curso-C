#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int ano;

    printf("<<< EX019 - Ano Bissexto >>>\n\n");
    printf("Digite um ano qualquer: ");
    scanf("%d%*c", &ano);
    printf("O ano %d ", ano);
    if(ano%4==0 && ano%100!=0 || ano%400==0){
        printf("� BISSEXTO.\n");
    } else {
        printf("N�O � BISSEXTO.\n");
    }

    system("pause");

}
