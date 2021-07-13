/*

4.3 Escreva uma instrução ou um conjunto de instruções
para realizar cada uma das seguintes tarefas:
a) Somar os inteiros ímpares entre 1 e 99 usando uma
estrutura for. Considere que as variáveis inteiras
soma e contador tenham sido declaradas.

#include <stdio.h>

int main()
{
    int soma = 0, contador;

    for (contador = 1; contador <= 99; contador += 2)
    {
        soma += contador;

        if (contador == 99)
        {
            printf("%d", soma);
        }
    }
    return 0;
}

b) Imprima o valor 333,546372 em uma largura de
campo de 15 caracteres com precisões de 1, 2, 3,
4 e 5. Alinhe a saída

#include <stdio.h>

int main()
{
    printf( "%-15.1f\n", 333.546372 ); // 333.5
    printf( "%-15.2f\n", 333.546372 ); // 333.55
    printf( "%-15.3f\n", 333.546372 ); // 333.546
    printf( "%-15.4f\n", 333.546372 ); // 333.5464
    printf( "%-15.5f\n", 333.546372 ); // 333.54637
    return 0;
}    

c) Calcule o valor de 2.5 elevado à potência 3 usando
a função pow. Imprima o resultado com uma precisão
de 2 em uma largura de campo de 10 posições.
Qual é o valor impresso?

#include <stdio.h> <math.h>

int main()
{
    float valor = 2.5, potencia = 3, resultado;
    resultado = pow (valor, potencia);
    printf("%10.2f", resultado); // 15.63
    return 0;
}

d) Imprima os inteiros de 1 a 20 usando um loop while
e a variável contadora x. Considere que a variável x
tenha sido declarada, mas não inicializada. Imprima
somente cinco inteiros por linha. [Dica: use o
cálculo x % 5. Quando o resultado for 0, imprima
um caractere de nova linha, senão imprima um caractere
de tabulação.]

#include <stdio.h>

int main()
{
    int contador = 1;

    while (contador <= 20)
    {
        printf("%d", contador);

        if (contador % 5 == 0)
        {
            printf("\n");
        }

        else 
        {
            printf("\t");
        }

        contador++;
    }

    return 0;
}

e) Repita o Exercício 4.3 (d) usando uma estrutura for.

#include <stdio.h>

int main()
{
    int contador;

    for (contador = 1; contador <= 20; contador++)
    {
        printf("%d", contador);

        if (contador % 5 == 0)
        {
            printf("\n");
        }

        else 
        {
            printf("\t");
        }
    }
    return 0;
}


*/

#include <stdio.h>

int main()
{
    int contador;

    for (contador = 1; contador <= 20; contador++)
    {
        printf("%d", contador);

        if (contador % 5 == 0)
        {
            printf("\n");
        }

        else 
        {
            printf("\t");
        }
    }
    return 0;
}
