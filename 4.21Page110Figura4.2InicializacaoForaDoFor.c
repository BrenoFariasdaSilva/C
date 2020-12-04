#include <stdio.h>

// função main inicia a execução do programa 
int main( void )
{
    int contador = 1; // declara o contador 

    /* inicialização, condição de repetição e incremento
    não todos incluídos no cabeçalho da estrutura for. */

    for ( ; contador <= 10; contador++ ) 
    {
        printf( "%d\n", contador );
    } // fim do for 

    return 0; // indica que o programa terminou com sucesso 
}