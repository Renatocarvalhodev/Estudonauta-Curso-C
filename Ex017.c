#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int nasc, idade;
    time_t t;

    time(&t);
    struct tm *data;
    data = localtime(&t);
    int ano = data->tm_year + 1900;

    printf("<<< EX017 - Fila de Banco >>>\n\n");
    printf("Em que ano voc� nasceu? ");
    scanf("%d%*c", &nasc);

    idade = ano - nasc;

    printf("----------------------------------------\n");
    printf("Voc� tem %d anos, certo?\nSeja bem-vindo(a) ao Banco Estudonauta!\n", idade);
    if(idade>=65){
        printf("=== ATEN��O! DIRIJA-SE PARA A FILA PREFERENCIAL ===\n");
    }
    printf("----------------------------------------\n");

    system("pause");
}
