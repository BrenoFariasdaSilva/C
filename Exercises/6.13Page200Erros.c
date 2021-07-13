/*

6.13 Ache o(s) erro(s) em cada uma das seguintes instruções:

a) Considere: char str[ 5 ];
scanf( “%s”, str ); // Usuário digita olá 

//o tamanho do array é maior do o numero de elementos + 1
//char str[ 4 ];

b) Considere: int a[ 3 ];
printf( “$d %d %d\n”, a[ 1 ], a[ 2 ], a[ 3 ] ); 

// o $ no lugar do %
// printf( “%d %d %d\n”, a[ 1 ], a[ 2 ], a[ 3 ] ); 

c) double f[ 3 ] = { 1.1, 10.01, 100.001, 1000.0001 }; 

//Mais valores do que espaços no array
//double f[ 4 ] = { 1.1, 10.01, 100.001, 1000.0001 };

d) Considere: double d[ 2 ][ 10 ];
d[ 1, 9 ] = 2.345; 

//Falta as chaves no valor que a posição recebe 
//d[ 1, 9 ] = {2.345};

*/

#include <stdio.h>

int main()
{
    char str[5];

    printf("Digite algo ");
    scanf( "%s", str ); 

    printf("\n%s", str);

    return 0;
}
