/*

3.3 Escreva uma única instrução em C que possibilite realizar
as seguintes tarefas:
a) atribuir a soma de x e y a z e incrementar o valor de
x em 1 após o cálculo.
b) multiplicar a variável produto por 2 usando o operador
*=.
c) multiplicar a variável produto por 2 usando os
operadores = e *.
d) testar se o valor da variável contador é maior do
que 10. Se for, imprimir ‘Contador é maior do
que 10’.
e) decrementar a variável x em 1, depois subtraí-la da
variável total.
f) somar a variável x à variável total, depois decrementar
x por 1.
g) calcular o resto após q ser dividido por divisor e
atribuir o resultado a q; escreva essa instrução de
duas maneiras diferentes.
h) imprimir o valor 123.4567 com 2 dígitos de precisão.
Que valor é impresso?
i) imprimir o valor de ponto flutuante 3.14159 com
três dígitos à direita do ponto decimal. Que valor é
impresso?

RESPOSTA:

a) z = x++ + y;

b) produto *= 2;

c) produto = produto * 2;

d) if (contador > 10)
    {
        printf("O contador é maior do que 10! \n");
    }

e) total = total + --x;

f) total = total + x--;

g) q %= divisor;

h) float X=123.4567;
    
    printf("O valor é: %.2f \n", X);
    RESULTADO PRINTF: 123.46

i)float X=3.14159;
    
    printf("O valor é: %.3f \n", X);
    RESULTADO PRINTF: 3.142
*/

#include <stdio.h>

int main()
{
    float X=3.14159;
    
    printf("O valor é: %.3f \n", X);
    return 0;
}

