/*

4.4 Encontre o erro em cada um dos segmentos de código a
seguir, e explique como corrigi-lo.

a) 
x = 1;
while ( x <= 10 );  // Não pode haver ; após a condição de um while.
x++;  //Falta chave da instrução do while, ou então apagar a chave de fechamento.
}

Correção: 
x = 1;
while ( x <= 10 )
{
    x++;       
}

b) 
for ( y = .1; y != 1.0; y += .1 ) //Loop infinito.
printf( “%f\n”, y );

c) 
switch ( n ) 
{
    case 1:
    printf( “O número é 1\n” );
    //Falta um break; nesta linha

    case 2:
    printf( “O número é 2\n” );
    break;

    default:
    printf( “O número não é nem 1 nem 2\n” );
    break;  //Como o comando default é o último, não é necessário um comando break.

}
d) 
O código a seguir deveria imprimir os valores de 1 a 10.

n = 1;
while ( n < 10 ) //Falta o símbolo de igual após o símbolo de menor.
printf( "%d", n++ );

*/

#include <stdio.h>

int main()
{
    float y;
    for ( y = .1; y != 1.0; y += .1 )
    printf( "%f\n", y );
    return 0;
}
