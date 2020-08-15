/*

3.10 O que está errado na estrutura de repetição while a seguir
(considere z com valor 100), que supõe-se calcular
a soma dos inteiros de 100 para 1?
while (z > = 0)
soma + = z;

*/

#include <stdio.h>

int main()
{
    int z = 100, soma=0;

    while (z >= 0)  //Não pode haver espaço entre o menor e o igual.
    {
    soma += z; //Não pode haver espaço entre o mais e o igual.
    --z;
    }

    printf("O valor da Soma é: %d \n", soma);
    return 0;
}
