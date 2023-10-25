#include <stdio.h>

void main(){
    int n1, n2;
    printf("Primeiro valor: ");
    fflush(stdin);
    scanf("%i", &n1);
    printf("Segundo valor: ");
    fflush(stdin);
    scanf("%i", &n2);
    if(n1>n2){
      printf("O maior valor e o primeiro: %i", n1)  ;
    } else if(n1<n2){
        printf("O maior valor e o segundo: %i.", n2);
    } else if(n1==n2) {
        printf("Os dois valores sao iguais!");
    }
}
