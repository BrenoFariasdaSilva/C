/*

5.9 Tarifa de estacionamento. Um estacionamento cobra
uma tarifa mínima de R$ 2,00 por uma permanência de
até três horas, e R$ 0,50 adicionais por hora para cada
hora, ou parte dela, por até três horas. A tarifa máxima
para qualquer período de 24 horas é de R$ 10,00. Suponha
que nenhum carro estacione por mais de 24 horas de cada
vez. Escreva um programa que calcule e imprima as tarifas
de estacionamento para cada um dos três clientes que utilizaram
esse estacionamento ontem. Você deverá informar
as horas de permanência de cada cliente. Seu programa
deverá imprimir os resultados em um formato tabular e
deverá calcular e imprimir o total recebido ontem. O programa
deverá usar a função calcularTaxas para determinar
o valor devido por cliente. Sua saída deverá aparecer
no seguinte formato:

*/

//Não está gerando horas aleatórias dentro de cada ciclo do for.
//Como gerar valor float com o rand e srand.

#include <stdio.h>  
#include <stdlib.h> 
#include <time.h>

float calcularTaxa (int horas);

float resultado;

int main(void)
{
    float taxa, totaltaxa = 0, totalhoras = 0;
    int carro, horas;

    printf("%s\t%s\t%s\t\n", "Carro", "Horas", "Taxa");

    srand(time (NULL));

    for (int i = 1; i <= 3; i++)
    {
        horas = 1 + (rand() % 24);

        printf("%d\t%d\t%.2f\n", i, horas, calcularTaxa(horas) );

        totalhoras += horas;

        totaltaxa += resultado;
    }

    printf("%s\t%.2f\t%.2f\n", "TOTAL:", totalhoras, totaltaxa);

    return 0;
}

float calcularTaxa (int horas)
{
    if (horas <= 3)
    {
        resultado = 2;
        return resultado;
    }

    else
        if (horas == 24)
    {
        resultado = 10;
        return resultado;
    }

    else
    {
        resultado = 2 + (0.5 * (horas - 3));
        return resultado;
    }
}

