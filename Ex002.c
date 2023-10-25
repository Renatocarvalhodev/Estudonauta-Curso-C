#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX002 - Especiais >>>\n\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf(" \\a \t= \tBeep\n");
    printf(" \\n \t= \tNova linha\n");
    printf(" \\t \t= \tTabulação\n");
    printf(" \\\\ \t= \tBarra\n");
    printf(" %%%% \t= \tPorcentagem\n");
    printf(" \\\? \t= \tInterrogação\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    system("pause");
}
