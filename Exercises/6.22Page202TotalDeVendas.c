/*

6.22 Total de vendas. Use um array de subscrito duplo
para resolver o problema a seguir. Uma empresa tem
quatro vendedores (1 a 4) que vendem cinco produtos
diferentes (1 a 5). Uma vez por dia, cada vendedor
passa uma nota para cada tipo diferente de produto
vendido. Cada nota contém:
a) O número do vendedor.
b) O número do produto.
c) O valor em reais desse produto vendido nesse dia.
Assim, cada vendedor passa entre 0 e 5 notas de vendas
por dia. Considere que as informações de todas as
notas passadas no mês anterior estejam disponíveis.
Escreva um programa que leia todas as informações
das vendas do mês passado e resuma o total de vendas
por vendedor por produto. Todos os totais devem
ser armazenados em um array com subscrito duplo
sales. Depois de processar todas as informações do
mês passado, imprima os resultados em formato tabular,
com cada uma das colunas representando um
vendedor em particular, e cada uma das linhas representando
um produto em particular. Calcule o total
de cada linha para obter o total de vendas de cada
produto no mês passado; cruze os resultados obtidos
com os de cada coluna para obter o total de vendas
por vendedor no mês passado. Seu relatório tabular
deverá incluir os totais à direita das linhas e no final
das colunas.

*/

#include <stdio.h>

void totalsales (const int sales[][5]);

int main()
{  
    int sales[4][5], product, price, vendor, tempvendor;

    for (int vendor = 0; vendor < 4; vendor++)
    {
        for (int product = 0; product < 5; product++)
        {
            sales[vendor][product] = 0;
        }
    }

    while (vendor != -1)
    {
        printf("Os numeros de funcinario variam de 1 a 4.\n");

        printf("Os numeros dos produtos variam de 1 a 5.\n");

        printf("Digite o seu numero de funcionario: (Digite -1 para sair!)\n");
        scanf("%d", &tempvendor);

        if (tempvendor == -1)
        {
            printf("\n\n");
            break;
        }

        else 
        {
            vendor = tempvendor;
        }

        printf("Digite o numero do produto vendido: \n");
        scanf("%d", &product);

        printf("Digite o preco do produto vendido: \n\n");
        scanf("%d", &price);

        sales[vendor - 1][product - 1] += price;

    }

    totalsales(sales);

    return 0;
}

void totalsales (const int sales[][5])
{
    int vendor, product, total = 0;

    for (vendor = 0; vendor < 4; vendor++)
    {
        for (product = 0; product < 5; product++)
        {
            printf("%d\t", sales[vendor][product]);
        }

        printf("\n\n");
    }

    for (vendor = 0; vendor < 4; vendor++)
    {
        for (product = 0; product < 5; product++)
        {
            total += sales[vendor][product];
        }

        printf("%s%d\t%s%d\n", "Vendedor: ", vendor + 1, "Total: ", total);

        total = 0;
    }
}

