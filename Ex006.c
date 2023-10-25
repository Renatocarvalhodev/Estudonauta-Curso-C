#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int num, ant, suc;

    printf("<<<  EX007 - Antecessor e Sucessor  >>>\n\n");
    printf("Digite um número: ");
    scanf("%d", &num);
    ant = num - 1;
    suc = num + 1;
    printf("Analisando o número %d, seu antecessor é %d e seu sucessor é %d.\n\n", num, ant, suc);

    system("pause");
}

/*
void main(){
    setlocale(LC_ALL,"Portuguese");
    int num;
    printf("<<<  EX007 - Antecessor e Sucessor  >>>\n\n");
    printf("Digite um número: ");
    scanf("%d", &num);
    printf("Analisando o número %d, seu antecessor é %d e seu sucessor é %d.\n\n", num, (num-1) (num+1));
    system("pause");
*/

