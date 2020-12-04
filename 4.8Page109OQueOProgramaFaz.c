/*

4.8 O que o programa a seguir faz?

#include <stdio.h>

// função main inicia a execução do programa 
int main( void )
{
    int x;
    int y;
    int i;
    int j;

    //solicita a entrada do usuário
    printf( "Digite dois inteiros no intervalo 1-20: " );
    scanf( "%d%d", &x, &y );    // lê valores para x e y 

    for ( i = 1; i <= y; i++ )  // conta de 1 a y 
    { 

        for ( j = 1; j <= x; j++ )  // conta de 1 a x 
        { 
            printf( "@" );  // exibe @ 
        } // fim do for interno 

        printf( "\n" ); // inicia nova linha 
    }   // fim do for externo 

return 0;   // indica que o programa foi concluído com sucesso 

}   // fim da função main 

*/

#include <stdio.h>

// função main inicia a execução do programa 
int main( void )
{
    int x, y, i, j;

    //solicita a entrada do usuário
    printf( "Digite dois inteiros no intervalo 1-20: " );
    scanf( "%d%d", &x, &y );    // lê valores para x e y 

    for ( i = 1; i <= y; i++ )  // conta de 1 a y 
    { 

        for ( j = 1; j <= x; j++ )  // conta de 1 a x 
        { 
            printf( "@" );  // exibe @ 
        } // fim do for interno 

        printf( "\n" ); // inicia nova linha 
    }   // fim do for externo 

return 0;   // indica que o programa foi concluído com sucesso 

}   // fim da função main 