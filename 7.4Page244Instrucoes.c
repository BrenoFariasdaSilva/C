/*

7.4 Escreva instruções que realizem as tarefas requeridas
para cada um dos itens a seguir. Suponha que as variáveis
de ponto flutuante number1 e number2 sejam
definidas, e que number1 seja inicializado em 7.3.

a) Defina a variável fPtr como um ponteiro para um
objeto do tipo float.

float *fPtr;

b) Atribua o endereço da variável number1 à variável
de ponteiro fPtr.

float *fPtr = number1;

Ou

*fPtr = &number1[0];

c) Imprima o valor do objeto apontado por fPtr.

printf("%.1f \n", *fPtr);

d) Atribua o valor do objeto apontado por fPtr à variável
number2.

float *fPtr = number2;

Ou

*fPtr = &number2[0];

e) Imprima o valor de number2.

printf("%.1f \n", *fPtr);

f) Imprima o endereço de number1. Use o especificador
de conversão %p.

printf("O endereço de number1 é: %p \n", &number1);

g) Imprima o endereço armazenado em fPtr. Use o
especificador de conversão %p. O valor impresso é o
mesmo que o endereço de number1?

Sim, é o mesmo valor.
printf("O endereço armazenado em fptr é: %p \n", fPtr);

*/

#include <stdio.h>

int main()
{
    
    return 0;
}
