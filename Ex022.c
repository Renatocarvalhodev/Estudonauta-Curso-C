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

    printf("<<< EX022 - D� pra ver o filme? >>>\n\n");
    printf("=============== CINEMA ESTUDONAUTA ==============\n");
    printf("HOR�RIO DO FILME: %dh - PRE�O DO INGRESSO: R$%.2f\n", inicio, preco);
    printf("-------------------------------------------------\n");
    printf("Hora atual: %d.\n\n", hora);
    printf("Quanto dinheiro voc� tem? R$");
    scanf("%f%*c", &din);

    if(din>=preco && hora<inicio){
        printf("Voc� consegue comprar o ingresso!\n");
    } else {
        printf("Infelizmente n�o � poss�vel comprar o ingresso!\n");
    }

    system("pause");
}
