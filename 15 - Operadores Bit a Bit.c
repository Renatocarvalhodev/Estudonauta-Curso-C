#include <stdio.h>

void main(){
    int n = 25 & 12;
    printf("O resultado foi %d", n);
}

/*
Operadores Bit a Bit

& - Conjun��o Bit a Bit
---------------------------------------
p   q   p&q
1   1    1
1   0    0
0   1    0
0   0    0

| - Disjun��o Bit a Bit
---------------------------------------
p   q   p&q
1   1    1
1   0    1
0   1    1
0   0    0

^ - Disjun��o exclusiva Bit a Bit
---------------------------------------
p   q   p^q
1   1    0
1   0    1
0   1    1
0   0    0

*/
