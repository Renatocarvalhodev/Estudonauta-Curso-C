#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int n;
    float c;

    printf("<<< EX021 - Inverso ou oposto >>>\n\n");
    printf("Digite um número (positivo ou negativo): ");
    scanf("%d%*c", &n);

    if(n>0){
        c = 1/(float)n; // tambem poderia ser c = (float)1/n ou c = 1.0/n
        printf("O inverso de %d é igual a %.4f\n", n, c);
    } else {
        c = (-1)*n;
        printf("O oposto de %d é igual a %.0f\n", n,c);
    }

    system("pause");
}
