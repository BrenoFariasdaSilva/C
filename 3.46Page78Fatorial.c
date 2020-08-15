/*

3.46 Fatorial. O fatorial de um inteiro não negativo n é escrito
como n! (pronuncia-se ‘n fatorial’) e é definido da
seguinte forma:
n! = n · (n - 1) · (n - 2) · … · 1 (para valores de n
maiores ou iguais a 1)
e
n! = 1 (para n = 0).
Por exemplo, 5! = 5 · 4 · 3 · 2 · 1, que é 120.

a) Escreva um programa que leia um inteiro não negativo
e calcule e imprima seu fatorial.

#include <stdio.h>

int main()
{
    int number, fatorial=1, counter = 0;

    printf("Insira um valor: \n");
    scanf("%d", &number);

    while (counter < number)
    {
        
        fatorial = fatorial * (number - counter) ;

        counter++;
    }

    printf("O valor do fatorial e: %d\n", fatorial);

    return 0;
}

b) Escreva um programa que calcule o valor da constante
matemática e usando a fórmula:
e=1+ + + +
1
1
1
2
1
! ! 3!
..


c) Escreva um programa que calcule o valor de ex
usando a fórmula
e
x x x x
! ! !
=1+ + + +..

*/

#include <stdio.h>

int main()
{
    int counter=0, n=1;
    float e,ee=1;

    while(1)
    {
        if (counter==0)
        {
            e=1;
        }
        
        while (n<=counter)
        {
            ee*=1/n;
        }

        n=1;
        ee=1;
        counter++;
        e+=ee;   
    }

    return 0;
}
