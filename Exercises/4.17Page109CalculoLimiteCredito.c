/*

4.17 Calculando limites de crédito. Poupar dinheiro
vem se tornando algo cada vez mais difícil de se fazer
durante períodos de recessão, de modo que as empresas
podem estreitar seus limites de crédito para impedir que
suas contas a receber (dinheiro devido a elas) se tornem
muito grandes. Em resposta a uma recessão prolongada,
uma empresa cortou os limites de crédito de seus
clientes pela metade. Assim, se um cliente em particular
tinha um limite de crédito de R$ 2.000,00, agora
ele é de R$ 1.000,00. Se um cliente tinha um limite de
R$ 5.000,00, agora ele é de R$ 2.500,00. Escreva um
programa que analise o status de crédito de três clientes
dessa empresa. Você receberá as seguintes informações:
a) O número de conta do cliente.
b) O limite de crédito do cliente antes da recessão.
c) O saldo atual do cliente (ou seja, o valor que o cliente
deve à empresa).
Seu programa deve calcular e imprimir o novo limite de
crédito para cada cliente e deve determinar (e imprimir)
quais clientes têm saldo atual superior a seus novos limites
de crédito.

*/

#include <stdio.h>

int main()
{
    float nconta, limitecredito, saldoatual, novolimite;
    int saldomaior = 0;

    for (int nclientes = 1; nclientes <= 3; nclientes++)
    {
        printf("Insira o numero da conta: \n");
        scanf("%f", &nconta);

        printf("Insira o limite de credito da conta: \n");
        scanf("%f", &limitecredito);

        printf("Insira o saldo atual: \n");
        scanf("%f", &saldoatual);

        novolimite = (limitecredito / 2) + saldoatual;

        printf("O cliente numero %.1f tem o novo saldo de: %.2f \n", nconta, novolimite);

        if (novolimite > limitecredito)
        {
            saldomaior += 1;
            printf("O cliente numero %.1f tem um novo saldo superior. \n", nconta);

        }

    }

    return 0;
}
