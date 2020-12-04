/*

4.16 Problema de impressão de triângulo. Escreva um
programa que imprima os padrões a seguir separadamente,
um abaixo do outro. Use loops for para gerar os
padrões. Todos os asteriscos (*) devem ser impressos por
uma única instrução printf na forma printf(“*”);
(isso faz com que os asteriscos sejam impressos lado a
lado). [Dica: os dois últimos padrões exigem que cada
linha comece com um número de espaços apropriado.]

a)

#include <stdio.h>

int main()
{
    for (int altura = 1; altura <= 10; altura++) 
    {
        for (int largura = 1; largura <= altura; largura++)
        {
            printf("*");
        }
        printf("\n");

    }
    return 0;
}

b)

#include <stdio.h>

int main()
{
    for (int altura = 1; altura <= 10; altura++) 
    {
        for (int largura = 10; largura >= altura; largura--)
        {
            printf("*");
        }
        printf("\n");

    }
    return 0;
}

c)

#include <stdio.h>

int main()
{
    for (int altura = 1; altura <= 10; altura++) 
    {
        for (int largura = 10; largura >= altura; largura--)
        {
            printf("*");
        }

        printf("\n");

        for (int espacos = 0; espacos < altura; espacos++ )
        {
            printf(" ");
        }

    }   
    return 0;
}

d)

#include <stdio.h>

int main()
{
    for (int altura = 1; altura <= 10; altura++) 
    {
        
        for (int espacos = 10; espacos > altura; espacos-- )
        {
            printf(" ");
        }

        for (int largura = 1; largura <= altura; largura++)
        {
            printf("*");
        }

        printf("\n");

    }   
    return 0;
}
*/

#include <stdio.h>

int main()
{
    for (int altura = 1; altura <= 10; altura++) 
    {
        for (int largura = 1; largura <= altura; largura++)
        {
            printf("*");
        }
        printf("\n");

    }
    return 0;
}