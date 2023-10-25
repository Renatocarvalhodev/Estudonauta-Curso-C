#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int n;
    printf("Digite um número: ");
    scanf("%i%*c", &n);

    switch (n){ // A estrutura switch só funciona para dados do tipo int ou char
    case 1:
        printf("Um");
        break;
    case 2:
        printf("Dois");
        break;
    case 3:
        printf("Três");
        break;
    case 4:
        printf("Quatro");
        break;
    default:
        printf("Erro!");
        break;
    }
    printf("\nACABOU!");
}
