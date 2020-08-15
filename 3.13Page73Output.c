/*

3.13 O que o programa a seguir imprime?

#include <stdio.h>

int main( void )
{
    int x = 1, total = 0, y;

    while ( x <= 10 ) 
    {
    y = x * x;
    printf( “%d\n”, y );
    total += y;
    ++x;
    } 

    printf(“Total é %d\n”, total);
    return 0;
} 

Output: 385
*/

#include <stdio.h>

int main()
{
    int x = 1, total = 0, y;

    while ( x <= 10 ) 
    {
    y = x * x;
    printf("%d \n", y );
    total += y;
    ++x;
    } 

    printf("O total é: %d \n", total);
    return 0;
}
