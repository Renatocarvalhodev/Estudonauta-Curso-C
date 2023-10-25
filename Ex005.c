#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void main(){
    int sorteado, palpite;
    setlocale(LC_ALL,"Portuguese");
    printf("<<< EX005 - Será que você acerta? >>>\n");
    printf("\nVou pensar em um número entre 1 e 5. Tente advinhar!\n");
    srand(time(NULL));
    sorteado = rand() % 5 + 1; //Gera um número entre 1 e 5
    printf("Qual é o seu palpite? ");
    scanf("%d", &palpite);
    printf("Eu pensei no número %d e você pensou no %d.", sorteado, palpite);

}
