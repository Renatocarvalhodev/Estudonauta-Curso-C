#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    float preco, pag;
    int op;

    printf("<<< EX030 - Preço por Época >>>\n");
    printf("Digite o preço de um produto R$");
    scanf("%f%*c", &preco);
    printf("\n\t  ESCOLHA UM PERÍODO\n");
    printf("\t======================\n");
    printf("\t1\tCarnaval [+10]\n");
    printf("\t2\tFérias Escolares [+20]\n");
    printf("\t3\tDia das Crianças [+5]\n");
    printf("\t4\tBlack Friday [-30]\n");
    printf("\t5\tNatal [-5]\n");
    printf("\t======================\n");
    printf("\tDigite sua opção => ");
    scanf("%d%*c", &op);
    printf("----------------------------------------------------\n");

    switch (op){
    case 1:
        pag = preco * 1.1;
        printf("Na época do CARNAVAL, o preço do produto vai para R$%.2f.\n", pag);
        break;
    case 2:
        pag = preco * 1.2;
        printf("Na época das FÉRIAS ESCOLARES, o preço do produto vai para R$%.2f.\n", pag);
        break;
    case 3:
        pag = preco * 1.05;
        printf("Na época do DIA DAS CRIANÇAS, o preço do produto vai para R$%.2f.\n", pag);
        break;
    case 4:
        pag = preco * 0.7;
        printf("Na época da BLACK FRIDAY, o preço do produto vai para R$%.2f.\n", pag);
        break;
    case 5:
        pag = preco * 0.95;
        printf("Na época do NATAL, o preço do produto vai para R$%.2f.\n", pag);
        break;
    default:
        printf("Em épocas assim, matenha o preço do produto em R$%.2f\n", preco);
        break;

    }
    printf("----------------------------------------------------\n");
    printf("VOLTE SEMPRE\n\n");


    system("pause");
}
