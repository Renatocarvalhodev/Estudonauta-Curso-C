#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int n1, n2;

    printf("<<< EX024 - Ordem em dois n�meros >>>\n\n");
    printf("Me diga dois n�meros e eu colocarei\nos dois em ordem crescente.\n\n");
    printf("Primeiro n�mero: ");
    scanf("%d%*c", &n1);
    printf("Segundo n�mero: ");
    scanf("%d%*c", &n2);
    if(n1>n2){
        printf("Os n�meros em ordem s�o %d e %d.\n\n", n2, n1);
    } else if (n1<n2){
        printf("Os n�meros em ordem s�o %d e %d.\n\n", n1, n2);
    } else {
        printf("Os dois n�meros s�o IGUAIS.\n\n");
    }

    system("pause");
}
