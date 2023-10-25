#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int nasc, idade;

    time_t t;
    struct tm *data;
    time(&t);
    data = localtime(&t);
    int ano = data->tm_year + 1900;

    printf("<<< EX025 - Serviço Militar v2.0 >>>\n\n");
    printf("Atualmente estamos no ano de %d.\n", ano);
    printf("Em que ano você nasceu? ");
    scanf("%d%*c", &nasc);
    idade = ano - nasc;
    printf("-------------------------------------------------------------------\n");
    printf("Sua idade atual é %d anos.\n", idade);
    if(idade>18){
        printf("Seu alistamento foi em %d. Já se passaram %d anos.\n", nasc+18, ano-(nasc+18));
    } else if (idade<18){
        printf("Seu alistamento será em %d. Ainda faltam %d anos.\n", nasc+18, 18-idade);
    } else {
        printf("Você completa 18 anos exatamente em %d. Vá se alistar!\n", ano);
    }
    printf("-------------------------------------------------------------------\n");

    system("pause");
}
