#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int n;

    printf("<<< EX023 - Positivo ou Negativo >>>\n\n");
    printf("Me diga um n�mero e eu te direi se\nele � POSITIVO, NEGATIVI ou NULO.\n\n");
    printf("Digite um n�mero: ");
    scanf("%d%*c", &n);
    printf("O valor %d digitado � ", n);
    if(n>0){
        printf("POSITIVO.\n\n");
    } else if(n<0) {
        printf("NEGATIVO.\n\n");
    } else {
        printf("NULO.\n\n");
    }

    system("pause");
}
