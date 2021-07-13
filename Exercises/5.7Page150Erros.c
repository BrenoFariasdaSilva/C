/*

5.7 Encontre o erro em cada um destes segmentos de programa,
e explique como ele pode ser corrigido (ver também
o Exercício 5.46):
a)

int g( void )
{
printf( “Dentro da função g\n” );
int h( void )
{
printf( “Dentro da função h\n” );
}
}

//Função h foi definida dentro da função g. Mover pra fora.

int h( void )

int g( void )
{
printf( “Dentro da função g\n” );
{
printf( “Dentro da função h\n” );
}
}

b)

int sum( int x, int y )
{
int result;
result = x + y;
}

//Não um return na função sum que deveria retornar a soma de x + y.
return = x + y; no lugar do result = x + y;

int sum( int x, int y )
{
int result;
return = x + y;
}

c)

int sum( int n )
{
if ( n == 0 ) {
return 0;
else {
n + sum( n - 1 );
}
}

//O else não tem um retorno.

int sum( int n )
{
if ( n == 0 ) {
return 0;
else {
return n + sum( n – 1 );
}
}



d)
void f( float a );
{
    float a;
printf( “%f”, a );
}

//Não pode haver ; depois da lista de parêmetros
a declaração float dentro da função

void f( float a )
{
    printf( “%f”, a );
}

e)
void product( void )
{
int a, b, c, result;
printf( “Digite três inteiros: “ )
scanf( “%d%d%d”, &a, &b, &c );
result = a * b * c;
printf( “Resultado é %d”, result );
return result;
}

//A função não deveria retornar um valor.

void product( void )
{
int a, b, c, result;
printf( “Digite três inteiros: “ )
scanf( “%d%d%d”, &a, &b, &c );
result = a * b * c;
printf( “Resultado é %d”, result );
}

*/

#include <stdio.h>

int main()
{
    
    return 0;
}
