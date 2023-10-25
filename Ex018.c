#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int ano, nasc, idade;
    time_t t;

    struct tm *data;
    time(&t);
    data = localtime(&t);
    ano = data->tm_year + 1900;

    printf("<<< EX018 - Servi�o Militar v1.0 >>>\n\n");
    printf("Atualmente estamos no ano de %d\n", ano);
    printf("Em que ano voc� nasceu? ");
    scanf("%d%*c", &nasc);

    idade = ano -nasc;
    printf("--------------------------------------------\n");
    printf("Sua idade atual � %d anos.\n", idade);

    if(idade>=18){
        printf("J� fez 18 anos. Espero sinceramente que voc� j� tenha se alistado.\n");
    } else {
        printf("Voc� ainda n�o tem 18 anos. N�o pode se alistar.\n");
    }

    system("pause");
}
