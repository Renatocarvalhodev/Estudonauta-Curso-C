#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("O %s tem %i anos de idade\n", "Renato", 39);
    printf("O seu peso atual � de %6.2fKg\n", 55.3);
    printf("O seu sexo � %c\n", 'M');
    system("pause");
}
