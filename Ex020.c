#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    float km, valor_total;

    printf("<<< EX020 - Preço da Passagem >>>\n\n");
    printf("======== TABELA DE PREÇOS ========\n");
    printf("Viagem até 200 Km\tR$0.50/Km\n");
    printf("A partir de 200 Km\tR$0.35/Km\n");
    printf("----------------------------------\n");
    printf("Distância total da viagem, em Km: ");
    scanf("%f%*c", &km);
    if(km<=200){
        printf("Uma viagem de %.2f Km vai custar R$0,50/Km.\n", km);
        valor_total = km*0.5;
    } else {
        printf("Uma viagem de %.2f Km vai custar R$0,35/Km.\n", km);
        valor_total = km*0.35;
    }
    printf("Valor Total: R$%.2f.\n", valor_total);


    system("pause");

}
