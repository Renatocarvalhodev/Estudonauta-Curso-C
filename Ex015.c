#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    float n1, n2, m;

    printf("<<< EX015 - Bons alunos merecem parabéns >>>\n\n");
    printf("Digite a sua primeira nota: ");
    scanf("%f%*c", &n1);
    printf("Digite a sua segunda nota: ");
    scanf("%f%*c", &n2);

    m = (n1+n2)/2;
    printf("------------------------------------\n");

    if(m>=7.0){
        printf("MEUS PARABÉNS!");
    }

    printf("A sua média final foi %.2f\n", m);
    printf("------------------------------------\n");

    system("pause");
}
