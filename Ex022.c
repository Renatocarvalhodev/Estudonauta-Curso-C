#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    float preco = 20, din;
    int inicio = 9;

    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int hora = data->tm_hour;

    printf("<<< EX022 - Dá pra ver o filme? >>>\n\n");
    printf("=============== CINEMA ESTUDONAUTA ==============\n");
    printf("HORÁRIO DO FILME: %dh - PREÇO DO INGRESSO: R$%.2f\n", inicio, preco);
    printf("-------------------------------------------------\n");
    printf("Hora atual: %d.\n\n", hora);
    printf("Quanto dinheiro você tem? R$");
    scanf("%f%*c", &din);

    if(din>=preco && hora<inicio){
        printf("Você consegue comprar o ingresso!\n");
    } else {
        printf("Infelizmente não é possível comprar o ingresso!\n");
    }

    system("pause");
}
