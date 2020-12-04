/*

3.36 Imprimindo o equivalente decimal de um número
binário. Leia um inteiro contendo apenas 0s e 1s
(ou seja, um inteiro ‘binário’) e imprima seu equivalente
decimal. [Dica: use os operadores de módulo e divisão
para apanhar os dígitos do número ‘binário’ um de cada
vez, da direita para a esquerda. Assim como no sistema
numérico decimal, em que o dígito mais à direita tem
um valor posicional de 1, e o próximo dígito à esquerda
tem um valor posicional de 10, depois de 100, depois de
1.000, e assim por diante, no sistema binário, o dígito
mais à direita tem um valor posicional de 1, o próximo
dígito à esquerda tem um valor posicional de 2, depois de
4, depois de 8 e assim por diante. Assim, o número 234
pode ser interpretado como 4 * 1 + 3 * 10 + 2 * 100.
O equivalente decimal do binário 1101 é 1 * 1 + 0 * 2
+ 1 * 4 + 1 * 8 ou 1 + 0 + 4 + 8 ou 13.]

*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n,nn,d=0,c=0;

    printf("Escreva um valor em binário:\n");
    scanf("%d",&n);

    while (n!=0)
    {
        nn=n%10;
        d+=nn*pow(2,c);
        n/=10;
        c++;
    }
    printf("Valor em decimal: %d",d);

    return 0;
}
