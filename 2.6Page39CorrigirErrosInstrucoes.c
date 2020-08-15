//Identifique e corrija os erros em cada uma das seguintes instruções:
/*
2.6 Identifique e corrija os erros em cada uma das seguintes
instruções:

a) printf( “O valor é %d\n”, &número );

b) scanf( “%d%d”, &número1, número2 );

c) if ( c < 7 );
    {
    printf( “C é menor que 7\n” );
    }
d) if ( c => 7 ) 
    {
    printf( “C é igual ou menor que7\n” );
    }
*/

/*
Coreção:
a)
    &número -> número
b)
    número2 -> &número2
c)
    ( c < 7 ); -> ( c < 7 )
d)
    ( c => 7 )  -> ( c >= 7 ) 
*/ 