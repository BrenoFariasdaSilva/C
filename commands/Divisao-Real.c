#include <stdio.h>

int main()
{
    float valor1, valor2, divisao;
    /* As variáveis que vão ser usadas na divisão, para dar um resultado real, precisam estar todas definidas como float 
    Ou então, na fórmula, usar "divisão=(float) valor1/valor2;" */
    printf("Insira dois valores quaisquer: \n");
    scanf("%d %d", &valor1, &valor2);
    divisao = (valor1 / valor2);
    printf("O valor da divisão é %f", divisao);
    return 0;
}
