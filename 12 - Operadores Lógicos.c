#include <stdio.h>

void main(){
 int a = 5, b = 4, c = 2;
 printf("%s", a>b || a<c && !c!=4?"Verdadeiro":"Falso");
}
/* Ordem de precedÍncia
1- !
2- &&
3- ||
*/
