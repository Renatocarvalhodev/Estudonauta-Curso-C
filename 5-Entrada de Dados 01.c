#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void main() {
    setlocale(LC_ALL,"Portuguese");
    char r;
    char s;
    printf("Digite s� uma letra: ");
    fflush(stdin);
    scanf("%c", &r);
    printf("Digite outra letra: ");
    fflush(stdin);
    scanf("%c", &s);
    printf("Voc� digitou as letras \"%c\" e \"%c\"\n", r,s);
    system("pause");
}
