/*

5.23 Tempo em segundos. Escreva uma função que considere
a hora como três argumentos inteiros (horas, minutos
e segundos) e retorne o número de segundos desde
a última vez em que o relógio ‘bateu 12 horas’. Use essa
função para calcular a quantidade de tempo em segundos
entre duas horas, ambas dentro de um ciclo de 12
horas do relógio.

*/

#include <stdio.h>

int timeconverter (int horas, int minutos, int segundos);

int main(void)
{
    int horas, minutos, segundos,totalsegundos;

    printf("Digite as horas: (tempo em 12h)\n");
    scanf("%d:%d:%d", &horas, &minutos, &segundos);

    totalsegundos = timeconverter (horas, minutos, segundos);

    printf("%d:%d:%d horas em segundo sao %d", horas, minutos, segundos, totalsegundos);
    return 0;
}

int timeconverter (int horas, int minutos, int segundos)
{
    int totalsegundos;

    totalsegundos = (horas * 3600) + (minutos * 60) + segundos;

    return totalsegundos;
}
