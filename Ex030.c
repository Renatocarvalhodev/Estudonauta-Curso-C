#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    float preco, pag;
    int op;

    printf("<<< EX030 - Pre�o por �poca >>>\n");
    printf("Digite o pre�o de um produto R$");
    scanf("%f%*c", &preco);
    printf("\n\t  ESCOLHA UM PER�ODO\n");
    printf("\t======================\n");
    printf("\t1\tCarnaval [+10]\n");
    printf("\t2\tF�rias Escolares [+20]\n");
    printf("\t3\tDia das Crian�as [+5]\n");
    printf("\t4\tBlack Friday [-30]\n");
    printf("\t5\tNatal [-5]\n");
    printf("\t======================\n");
    printf("\tDigite sua op��o => ");
    scanf("%d%*c", &op);
    printf("----------------------------------------------------\n");

    switch (op){
    case 1:
        pag = preco * 1.1;
        printf("Na �poca do CARNAVAL, o pre�o do produto vai para R$%.2f.\n", pag);
        break;
    case 2:
        pag = preco * 1.2;
        printf("Na �poca das F�RIAS ESCOLARES, o pre�o do produto vai para R$%.2f.\n", pag);
        break;
    case 3:
        pag = preco * 1.05;
        printf("Na �poca do DIA DAS CRIAN�AS, o pre�o do produto vai para R$%.2f.\n", pag);
        break;
    case 4:
        pag = preco * 0.7;
        printf("Na �poca da BLACK FRIDAY, o pre�o do produto vai para R$%.2f.\n", pag);
        break;
    case 5:
        pag = preco * 0.95;
        printf("Na �poca do NATAL, o pre�o do produto vai para R$%.2f.\n", pag);
        break;
    default:
        printf("Em �pocas assim, matenha o pre�o do produto em R$%.2f\n", preco);
        break;

    }
    printf("----------------------------------------------------\n");
    printf("VOLTE SEMPRE\n\n");


    system("pause");
}
