/*

4.36 O que o seguinte segmento de programa faz?
1 for ( i = 1; i <= 5; i++ ) {
2 for ( j = 1; j <= 3; j++ ) {
3 for ( k = 1; k <= 4; k++ )
4 printf( “*” );
5 printf( “\n” );
6 }
7 printf( “\n” );
8 }

RESPOSTA:

****
****
****

****
****
****

****
****
****

****
****
****

****
****
****

*/

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++ ) 
    {
        for (int j = 1; j <= 3; j++ ) 
        {
            for (int k = 1; k <= 4; k++ )
                printf( "*" );
            printf( "\n" );
        }
        printf( "\n" );
    }
    return 0;
}
