/*

4.29 Leis de De Morgan. Neste capítulo, discutimos os
operadores lógicos &&, || e !. Às vezes, as Leis de De
Morgan podem tornar mais conveniente a indicação
de uma expressão lógica. Essas leis afirmam que a expressão
!(condition1 && condition2) é logicamente
equivalente à expressão (!condition1 || !condition2).
Além disso, a expressão !(condition1 || condition2)
é logicamente equivalente à expressão (!condition1
&& !condition2). Use as Leis de De Morgan
para escrever expressões equivalentes para cada um dos
seguintes itens, e depois escreva um programa para mostrar
que a expressão original e a nova expressão em cada
caso são equivalentes.
a) !( x < 5 ) && !( y >= 7 )
b) !( a == b ) || !( g != 5 )
c) !( ( x <= 8 ) && ( y > 4 ) )
d) !( ( i > 4 ) || ( j <= 6 ) )


*/

#include <stdio.h>

int main()
{
    int a = 1, b = 2, c = 3, d = 4, e = 5, f = 6, g = 7;

    printf("%d \t", !(a < 5) && !(b >= 7));
    printf("%d \n",  (a < 5) && (b >= 7));

    printf("%d \t", !( a == b ) || !(c != 5));
    printf("%d \n",  ( a == b ) || (c == 5));

    printf("%d \t", !( ( d <= 8 ) && ( e > 4 ) ));
    printf("%d \n",  ( ( d <= 8 ) && ( e > 4 ) ));

    printf("%d \t", !( ( f > 4 ) || ( g <= 6 ) ));
    printf("%d \n",  ( ( f > 4 ) || ( g <= 6 ) ));

    return 0;
}
