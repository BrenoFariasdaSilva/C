/*

3.20 Calculadora de juros. Os juros simples sobre um
empréstimo são calculados a partir da fórmula
juros = principal * taxa * dias / 365;
Essa fórmula considera que taxa seja a taxa de juros
anual e, portanto, inclui a divisão por 365 (dias). Desenvolva
um programa que aceite principal, taxa e dias
para vários empréstimos, calcule e apresente os juros simples
para cada empréstimo, usando a fórmula apresentada.
Veja um exemplo do diálogo de entrada/saída:
Informe o valor principal do empréstimo
(-1 para terminar): 1.000,00
Informe a taxa de juros: 0,1
Informe o prazo do empréstimo em dias: 365
O valor dos juros é de R$100,00
Informe o valor principal do empréstimo
(-1 para terminar): 1.000,00
Informe a taxa de juros: 0,08375
Informe o prazo do empréstimo em dias: 224
O valor dos juros é de R$51,40
Informe o valor principal do empréstimo
(-1 para terminar): 10.000,00
Informe a taxa de juros: 0,09
Informe o prazo do empréstimo em dias: 1460
O valor dos juros é de R$3600,00
Informe valor principal do empréstimo
(-1 para terminar): -1

*/

#include <stdio.h>

int main()
{
    int principal=0, dias;
    float juros, taxa;

    while(principal != -1)
    {
        printf("Informe o valor do emprestimo: (-1 Para sair)\n");
        scanf("%d", &principal);

        if (principal != -1)
        {
            printf("Informe a taxa de juros: \n");
            scanf("%f", &taxa);

            printf("Informe o prazo do emprestimo em dias: \n");
            scanf("%d", &dias);

            juros = principal * taxa * dias / 365;

            printf("O valor do emprestimo e: %.f\n", juros);
        }
    }
    return 0;
}
