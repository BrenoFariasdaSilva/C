/*

6.18 O que o programa a seguir faz?

#include <stdio.h>
#define SIZE 10

// protótipo de função 
void someFunction( const int b[], int startIndex, int size );

// função main inicia a execução do programa

int main( void )
{
    int a[ SIZE ] = { 8, 3, 1, 2, 6, 0, 9, 7, 4, 5 }; // inicializa a 

    printf( "Resposta é:\n" );
    someFunction( a, 0, SIZE );
    printf( "\n" );

    return 0; // indica conclusão bem-sucedida

} // fim do main 

// O que essa função faz? 
void someFunction( const int b[], int startIndex, int size )
{
    if ( startIndex < size )
    {
        someFunction( b, startIndex + 1, size);
        printf( "%d ", b[ startIndex ] );
    } // fim do if 

} // fim da função someFunction 


RESPOSTA:
Inverte a ordem dos valores do array.
*/

#include <stdio.h>
#define SIZE 10

// protótipo de função 
void someFunction( const int b[], int startIndex, int size );

// função main inicia a execução do programa
int main( void )
{
    int a[ SIZE ] = { 8, 3, 1, 2, 6, 0, 9, 7, 4, 5 }; // inicializa a 

    printf( "Resposta é:\n" );
    someFunction( a, 0, SIZE );
    printf( "\n" );
    
    return 0; // indica conclusão bem-sucedida

} // fim do main 

// O que essa função faz? 
void someFunction( const int b[], int startIndex, int size )
{
    if ( startIndex < size )
    {
        someFunction( b, startIndex + 1, size);
        printf( "%d ", b[ startIndex ] );
    } // fim do if 

} // fim da função someFunction 
