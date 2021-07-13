/*

4.5 Ache o erro em cada um dos seguintes trechos de códigos.
(Nota: pode haver mais de um erro.)

a) 
For ( x = 100, x >= 1, x++ ) // Usa-se ; ao invés da vírgula no for.
printf( "%d\n", x ); // Poderia haver chaves para a instrução.

b) 
O código a seguir deveria imprimir se determinado inteiro é ímpar ou par:

switch ( valor % 2 ) 
{
    case 0:
    printf( “Inteiro par\n” );
    //Deveria haver um comando break.

    case 1:
    printf( “Inteiro ímpar\n” );
    //Deveria haver um comando break.
}
c)
O código a seguir deveria ler um inteiro e um caractere
e imprimi-los. Suponha que o usuário digite
100 A.

// Falta um comando printf para pedir um número ao usuário.
scanf( "%d", &intVal );  //Falta ele guardar o character char. scanf( "%d %c", &intVal, &charVal); 
charVal = getchar(); //getchar está vazio, logo ele não guarda nada em char.
printf( "Inteiro: %d\n Caractere: %c \n", intVal, charVal );

d) 
for ( x = .000001; x == .0001; x += .000001) 
{
    printf( “%.7f\n”, x );
}

e)
O código a seguir deveria exibir os inteiros ímpares
de 999 a 1:
for ( x = 999; x >= 1; x += 2 )  //O x está sendo incremento, ao invés de decrementado;
{
    printf( “%d\n”, x );
}

f) 
O código a seguir deveria exibir os inteiros pares de 2 a 100:

contador = 2;
Do // Todas as palavras reservadas são escritas com letra minúscula.
{
    if ( contador % 2 == 0 ) 
    {
        printf( “%d\n”, contador );
    }

    contador += 2;
} 
While ( contador < 100 ); // Todas as palavras reservadas são escritas com letra minúscula.

g)
O código a seguir deveria somar os inteiros de 100 a 150 
(supondo que total seja inicializado com 0):

for ( x = 100; x <= 150; x++ ); //  Não pode haver ; após um for. 
{
    total += x;
}

//  Falta um printf com o total.
*/

#include <stdio.h>

int main()
{
    int x = 100, total = 0;

    for ( x = 100; x < 150; x++ )
    {
        total += x;
    }

    printf("O total e: %d \n", total);
    return 0;
}
