/*

3.24 Ache o número maior. O processo de achar o número
maior (ou seja, o máximo de um grupo de números)
é usado com frequência nas aplicações de computador.
Por exemplo, um programa que determina o vencedor
de uma disputa de vendas lerá o número de unidades
vendidas por vendedor. O vendedor que tiver vendido
mais unidades vence a disputa. Escreva um programa
em pseudocódigo e depois um programa que leia uma
série de 10 números, determine e imprima o maior dos
números. [Dica: seu programa deverá usar três variáveis
da seguinte forma]:
contador: Um contador para contar até 10 (ou seja,
registrar quantos números foram informados
e determinar quando os 10 números
foram processados)
número: O número da entrada atual no programa
maior: O maior número achado até o momento

*/

#include <stdio.h>

int main()
{
    int contador=1, numero, maior;

    printf("Insira um valor: \n");
    scanf("%d", &numero);

    maior =  numero;

    while( contador <= 9)
    {
        printf("Insira um valor: \n");
        scanf("%d", &numero);

        if (numero > maior)
            {
                maior = numero;
            }

        ++contador;
    }
    
    printf("O maior valor e: %d", maior);

    return 0;
}
