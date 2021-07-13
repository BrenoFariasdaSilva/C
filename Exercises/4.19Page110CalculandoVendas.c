/*

4.19 Calculando vendas. Um varejista on-line vende cinco
produtos diferentes cujos preços de revenda aparecem
na tabela a seguir:
Número do produto Preço de revenda
1 R$ 2,98
2 R$ 4,50
3 R$ 9,98
4 R$ 4,49
5 R$ 6,87
Escreva um programa que leia uma série de pares de números
da seguinte forma:
a) Número do produto.
b) Quantidade vendida durante um dia.
Seu programa deverá usar uma estrutura switch para
ajudar a determinar o preço de revenda para cada produto.
O programa deverá calcular e exibir o valor de revenda
total de todos os produtos vendidos na semana anterior.

*/

#include <stdio.h>

int main()
{
    float total;
    int item, quantidade;

    printf("Insira o numero do item: \n");
    scanf("%d", &item);

    printf("Insira a quantidade: \n");
    scanf("%d", &quantidade);

    switch (item)
    {
        case 1:
        {
           total = 2.98 * quantidade; 
           printf("O preco de revenda e: %.2f", total);
        }
        break;

        case 2:
        {
           total = 4.50 * quantidade; 
           printf("O preco de revenda e: %.2f", total);
        }
        break;

        case '3':
        {
           total = 9.98 * quantidade;
           printf("O preco de revenda e: %.2f", total);
        }
        break;

        case '4':
        {
           total = 4.49 * quantidade;
           printf("O preco de revenda e: %.2f", total); 
        }
        break;

        case '5':
        {
           total = 6.87 * quantidade;
           printf("O preco de revenda e: %.2f", total); 
        }
        break;
    
        default:
        {
            printf("Valor incorreto! \n");
        }
        break;
    }

    return 0;
}
