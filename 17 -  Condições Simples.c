#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    float vel;
    printf("Digite a velocidade do autom�vel: ");
    scanf("%f%*c", &vel);

    if(vel>80){
        printf("Voc� foi multado!\n");
    }

    printf("Se beber, n�o dirija!");

    system("pause");

}
