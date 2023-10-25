#include <stdio.h>

void main(){
    int x = 5;
    int y = 3 + x++;
    /*
    Nessa operação, esta sendo usado o pós-incremento. Logo o incremento de uma unidade na variável x, será
    feito após a realização de todo o calculo. Portanto, primeiro será feito o calculo de 3 + x que resultará
    no valor 8, e em seguida será incrementado mais uma unidade na variável x, passando assim, a x = 6.
    Portanto, o resultado é y = 8 e x = 6;


    No caso de um pré-incremento ++x, primeiro seria feito o incremento de uma unidade a variável x, e depois
    a realização do calculo. Assim x = 6 e y = 9.
    */
    printf("Os valores sao %i e %i", x, y);

}
/*
Incremento: n = n + 1 => n++
Decremento: n = n - 1 => n--
*/

/*
Pré - Incremento
-----------------------------------------------
++n primeiro será somado um a variável n,
e depois o resultado será atribuído a variável.
*/

/*
Pós - Incremento
-----------------------------------------------
n++ primeiro o valor de n será atribuido a variável
e pois será somado um ao valor de n.
*/


