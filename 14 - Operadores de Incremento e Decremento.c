#include <stdio.h>

void main(){
    int x = 5;
    int y = 3 + x++;
    /*
    Nessa opera��o, esta sendo usado o p�s-incremento. Logo o incremento de uma unidade na vari�vel x, ser�
    feito ap�s a realiza��o de todo o calculo. Portanto, primeiro ser� feito o calculo de 3 + x que resultar�
    no valor 8, e em seguida ser� incrementado mais uma unidade na vari�vel x, passando assim, a x = 6.
    Portanto, o resultado � y = 8 e x = 6;


    No caso de um pr�-incremento ++x, primeiro seria feito o incremento de uma unidade a vari�vel x, e depois
    a realiza��o do calculo. Assim x = 6 e y = 9.
    */
    printf("Os valores sao %i e %i", x, y);

}
/*
Incremento: n = n + 1 => n++
Decremento: n = n - 1 => n--
*/

/*
Pr� - Incremento
-----------------------------------------------
++n primeiro ser� somado um a vari�vel n,
e depois o resultado ser� atribu�do a vari�vel.
*/

/*
P�s - Incremento
-----------------------------------------------
n++ primeiro o valor de n ser� atribuido a vari�vel
e pois ser� somado um ao valor de n.
*/


