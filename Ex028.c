#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int n1, n2, res;
    char op;
    float res_div;

    printf("<<< EX028 - Super Calculadora v1.0 >>>\n\n");
    printf("VALOR 1 = ");
    scanf("%d%*c", &n1);
    printf("VALOR 2 = ");
    scanf("%d%*c", &n2);
    printf("=========================\n");
    printf("+\tAdi��o\n");
    printf("-\tSubtra��o\n");
    printf("*\tMultiplica��o\n");
    printf("/\tDivis�o\n");
    printf("=========================\n");
    printf("Digite sua op��o => ");
    scanf("%c%*c", &op);
    printf("----------------------------------------------------------\n");

    switch (op){
    case '+':
        res = n1 + n2;
        printf("O resultado de %d %c %d � igual a %d.\n", n1, op, n2, res);
        break;
    case '-':
        res = n1 - n2;
        printf("O resultado de %d %c %d � igual a %d.\n", n1, op, n2, res);
        break;
    case '*':
        res = n1 * n2;
        printf("O resultado de %d %c %d � igual a %d.\n", n1, op, n2, res);
        break;
    case '/':
        res_div = (float)n1/n2;
        printf("O resultado de %d %c %d � igual a %.2f.\n", n1, op, n2, res_div);
        break;
    default:
        printf("N�o foi poss�vel fazer a opera��o. Tente novamente.\n");
        break;
    }
    printf("----------------------------------------------------------\n");
    printf("VOLTE SEMPRE\n");

    system("pause");
}
