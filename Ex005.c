#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void main(){
    int sorteado, palpite;
    setlocale(LC_ALL,"Portuguese");
    printf("<<< EX005 - Ser� que voc� acerta? >>>\n");
    printf("\nVou pensar em um n�mero entre 1 e 5. Tente advinhar!\n");
    srand(time(NULL));
    sorteado = rand() % 5 + 1; //Gera um n�mero entre 1 e 5
    printf("Qual � o seu palpite? ");
    scanf("%d", &palpite);
    printf("Eu pensei no n�mero %d e voc� pensou no %d.", sorteado, palpite);

}
