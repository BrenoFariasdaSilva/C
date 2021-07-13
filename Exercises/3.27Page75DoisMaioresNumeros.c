/*

3.27 Ache os dois maiores números. Usando uma técnica
semelhante à do Exercício 3.24, ache os dois maiores
valores dos 10 números. [Nota: você poderá informar
cada número apenas uma vez.]

*/

#include <stdio.h>

int main()
{
    int contador=1, numero1, numero2, maior1, maior2;

    printf("Insira um valor: \n");
    scanf("%d", &numero1);

    maior1 =  numero1;
    
    printf("Insira um valor: \n");
    scanf("%d", &numero1);

    maior2 = numero2;

    while( contador <= 4)
    {
        printf("Insira um valor: \n");
        scanf("%d", &numero1);

        if (numero1 > maior1)
            {
                maior1 = numero1;
            }

        printf("Insira um valor: \n");
        scanf("%d", &numero2);

        if (numero2 > maior1)
            {
                maior2 = numero2;
            }

        ++contador;
    }
    
    printf("Os maiores valores sao: %d, %d", maior1, maior2);

    return 0;
}
