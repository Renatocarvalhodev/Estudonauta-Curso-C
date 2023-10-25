#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    time_t t; //time_t é o "tipo primitivo disponibilizado pela biblioteca time.h
    time(&t); //Para ativar a data e hora do sistema diretamente na variável t, utiliza-se a função time().
    struct tm *data; //Esse comando define que data vai apontar para estrutura chamada tm.
    data = localtime(&t); //Para usar a função localtime() é necessário loca-lá em um estrutura.
    int d = data->tm_mday;
    int m = data->tm_mon + 1; //Nessa biblioteca o mês de Janeiro é considerado o mês 0, logo é necessário somar +1.
    int a = data->tm_year + 1900; //Nessa biblioteca o ano zero é 1900.

    printf("Estamos no dia %d, no mês %d e no ano %d\n", d, m, a);

    system("pause");
}


/*
    tm_day - Dia do mês [1-31]

    tm_mon - Mês [0-11]

    tm_year - Ano [a partir de 1900]

    tm_wday - Dia da semana [0-6]

    tm_yday - Dia do ano [0-365]

    tm_hour - Hora [0-23]

    tm_min - Minutos [0-59]

    tm_sec - Segundos [0-59]

*/
