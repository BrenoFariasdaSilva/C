/*

3.35 Testador de palíndromo. Um palíndromo é um número,
ou uma frase textual, que pode ser lido da mesma
forma da esquerda para a direita e vice-versa. Por
exemplo, cada um dos seguintes inteiros de cinco dígitos
é um palíndromo: 12321, 55555, 45554 e 11611. Escreva
um programa que leia um inteiro de cinco dígitos e
determine se ele é ou não um palíndromo. 
[Dica: use os operadores de divisão e módulo para 
separar o número em seus dígitos individuais.]

*/

#include <stdio.h>

int main()
{
    int valor, a1, a2, a3, a4, a5;
     
    printf("Insira um valor de 5 digitos: \n");
    scanf("%d", &valor);

    a1 = valor / 10000;

    a2 = valor / 1000 - (a1 * 10);

    a3 = valor / 100 - ((a1 * 100) + (a2 * 10));

    a4 = valor / 10 - ((a1 * 1000) + (a2 * 100) + (a3 * 10));
    
    a5 = valor - ((a1 * 10000) + (a2 * 1000) + (a3 * 100) + (a4 * 10));

    if ( a1 == a5)
    {
        if (a2 == a4)
        {
            printf("E um palindromo! \n");
        }
    }
    else
    {
        printf("Nao e um palindromo! \n");
    }
    


    return 0;
}
