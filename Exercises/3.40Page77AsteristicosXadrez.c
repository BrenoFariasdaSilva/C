/*

3.40 Padrão de asteriscos em xadrez. Escreva um programa
que apresente o seguinte padrão de tabuleiro de
xadrez:
* * * * * * * *
* * * * * * * *
* * * * * * * *
* * * * * * * *
* * * * * * * *
* * * * * * * *
* * * * * * * *
* * * * * * * *
Seu programa deverá usar apenas três instruções de saída,
uma de cada das seguintes formas:
printf( "* " );
printf( " " );
printf( "\n" );

*/

#include <stdio.h>

int main()
{
    int coluna = 0, linhas = 0;

    while (coluna < 4)
    { 
        
        while (linhas < 8)
        {
            printf( "* " );
            ++linhas;
        }

        linhas = 0;
        printf( "\n" );
        
        while (linhas < 8)
        {
            printf( " *" );
            ++linhas; 
        }
        
        linhas = 0;
        printf( "\n" );

        ++coluna;
    }
    return 0;
}
