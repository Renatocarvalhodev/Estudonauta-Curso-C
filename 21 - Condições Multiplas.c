#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int n;
    printf("Digite um n�mero: ");
    scanf("%i%*c", &n);

    switch (n){ // A estrutura switch s� funciona para dados do tipo int ou char
    case 1:
        printf("Um");
        break;
    case 2:
        printf("Dois");
        break;
    case 3:
        printf("Tr�s");
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
