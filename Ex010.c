#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    char produto[30];
    float preco, desconto, precoFinal;

    printf("<<<  EX010 - Pre�o do Produto  >>>\n\n");
    printf("Produto: ");
    fflush(stdin);
    gets(produto);
    printf("Pre�o de %s: R$", produto);
    fflush(stdin);
    scanf("%f", &preco);
    printf("Desconto: (%%) ");
    fflush(stdin);
    scanf("%f", &desconto);
    precoFinal = preco - (preco * desconto/100);
    printf("O produto %s custava R$%.2f.\nPor�m, com %.2f%% de desconto, passa a custar R$%.2f.\n\n", produto, preco, desconto, precoFinal);

    system("pause");

}
