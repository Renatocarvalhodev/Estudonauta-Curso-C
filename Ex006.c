#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int num, ant, suc;

    printf("<<<  EX007 - Antecessor e Sucessor  >>>\n\n");
    printf("Digite um n�mero: ");
    scanf("%d", &num);
    ant = num - 1;
    suc = num + 1;
    printf("Analisando o n�mero %d, seu antecessor � %d e seu sucessor � %d.\n\n", num, ant, suc);

    system("pause");
}

/*
void main(){
    setlocale(LC_ALL,"Portuguese");
    int num;
    printf("<<<  EX007 - Antecessor e Sucessor  >>>\n\n");
    printf("Digite um n�mero: ");
    scanf("%d", &num);
    printf("Analisando o n�mero %d, seu antecessor � %d e seu sucessor � %d.\n\n", num, (num-1) (num+1));
    system("pause");
*/

