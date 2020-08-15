/*

3.19 Calculadora de comissão de vendas. Uma grande
companhia química paga seus vendedores por comissão.
Os vendedores recebem R$ 200,00 por semana, mais 9
por cento de suas vendas brutas nessa semana. Por exemplo,
um vendedor que comercialize R$ 5.000,00 em produtos
químicos em uma semana receberá R$ 200,00 e
mais 9 por cento de R$ 5.000,00, ou seja, receberá um
total de R$ 650,00. Desenvolva um programa que peça os
valores brutos de cada vendedor na semana que passou,
calcule e apresente o valor que esse vendedor deverá receber.
Processe os valores referentes a um vendedor por vez.
Veja um exemplo do diálogo de entrada/saída:

Informe a venda em reais (-1 para terminar):
5.000,00
O pagamento é de: R$650,00
Informe a venda em reais (-1 para terminar):
1.234,56
O pagamento é de: R$311,11
Informe a venda em reais (-1 para terminar):
1.088,89
O pagamento é de: R$298,00
Informe a venda em reais (-1 para terminar): -1
*/

#include <stdio.h>

int main()
{
    int vendas=0, salario;

    while (vendas != -1)
    {
        printf("Informe a venda em reais: (-1 para terminar.)\n");
        scanf("%d", &vendas);

        salario = 200 + (vendas * 0.09);

        if( vendas != -1)
        {
            printf("O pagamento e de: %d \n", salario);
        }
    }
    
    return 0;
}
