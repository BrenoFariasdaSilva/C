/*

7.10 Escreva uma única instrução que execute as tarefas requeridas
para cada um dos itens a seguir. 
Suponha que as variáveis inteiras longas value1 e value2 tenham
sido definidas, e que value1 tenha sido inicializado
com 200000.

long value1 = 200000, value2;

a) Defina a variável lPtr para que ela seja um ponteiro
para um objeto do tipo long.

long *lPtr;

b) Atribua o endereço da variável value1 à variável de
ponteiro lPtr.

long *lPtr = &value1[0];

Ou

lPtr = &value1;

c) Imprima o valor do objeto apontado por lPtr.

printf("%f \n", *lPtr);

d) Atribua o valor do objeto apontado por lPtr à variável
value2.

value2 = *lPtr

e) Imprima o valor de value2.

printf("%d \n", value2);

f) Imprima o endereço de value1.

printf("%d \n", &value1);

g) Imprima o endereço armazenado em lPtr. O valor
impresso é o mesmo que o endereço de value1?

Sim, o valor é: 6422292

*/

#include <stdio.h>

int main()
{
    long value1 = 200000, value2;

    long *lPtr = &value1;

    printf("%d \n", *lPtr);

    value2 = *lPtr;

    printf("%d \n", value2);

    printf("%d \n", &value1);

    printf("%d \n", &*lPtr);

    return 0;
}
