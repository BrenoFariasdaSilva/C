// Calculadora de Índice de Massa Corporal.
/*

2.32 Calculadora de Índice de Massa Corporal. Apresentamos
a calculadora do índice de massa corporal
(IMC) no Exercício 1.11. A fórmula para calcular o IMC é
IMC = pesoEmQuilos / (alturaEmMetros * alturaEmMetros)

Crie uma aplicação para a calculadora de IMC que leia o
peso do usuário em quilogramas e a altura em metros, e
que depois calcule e apresente o seu índice de massa corporal.
Além disso, a aplicação deverá exibir as seguintes
informações do Ministério da Saúde para que o usuário
possa avaliar seu IMC:
VALORES DE IMC
Abaixo do peso: menor que 18,5
Normal: entre 18,5 e 24,9
Acima do peso: entre 25 e 29,9
Obeso: 30 ou mais
[Nota: neste capítulo, você aprendeu a usar o tipo int
para representar números inteiros. Os cálculos de IMC,
quando feitos com valores int, produzirão resultados
em números inteiros. No Capítulo 4, você aprenderá a usar
o tipo double para representar números fracionários.
Quando os cálculos de IMC são realizados com doubles,
eles produzem números com pontos decimais; estes
são os chamados números de ‘ponto flutuante’.]

*/

#include <stdio.h> <math.h>

int main (void)
{
    int peso, altura, IMC;
    printf("Insira o seu peso em Kg: \n");
    scanf("%d", &peso);
    printf("insira a sua altura em Cm: \n");
    scanf("%d", &altura);
    IMC = (peso / ((altura * altura) / pow (10, 4)));
    if ( IMC < 18.5)
    {
        printf("Você está abaixo do peso. \n");
    }
    if (IMC > 18.5 && IMC < 24.9)
    {
       printf("Você está com o peso normal. \n"); 
    }
    if (IMC > 25 && IMC < 29.9 )
    {
       printf("Você está acima do peso normal. \n"); 
    }
    if ( IMC > 30)
    {
       printf("Você está obeso. \n"); 
    }
    return 0;
}