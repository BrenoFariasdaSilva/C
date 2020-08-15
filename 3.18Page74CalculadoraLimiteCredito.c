/*

3.18 Calculadora de limite de crédito. Desenvolva um
programa em C que determine se um cliente de uma
loja de departamentos excedeu seu limite de crédito. Os
seguintes fatos estão disponíveis para cada cliente:
a) Número de conta.
b) Saldo no início do mês.
c) Total de todos os encargos desse cliente nesse mês.
d) Total de todos os créditos aplicados à conta desse
cliente nesse mês.
e) Limite de crédito autorizado.

O programa deverá ler cada um desses fatos, calcular o
novo saldo (= saldo inicial + encargos - créditos)
e determinar se o novo saldo é superior ao limite de
crédito do cliente. Para os clientes cujo limite de crédito
foi ultrapassado, o programa deverá exibir o número
de conta do cliente, o limite de crédito, o novo saldo e
a mensagem ‘Limite de crédito ultrapassado’. Veja um
exemplo do diálogo de entrada/saída:
Informe o número da conta (-1 para terminar):
100
Informe o saldo inicial: 5394,78
Informe o total de encargos: 1000,00
Informe o total de créditos: 500,00
Informe o limite de crédito: 5500,00
Conta: 100
Limite de crédito: 5500,00
Saldo: 5894,78
Limite de crédito ultrapassado.
Informe número da conta (-1 para terminar): 200
Informe o saldo inicial: 1000,00
Informe o total de encargos: 123,45
Informe o total de créditos: 321,00
Informe o limite de crédito: 1500,00
Informe número da conta (-1 para terminar): 300
Informe o saldo inicial: 500,00
Informe o total de encargos: 274,73
Informe o total de créditos: 100,00
Informe o limite de crédito: 800,00
Informe número da conta (-1 para terminar): -1

*/

#include <stdio.h>

int main(void)
{
    int Saldo, saldoinicial, encargos, creditos, limitecredito, nconta=0;

    while (nconta != -1)
    {
    printf("Informe o numero da conta: (-1 para Sair)\n");
    scanf("%d", &nconta);
        if (nconta != -1)
        {
            printf("Informe o saldo inicial: \n");
            scanf("%d", &saldoinicial);

            printf("Informe o total de encargos: \n");
            scanf("%d", &encargos);

            printf("Informe o total de creditos: \n");
            scanf("%d", &creditos);

            printf("Informe o limite de creditos: \n");
            scanf("%d", &limitecredito);

            Saldo = ( saldoinicial + encargos - creditos);

            printf("Conta: %d \n", nconta);
            printf("Limite de credito: %d \n", limitecredito);
            printf("Saldo: %d \n", Saldo);
            
            if ( limitecredito < Saldo)
                {
                    printf("Limite de crédito ultrapassado. \n"); 
                }
            
            else 
                { 
                    printf("Limite de crédito autorizado. \n");
                }
        }

    }
    printf("FIM DO PROGRAMA!");
    return 0;
}
