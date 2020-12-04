/*

4.38 Crescimento da população mundial. A população
mundial tem crescido consideravelmente no decorrer dos
séculos. O crescimento continuado poderia, por fim, desafiar
os limites do ar respirável, da água potável, do solo arável
e de outros recursos limitados. Evidências indicam que,
nos últimos anos, houve uma redução do crescimento, e
que a população mundial poderia chegar a um pico em
algum ano deste século, para depois começar a diminuir.
Para este exercício, pesquise sobre questões de crescimento
populacional on-line. Não se esqueça de investigar
diversos pontos de vista. Encontre estimativas para a
população mundial atual e sua taxa de crescimento (sua
porcentagem de crescimento neste ano). Escreva um programa
que calcule o crescimento da população mundial
para os próximos 75 anos, considerando a suposição
simplificada de que a taxa de crescimento permanecerá
constante. Imprima os resultados em uma tabela. A primeira
coluna deverá mostrar o ano, de 1 a 75. A segunda
coluna deverá mostrar a população mundial antecipada ao
final desse ano. A terceira coluna deverá mostrar o aumento
numérico na população mundial que ocorreria nesse ano. 
Usando os resultados obtidos, determine o ano em
que a população dobraria o tamanho da população de
hoje, se a taxa de crescimento desse ano persistisse.

*/

#include <stdio.h> <math.h>

int main()
{
    int aumento, ano;
    double populacaomundial, crescimento = 0.012;

    printf("%s%35s%35s\n", "Ano", "Populacao Mundial", "Aumento");

    for (ano = 2020; ano <= 2120; ano++)
    {
        populacaomundial = 7.8 * pow(10,8);
        populacaomundial *= pow(1.00 + crescimento, ano - 2019);
        aumento = populacaomundial * pow(crescimento, 1); 
        printf("%d%35.0f%35d\n", ano, populacaomundial, aumento);
    }
    return 0;
}
