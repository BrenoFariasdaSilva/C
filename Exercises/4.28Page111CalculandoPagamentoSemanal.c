/*

4.28 Calculando o pagamento semanal. Uma empresa
paga a seus funcionários como gerentes (que recebem
um salário semanal fixo), trabalhadores por hora (que
recebem um salário fixo por hora até as 40 primeiras
horas de trabalho e ‘hora e meia’ — ou seja, 1,5 vez
o salário por hora — para horas extras trabalhadas),
trabalhadores comissionados (que recebem R$ 250,00
mais 5,7 por cento de suas vendas brutas semanais) ou
trabalhadores por unidade (que recebem um valor fixo
para cada um dos itens que eles produzem — cada trabalhador
por unidade nessa empresa trabalha apenas em
um tipo de item). Escreva um programa que calcule o
pagamento semanal de cada empregado. Você não sabe
o número de empregados com antecedência. Cada tipo
de empregado tem seu próprio código de pagamento: gerentes
têm código 1, trabalhadores por hora têm código
2, trabalhadores comissionados têm código 3 e trabalhadores
por unidade têm código 4. Use um switch para
calcular o pagamento de cada empregado com base no
seu código de pagamento. Dentro do switch, peça ao
usuário (ou seja, o funcionário administrativo da folha
de pagamento) que informe os fatos apropriados que seu
programa precisa para calcular o pagamento de cada empregado
com base no código.

*/

#include <stdio.h>

int main()
{
    int codigo, horastrabalhadas, unidadesproduzidas; 
    float salario, valorhora= 50, vendas;

    printf("Digite o seu codigo: \n");
    scanf("%d", &codigo);

    switch (codigo)
    {
        case 1:
        {
            salario = 2500;
            printf("O Gerente recebera: %.2f \n", salario);
        }
        break;

        case 2:
        {
            printf("Qual o numero de horas trabalhadas? \n");
            scanf("%d", &horastrabalhadas);

            salario = horastrabalhadas * valorhora;

            if (horastrabalhadas > 40)
            {
               salario = (40 * valorhora) + (horastrabalhadas - 40) * (1.5 * valorhora) ; 
            }

            printf("O trabalhador por hora recebera: %.2f \n", salario);
        }
        break;

        case 3:
        {
            printf("Qual o montante de vendas em reais? \n");
            scanf("%f", &vendas);

            salario = 250 + ((vendas * 57) / 1000);

            printf("O trabalhador comissionado recebera: %.2f \n", salario);
        }
        break;

        case 4:
        {
            printf("Qual o numero de unidades vendidas? \n");
            scanf("%d", &unidadesproduzidas);

            salario = unidadesproduzidas * 50;

            printf("O trabalhador por unidade recebera: %.2f", salario);
        }
        break;

        default:
        {
            printf("Codigo invalido! \n");
        }
        break;
    }
    return 0;
}

