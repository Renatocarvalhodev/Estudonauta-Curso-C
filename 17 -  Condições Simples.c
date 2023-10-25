#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    float vel;
    printf("Digite a velocidade do automóvel: ");
    scanf("%f%*c", &vel);

    if(vel>80){
        printf("Você foi multado!\n");
    }

    printf("Se beber, não dirija!");

    system("pause");

}
