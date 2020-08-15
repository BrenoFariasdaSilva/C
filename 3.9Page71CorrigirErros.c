/*

3.9 Identifique e corrija os erros em cada um dos itens:
a) while ( c <= 5 ) {
produto *= c;
++c;
b) scanf( “%.4f”, &valor );
c) if ( sexo == 1 )
printf( “Mulher\n” );
se não;
printf( “Homem\n” );

RESPOSTA:

a) while ( c <= 5 )
{
    produto *= c;
    ++c;
} 
A instrução composta do while não estava fechada.

b) scanf( “d”, &valor );
Não pode haver precisão em uma instrução scanf.

c)if ( sexo == 1 )
printf( “Mulher\n” );
se não;
printf( “Homem\n” );
Não pode haver ponto e vírgula após um else.
*/

#include <stdio.h>

int main()
{
    int sexo = 1;

    if ( sexo == 1 )
    printf( "Mulher \n");

    else
    printf("Homem \n");

    return 0;
}