#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int n1, n2;

    printf("<<< EX024 - Ordem em dois números >>>\n\n");
    printf("Me diga dois números e eu colocarei\nos dois em ordem crescente.\n\n");
    printf("Primeiro número: ");
    scanf("%d%*c", &n1);
    printf("Segundo número: ");
    scanf("%d%*c", &n2);
    if(n1>n2){
        printf("Os números em ordem são %d e %d.\n\n", n2, n1);
    } else if (n1<n2){
        printf("Os números em ordem são %d e %d.\n\n", n1, n2);
    } else {
        printf("Os dois números são IGUAIS.\n\n");
    }

    system("pause");
}
