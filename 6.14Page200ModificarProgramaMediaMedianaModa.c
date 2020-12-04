/*

6.14 Modificações nos programas de media, mediana
e moda. Modifique o programa da Figura 6.16 de modo
que a funcao mode seja capaz de lidar com um empate
para o valor de moda. Modifique tambem a funcao median
para que os dois elementos do meio de um array
tenham a media calculada caso haja um numero par de
elementos.

*/

#include <stdio.h>
#define SIZE 99

void mean( const int answer[] );
void median( int answer[] );
void mode( int freq[], const int answer[] ) ;
void bubbleSort( int a[] );
void printArray( const int a[] );

int main(void)
{
    int frequency[ 10 ] = { 0 };
    int response[ SIZE ] =  { 6, 7, 8, 9, 8, 7, 8, 9, 8, 9, 7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
    6, 7, 8, 9, 3, 9, 8, 7, 8, 7, 7, 8, 9, 8, 9, 8, 9, 7, 8, 9, 6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
    7, 8, 9, 8, 9, 8, 9, 7, 5, 3, 5, 6, 7, 2, 5, 3, 9, 4, 6, 4, 7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
    7, 4, 4, 2, 5, 3, 8, 7, 5, 6, 4, 5, 6, 1, 6, 5, 7, 8, 7 };
    mean( response );
    median( response );
    mode( frequency, response );

    return 0;
}

void mean( const int answer[] )
{
    int j, total = 0;

    printf( "%s\n%s\n%s\n", "********", " Media", "********" );

    for ( j = 0; j < SIZE; j++ ) 
    {
        total += answer[ j ];
    }      

    printf( "A media e o valor medio dos itens de dados.\n"
    "A media e igual ao total de todos\n"
    "os itens de dados divididos pelo numero\n"
    "de itens de dados ( %d ). O valor medio para esta\n"
    "execucao e: %d / %d = %.4f\n",
    SIZE, total, SIZE, ( double ) total / SIZE );   
}

void median( int answer[] )
{

    printf( "%s\n%s\n%s\n%s",
    "********", " Mediana", "********",
    "O array de respostas, nao ordenado, e" );

    printArray( answer ); /* exibe array nao ordenado */

    bubbleSort( answer ); /* ordena array */

    if(SIZE % 2 == 0)
    {
        printf( "\n\nA mediana e o elemento %d do\n"
        "array ordenado de %d elementos.\n"
        "Para essa execucao, a mediana e %d\n\n",
        (((SIZE / 2) + (SIZE / 2) + 1) / 2), SIZE, answer[ SIZE / 2 ] );
    }

    printf( "\n\nA mediana e o elemento %d do\n"
    "array ordenado de %d elementos.\n"
    "Para essa execucao, a mediana e %d\n\n",
    SIZE / 2, SIZE, answer[ SIZE / 2 ] );
}

void mode( int freq[], const int answer[] )
{
    int rating, j, h, largest, modeValue;

    printf( "\n%s\n%s\n%s\n",
    "********", " Moda", "********" );

    for ( rating = 1; rating <= 9; rating++ ) 
    {
        freq[ rating ] = 0;
    }

    for ( j = 0; j < SIZE; j++ ) 
    {
        ++freq[ answer[ j ] ];
    }

    printf( "%s%11s%19s\n\n%54s\n%54s\n\n",
    "Resposta", "Frequencia", "Histograma",
    "1 1 2 2", "5 0 5 0 5" );

    for ( rating = 1; rating <= 9; rating++ ) 
    {
        printf( "%8d%11d ", rating, freq[ rating ] );

        if ( freq[ rating ] > largest ) 
        {
            largest = freq[ rating ];
            modeValue = rating;
        }

        for ( h = 1; h <= freq[ rating ]; h++ )
        {
            printf( "*" );
        }  

        printf( "\n" ); /* sendo nova linha de saída */  
    }

    printf( "A moda e o valor mais frequente.\n"
    "Para essa execucao, a moda e %d, que ocorreu"
    " %d vezes.\n", modeValue, largest );
}

void bubbleSort( int a[] )
{
    int pass, j, hold;

    for ( pass = 1; pass < SIZE; pass++ )
    {
        for ( j = 0; j < SIZE - 1; j++ )
        {
            if ( a[ j ] > a[ j + 1 ] )  
            {
                hold = a[ j ];
                a[ j ] = a[ j + 1 ];
                a[ j + 1 ] = hold;
            }  
        }
    }
}

void printArray( const int a[] )
{
    int j;

    for ( j = 0; j < SIZE; j++ )
    {
        if ( j % 20 == 0 )
        {
            printf( "\n" );
        }

        printf( "%d", a[j] );
    }
}