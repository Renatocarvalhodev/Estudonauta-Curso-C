#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int n1, n2, n3;

    printf("<<< EX027 - Tr�s valores em ordem >>>\n");
    printf("Me diga tr�s n�meros e eu colocarei\neles em ordem pra voc�.\n\n");
    printf("Primeiro n�mero: ");
    scanf("%d%*c", &n1);
    printf("Segundo n�mero: ");
    scanf("%d%*c", &n2);
    printf("Terceiro n�meros: ");
    scanf("%d%*c", &n3);
    printf("--------------------------------------\n");
    if(n1>n2 && n2>n3){
        printf("MAIOR: %d\n",n1);
        printf("INTERMEDI�RIO: %d\n",n2);
        printf("MENOR: %d\n",n3);
    } else if (n1>n3 && n3>n2){
        printf("MAIOR: %d\n",n1);
        printf("INTERMEDI�RIO: %d\n",n3);
        printf("MENOR: %d\n",n2);
    } else if (n2>n1 && n1>n3){
        printf("MAIOR: %d\n",n2);
        printf("INTERMEDI�RIO: %d\n",n1);
        printf("MENOR: %d\n",n3);
    } else if (n2>n3 && n3>n1){
        printf("MAIOR: %d\n",n2);
        printf("INTERMEDI�RIO: %d\n",n3);
        printf("MENOR: %d\n",n1);
    } else if (n3>n1 && n1>n2){
        printf("MAIOR: %d\n",n3);
        printf("INTERMEDI�RIO: %d\n",n1);
        printf("MENOR: %d\n",n2);
    } else if (n3>n2 && n2>n1){
        printf("MAIOR: %d\n",n3);
        printf("INTERMEDI�RIO: %d\n",n2);
        printf("MENOR: %d\n",n1);
    }

    system("pause");
}
