#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    float peso_terra, peso_planeta;
    int op;
    char planeta[15];

    printf("<<< EX029 - Seu peso nos Planetas v1.0 >>>\n");
    printf("  Seu peso na Terra (Kg) = ");
    scanf("%f%*c", &peso_terra);
    printf("\n\t  ESCOLHA UM PLANETA\n");
    printf("\t======================\n");
    printf("\t1\tMercúrio\n");
    printf("\t2\tVênus\n");
    printf("\t3\tMarte\n");
    printf("\t4\tJúpiter\n");
    printf("\t5\tSaturno\n");
    printf("\t6\tUrano\n");
    printf("\t======================\n");
    printf("\tDigite sua opção => ");
    scanf("%d%*c", &op);
    switch (op){
    case 1:
        strcpy(planeta, "MERCÚRIO");
        peso_planeta = peso_terra * 0.37;
        break;
    case 2:
        strcpy(planeta, "VÊNUS");
        peso_planeta = peso_terra * 0.88;
        break;
    case 3:
        strcpy(planeta, "MARTE");
        peso_planeta = peso_terra * 0.38;
        break;
    case 4:
        strcpy(planeta, "JÚPITER");
        peso_planeta = peso_terra * 2.64;
        break;
    case 5:
        strcpy(planeta, "SATURNO");
        peso_planeta = peso_terra * 1.15;
        break;
    case 6:
        strcpy(planeta, "URANO");
        peso_planeta = peso_terra * 1.17;
        break;
    default:
        printf("Seu peso não pode ser calculado para outros planetas. Tente novamente.");
        break;

    }
    printf("\n--------------------------------------------------------\n");
    printf("No planeta %s, seu peso seria %.2f Kg\n", planeta, peso_planeta);
    printf("--------------------------------------------------------\n");
    printf("VOLTE SEMPRE\n\n");

    system("pause");
}
