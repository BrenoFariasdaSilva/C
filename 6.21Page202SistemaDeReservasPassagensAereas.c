/*

6.21 Sistema de reservas de passagens aéreas. Uma
pequena companhia aérea acabou de comprar um
computador para seu novo sistema automatizado de
reservas. O presidente lhe pediu que programasse o
novo sistema. Você escreverá um programa que atribuirá
assentos em cada voo do único avião da companhia
(capacidade: 10 assentos).
Seu programa deverá exibir o seguinte menu de alternativas:
Favor digitar 1 para “primeira classe”
Favor digitar 2 para “econômica”
Se a pessoa digitar 1, então seu programa deverá designar
um assento na primeira classe (assentos de 1
a 5). Se a pessoa digitar 2, então seu programa deverá
designar um assento na classe econômica (assentos 6 a
10). Seu programa deverá, então, imprimir um bilhete
de embarque que indique o número do assento da pessoa
e a seção a que esse assento pertence, primeira classe ou
classe econômica.
Use um array de subscrito único para representar o quadro
de assentos do avião. Inicialize todos os elementos
do array em 0 para indicar que todos os assentos estão
vazios. À medida que cada assento é designado, defina o
elemento correspondente do array como 1, para indicar
que o assento não está mais disponível.
Seu programa, naturalmente, nunca deverá designar
um assento que já foi reservado a outra pessoa. Quando
a primeira classe estiver cheia, seu programa deverá
perguntar à pessoa se ela aceita ser colocada na classe
econômica (e vice-versa). Se a resposta for sim, faça a
designação de assentos apropriada. Se a resposta for não,
imprima a mensagem “O próximo voo sairá em 3
horas.”

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int linearSearch( int seat[SIZE], int key, int i);
void ticket (const int seat[SIZE]);

int main()
{
    int class, seat[SIZE], key, x;

    for (int i = 0; i < SIZE; i++) 
    {
        seat[i] = 0; //Inicializar todas as posições do array em 0.
    }

    srand (time(NULL)); //Inicializar o gerador de numeros aleatórios.

    for (int i = 0; i < SIZE; i++)
    {
        printf("Qual e a sua classe? \n");
        printf("Favor digitar 1 para primeira classe \n");
        printf("Favor digitar 2 para economica \n");
        scanf("%d", &class);

        if (class == 1)
        {
            key = 1 + rand () % 5;            
            x = linearSearch (seat, key, i); //Verificar se o valor já foi gerado.

            if ( x == i)
            {
                seat[i] = key;
            }
            
            if (x != i)
            {
                for (int x = 0; x < i; x++)
                {
                    key = 1 + rand () % 5;
                    x = linearSearch (seat, key, i); 

                    if (x == i)
                    {
                        seat[i] = key;
                        x = i;
                    }  
                }                 
            }
        }

        if (class == 2)
        {
            key = 6 + rand () % 5;            
            x = linearSearch (seat, key, i); //Verificar se o valor já foi gerado.

            if ( x == i)
            {
                seat[i] = key;
            }
            
            if (x != i)
            {
                for (int x = 0; x < i; x++)
                {
                    key = 6 + rand () % 5;
                    x = linearSearch (seat, key, i); 

                    if (x == i)
                    {
                        seat[i] = key;
                        x = i;
                    }  
                }                 
            }
        }

        if (class != 1 && class != 2)
        {
            printf("Valor incorreto! \n");
        }    
    }

    ticket (seat);

    return 0;
}

void ticket (const int seat[SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        if (seat[i] <= 5)
        {
            printf("Numero do assento: %d \nClasse: Primeira Classe\n", seat[i]);
        }

        else
        {
            printf("Numero do assento: %d \nClasse: Classe Economica\n", seat[i]);
        }      
    }    
}

int linearSearch( int seat[SIZE], int key, int i)
{
    int x;
    for (x = 0; x < SIZE; x++)
    {
        if (seat[x] == key)
        {
            x = i - 1;
            return x; // i -1 para voltar 1 valor no i e pegar outro número no lugar
        }
    }

    x = i;

    return x;
}