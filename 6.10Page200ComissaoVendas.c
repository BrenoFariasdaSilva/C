/*

6.10 Comissões de vendas. Use um array com subscrito único
para resolver o problema a seguir. Uma empresa paga o
salário de seus vendedores com base em uma comissão. O
vendedor recebe R$ 200,00 por semana, e mais 9 por cento
de suas vendas brutas nessa semana. Por exemplo, um
vendedor, que totalize R$ 3.000,00 em vendas em uma
semana, receberá R$ 200,00 e mais 9 por cento de R$
3.000,00, ou seja, R$ 470,00. Escreva um programa em
C (usando um array de contadores) que determine quantos
vendedores receberam salários dentro de cada um dos
seguintes intervalos (suponha que o salário de cada vendedor
seja arredondado em um valor inteiro):
a) R$ 200–299
b) R$ 300–399
c) R$ 400–499
d) R$ 500–599
e) R$ 600–699
f) R$ 700–799
g) R$ 800–899
h) R$ 900–999
i) R$ 1000 ou mais

*/

#include <stdio.h>
#define Line 9
#define Column 2

void frequency (const int salary, int frequencysalary[], const int salarycomission[][Column]);

int main()
{
    float tempweeklysales, weeklysales, salary;
    int frequencysalary[Line] = {0};
    int salarycomission[Line][Column] = {{200, 299},{300, 399}, {400, 499}, {500, 599}, {600, 699}, {700, 799}, {800, 899}, {900, 999}, {1000}};

    while (weeklysales != -1)
    {
        printf("Digite o valor das suas vendas: (Digite -1 para sair)\n");
        scanf("%f", &tempweeklysales);

        if (tempweeklysales == -1)
        {
            salary = tempweeklysales;
            frequency (salary, frequencysalary, salarycomission);
            break;
        }

        weeklysales = tempweeklysales;

        salary = 200 + (weeklysales * 0.09);
        frequency (salary, frequencysalary, salarycomission);
    }

    return 0;
}
void frequency (const int salary, int frequencysalary[], const int salarycomission[][Column])
{
    int arrayvalue = 0;

    if (salary != -1)
    {
        for (int i = 0; i < 9; i++)
        {
            if (salary >= salarycomission[i][0] && salary <= salarycomission[i][1])
            {
                frequencysalary[i]++;
                break;
            }

            if (salary >= salarycomission[8][0])
            {
                frequencysalary[8]++;
                break;
            }
        }
    }

    if (salary == -1)
    {
        for (int i = 200; i <= 1000; i += 100)
        {
            if (i == salarycomission[8][0])
            {
                printf("Salario maior que %d: %d\n", i, frequencysalary[arrayvalue]);
            }

            else 
            {
                printf("Salario entre %d e %d: %d\n", i, i + 99, frequencysalary[arrayvalue]);              
            } 

            arrayvalue += 1;       
        }
    }
}

/*

void frequency (const int salary, int frequencysalary[])
{
    int arrayvalue = 0;

    if (salary >= 200 && salary <= 299)
    {
        frequencysalary[0]++;
    }

    if (salary >= 300 && salary <= 399)
    {
        frequencysalary[1]++;
    }

    if (salary >= 400 && salary <= 499)
    {
        frequencysalary[2]++;
    }

    if (salary >= 500 && salary <= 599)
    {
        frequencysalary[3]++;
    }

    if (salary >= 600 && salary <= 699)
    {
        frequencysalary[4]++;
    }

    if (salary >= 700 && salary <= 799)
    {
        frequencysalary[5]++;
    }

    if (salary >= 800 && salary <= 899)
    {
        frequencysalary[6]++;
    }

    if (salary >= 900 && salary <= 999)
    {
        frequencysalary[7]++;
    }

    if (salary >= 1000)
    {
        frequencysalary[8]++;
    }

    if (salary == -1)
    {
        for (int i = 200; i <= 1000; i += 100)
        {
            if (i == 1000)
            {
                printf("Salario maior que %d: %d\n", i, frequencysalary[arrayvalue]);
            }

            else 
            {
                printf("Salario entre %d e %d: %d\n", i, i + 99, frequencysalary[arrayvalue]);              
            } 

            arrayvalue += 1;       
        }
    }
}

*/