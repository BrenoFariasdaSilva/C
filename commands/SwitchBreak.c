#include <stdio.h>
int main()

{
    float x, y, resultado;
    char operacao;
    x = 0;
    y = 0;
    resultado = 0;

    printf("Introduza um valor, um operador e outro valor, consecutivamente:\n ");
    scanf("%f %c %f", &x, &operacao, &y);
    
    switch (operacao)
    {
        case '+':
            resultado = (x + y);
            break;
        case '-':
            resultado = (x - y);
            break;
        case '*':
            resultado = (x * y);
            break;
        case '/':
            resultado = (x / y);
            break;
    }
    printf("O resultado = %f\n", resultado);
    return 0;
}