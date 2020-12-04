/*

5.44 Depois de determinar o que o programa do Exercício
5.43 faz, modifique-o para que funcione devidamente
depois de removida a restrição que estabelece que o segundo
argumento não pode ser negativo.

*/

#include <stdio.h>

int mystery( int x, int y );

int main(void)
{
    int x, y, resultadomystery;

    printf( "Digite dois inteiros: " );
    scanf( "%d%d", &x, &y );

    printf( "O resultado e: %d\n", mystery(x, y ));

    return 0;
}


int mystery( int x, int y )
{
    if ( y == 1 ) 
    {
        return x;
    }

    else
    {
        return x + mystery( x, y - 1 );
    }
    
}