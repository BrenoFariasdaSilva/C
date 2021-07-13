/*

5.41 Distância entre pontos. Escreva a função distance
que calcula a distância entre dois pontos (x1, y1) e (x2,
y2). Todos os números e valores de retorno devem ser do
tipo double.

*/

#include <stdio.h> 
#include <math.h>

double distance(double x1, double x2, double y1, double y2);

int main()
{
    double x1, x2, y1, y2, pointsdistance;
    
    printf("Digite as coordenadas do primeiro ponto: \n");
    scanf("%lf %lf", &x1 ,&y1 );

    printf("Digite as coordenadas do segundo ponto: \n");
    scanf("%lf %lf", &x2 ,&y2 );

    pointsdistance = distance (x1, x2, y1, y2);

    printf("A distance entre os pontos %.2f,%.2f e %.2f,%.2f e: %.2f \n", x1, y1, x2, y2, pointsdistance);
    
    return 0;
}

double distance(double x1, double x2, double y1, double y2)
{
    double pointsdistance;

    pointsdistance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)); 

    return pointsdistance;
}
