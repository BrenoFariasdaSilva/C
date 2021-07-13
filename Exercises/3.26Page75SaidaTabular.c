/*

3.26 Saída tabular. Escreva um programa que use o looping
para produzir a seguinte tabela de valores:
A A+2 A+4 A+6
3 5 7 9
6 8 10 12
9 11 13 15
12 14 16 18
15 17 19 21

*/

#include <stdio.h>

int main()
{
    int a = 0;
    
    printf("A \t A+2 \t A+4 \t A+6 \n");

    while ( a <= 15 )
    {
        printf("%d \t %d \t %d \t %d \n", a, a+2, a+4, a+6);
        a = a + 3;
    }
    
    return 0;
}
