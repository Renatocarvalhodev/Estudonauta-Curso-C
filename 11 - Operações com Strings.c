#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    char sit[10];
    float media = 8.5;
    strcpy(sit, (media>=7)?"Aprovado":"Reprovado");
    printf("A situacao do aluno e %s\n", sit);
}

/*
Fun��es da biblioteca string.h
strcpy()    atribui strings a uma vari�vel
strlen()    retorna o numero de caracteres de uma string
strcmp()    compara duas strings e retorna o n�mero de caracteres diferentes
strcat()    concatena duas strings
strupr()    transforma todas as letras em Maiusculas
strlwr()    transforma todas as letras em Minusculas
*/
