#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    char est[2];

    printf("<<< EX026 - Qual � o seu Estado? >>>\n\n");
    printf("Em que estado do Brasil voc� nasceu? ");
    gets(est);
    if(strcmp(est, "RJ")==0){
        printf("Nascendo em %s voc� � FLUMINENSE\n", est);
    } else if (strcmp(est, "SP")==0){
        printf("Nascendo em %s voc� � PAULISTA\n", est);
    } else if (strcmp(est, "MG")==0){
        printf("Nascendo em %s voc� � MINEIRO\n", est);
    } else if (strcmp(est, "RN")==0){
        printf("Nascendo em %s voc� � POTIGUAR\n", est);
    } else {
        printf("Nascendo em %s voc� � natural do seu estado, mas ainda n�o sei com te chamar!\n", est);
    }

    system("pause");
}
