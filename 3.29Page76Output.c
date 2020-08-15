/*

3.29 O que o programa a seguir exibe?
#include <stdio.h>

int main( void )
{
    int contador = 1; 

    while ( contador <= 10 )
    { 

        printf( “%s\n”, contador % 2 ? “****” :“+++++” );
        contador++;

    } 

    return 0;

} 

RESPOSTA:

**** 
+++++ 
****
+++++
****
+++++
****
+++++
****
+++++


*/

#include <stdio.h>

int main()
{
    int contador = 1; 

    while ( contador <= 10 )
    { 

        printf("%s \n", contador % 2 ? "****" : "+++++");
        contador++;

    } 

    return 0;
}
