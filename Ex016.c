#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    float compra;

    printf("<<< EX016 - Consumidor ganha desconto >>>\n\n");
    printf("Qual foi o valor total das compras? R$");
    scanf("%f%*c", &compra);

    printf("----------------------------------------\n");
    printf("Você comprou R$%.2f na nossa loja.\n", compra);

   if(compra>500){
        float desconto, pagamento;
        printf("========== ATENÇÃO ==========\n");
        desconto = compra * 10/100;
        pagamento = compra - desconto;
        printf("Por fazer mais de R$500 em compras, você vai receber R$%.2f de desconto.\n", desconto);
        printf("O valor a ser pago é R$%.2f!", pagamento);
    }

    printf("Volte Sempre!\n");
    printf("----------------------------------------\n");

    system("pause");

}
