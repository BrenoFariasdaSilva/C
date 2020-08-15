// Erros em instruções.
/*
Identifique e corrija os erros cometidos em cada uma
das instruções. (Nota: pode haver mais de um erro por
instrução.)
a) scanf( “d”, valor );

b) printf( “O produto de %d e %d é %d”\n, x, y );

c) primeiroNúmero + segundoNúmero = SomaDosNúmeros

d) if ( número => maior )
        maior == número;

e)// /* Programa para determinar o maior dentre três inteiros /*

f) Scanf( “%d”, umInteiro );

g) printf( “Módulo de %d dividido por %d é\n”, x, y, x % y );

h) if ( x = y );
        printf( %d é igual a %d\n”, x, y );
i) print( “A soma é %d\n,” x + y );

j) Printf( “O valor que você digitou é: %d\n, &valor );

*/

/*
Correções:
a) valor -> &valor

b) ( “O produto de %d e %d é %d”\n, x, y ); -> printf("O produto de %d e %d é %d", x, y, x * y);

c) primeiroNúmero + segundoNúmero = SomaDosNúmeros -> SomaDosNúmeros = primeiroNúmero + segundoNúmero;

d) if ( número => maior )   ->  if ( número >= maior )
        maior == número;    ->      {
                                        maior == número;
                                    }

e) */ Programa para determinar o maior dentre três inteiros /* -> /* Programa para determinar o maior dentre três inteiros */

f) umInteiro -> &umInteiro

g) printf( “Módulo de %d dividido por %d é\n”, x, y, x % y ); -> printf( “Módulo de %d dividido por %d é %d \n”, x, y, x % y );

h) if ( x = y ); -> if ( x = y )
    printf( %d é igual a %d\n”, x, y ); -> printf( "%d é igual a %d\n”, x, y );

i) print( “A soma é %d\n,” x + y ); -> print( “A soma é %d\n", x + y );

j) Printf( “O valor que você digitou é: %d\n, &valor ); -> printf( “O valor que você digitou é: %d \n", valor );
*/