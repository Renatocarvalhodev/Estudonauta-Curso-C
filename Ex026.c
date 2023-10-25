#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    char est[2];

    printf("<<< EX026 - Qual é o seu Estado? >>>\n\n");
    printf("Em que estado do Brasil você nasceu? ");
    gets(est);
    if(strcmp(est, "RJ")==0){
        printf("Nascendo em %s você é FLUMINENSE\n", est);
    } else if (strcmp(est, "SP")==0){
        printf("Nascendo em %s você é PAULISTA\n", est);
    } else if (strcmp(est, "MG")==0){
        printf("Nascendo em %s você é MINEIRO\n", est);
    } else if (strcmp(est, "RN")==0){
        printf("Nascendo em %s você é POTIGUAR\n", est);
    } else {
        printf("Nascendo em %s você é natural do seu estado, mas ainda não sei com te chamar!\n", est);
    }

    system("pause");
}
