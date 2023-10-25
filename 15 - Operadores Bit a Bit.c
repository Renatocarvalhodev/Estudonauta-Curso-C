#include <stdio.h>

void main(){
    int n = 25 & 12;
    printf("O resultado foi %d", n);
}

/*
Operadores Bit a Bit

& - Conjunção Bit a Bit
---------------------------------------
p   q   p&q
1   1    1
1   0    0
0   1    0
0   0    0

| - Disjunção Bit a Bit
---------------------------------------
p   q   p&q
1   1    1
1   0    1
0   1    1
0   0    0

^ - Disjunção exclusiva Bit a Bit
---------------------------------------
p   q   p^q
1   1    0
1   0    1
0   1    1
0   0    0

*/
