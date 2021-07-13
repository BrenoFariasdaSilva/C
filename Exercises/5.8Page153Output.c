/*

5.8 Mostre o valor de x após a execução de cada uma das
seguintes instruções:
a) x = fabs( 7.5 ); 
7.5
b) x = floor( 7.5 );
7
c) x = fabs( 0.0 );
0
d) x = ceil( 0.0 );
0
e) x = fabs( -6.4 );
6.4
f) x = ceil( -6.4 );
-6
g) x = ceil( -fabs( -8 + floor( -5.5 ) ) );
-14

*/

#include <stdio.h>

int main()
{
    float x;
    printf("%f", x = ceil( -fabs( -8 + floor( -5.5 ) ) ));
    return 0;
}
