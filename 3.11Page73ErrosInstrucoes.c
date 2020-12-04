/*

3.11 Identifique e corrija os erros dos seguintes trechos e códigos:
[Nota: pode haver mais de um erro em cada um.]
a) if ( idade >= 65 );
printf( “Idade é maior ou igual a
65\n” );
else
printf( “Idade é menor que 65\n” );

b) int x = 1, total;
while ( x <= 10 ) {
total += x;
++x;
}

c) while ( x <= 100 )
total += x;
++x;

d) while ( y > 0 ) {
printf( “%d\n”, y );
++y;
}

RESPOSTA:

a) if ( idade >= 65 ) 
printf( “Idade é maior ou igual a
65\n” );
else
printf( “Idade é menor que 65\n” );

b)int x = 1, total=0; O total tem que começar com 0.
while ( x <= 10 ) 
{
total += x;
++x;
}

c) while ( x <= 100 )
    {
    total += x;
    ++x;
    }  Falta chaves na intrução composta.

d) while ( y > 0 ) 
    {
    printf( “%d\n”, y );
    --y;
    } Loop infinito.
*/


#include <stdio.h>

int main()
{
   int y=10, total;
    while ( y > 0 ) 
    {
    printf("%d \n", y);
    --y;
    }
    printf("O total é %d", total);
    return 0;
}