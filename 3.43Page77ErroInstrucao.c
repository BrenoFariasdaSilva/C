/*

3.43 O que há de errado com a instrução a seguir? Reescreva-
-a para obter o resultado que o programador provavelmente
tentava obter.
printf( “%d”, ++( x + y ) );

RESPOSTA:

#include <stdio.h>

int main()
{
    int x=1, y=2;
    printf( "%d", ++x + y );
    return 0;
}

*/

#include <stdio.h>

int main()
{
    int x=1, y=2;
    printf( "%d", ++x + y );
    return 0;
}
