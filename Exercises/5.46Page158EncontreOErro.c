/*

5.46 Encontre o erro em cada um dos segmentos de programa
a seguir e explique como corrigi-los:
a) 
double cube( float );  //Falta a variável number após o float

cube( float number ) //Falta o double na frente 

{
    return number * number * number;
}


b) register auto int x = 7; //Há mais de uma classe. Auto não é reconhecido.


c) int randomNumber = srand(); //srand não retorna valor. É uma função void

d) 
double y = 123.45678;
int x;
x = y;
printf( “%f\n”, (double) x ); //Não é a variável x, mas sim a variável y no printf.

e) 
double square( double number ) //do
{
double number;  //Redeclaração de uma variável.
return number * number;
}

f) 
int sum( int n )
{
    if ( n == 0 ) {
    return 0;
}
else {
return n + sum( n ); //Loop infinito na recursão.
}
}

*/

#include <stdio.h>

int sum( int n );

int main()
{
    int n = 3, result;

    result = square(n);

    printf("%f", result);

    return 0;
}

int sum( int n )
{
    if ( n == 0 ) 
    {
        return 0;
    }
    else 
    {
    return n + sum( n );
    }
}
