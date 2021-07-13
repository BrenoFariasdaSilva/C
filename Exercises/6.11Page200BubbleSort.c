/*

6.11 Bubble sort. O bubble sort apresentado na Figura 6.15
é ineficaz no caso de arrays grandes. Faça as modificações
simples descritas a seguir para melhorar o desempenho
do bubble sort.

a) Após a primeira passada, o maior número estará certamente
no elemento de número mais alto do array;
após a segunda passada, os dois maiores números
estarão ‘no lugar’ e assim por diante. Em vez de nove
comparações em cada passada, modifique o bubble
sort para que sejam feitas oito comparações na segunda
passada, sete na terceira e assim por diante.

#include <stdio.h>

#define SIZE 98

void bubbleSort(int response[SIZE]);
void printarray(const int response [SIZE]);

int main()
{
    int response[ SIZE ] =  { 6, 7, 8, 9, 8, 7, 8, 9, 8, 9, 7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
    6, 7, 8, 9, 3, 9, 8, 7, 8, 7, 7, 8, 9, 8, 9, 8, 9, 7, 8, 9, 6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
    7, 8, 9, 8, 9, 8, 9, 7, 5, 3, 5, 6, 7, 2, 5, 3, 9, 4, 6, 4, 7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
    7, 4, 4, 2, 5, 3, 8, 7, 5, 6, 4, 5, 6, 1, 6, 5, 7, 8, 7 };

    bubbleSort(response);

    printarray(response);
    
    return 0;
}

void bubbleSort(int response[SIZE])
{
    int pass, hold, holdlast, i;

    for (pass = 1; pass < SIZE; pass++)
    {
        for (i = 0; i < SIZE - 1; i++)
        {
            if (response [i] > response [i + 1])
            {
                hold = response [i];
                response [i] = response [i + 1];
                holdlast = response [SIZE];
                response [i + 1] = holdlast;
                response [SIZE] = hold;   
            }
        }
    }
}

void printarray(const int response [SIZE])
{
    int soma = 0;
    for (int i = 0; i < SIZE; i++)
    {
        printf("O valor do array[%d] e:%d\n", i, response[i]);
    }
}

b) Os dados no array talvez já estejam na ordem correta,
ou na ordem quase correta, portanto, por que
fazer nove passadas se menos que isso já seria suficiente?
Modifique a ordenação para verificar, ao
final de cada passada, se alguma troca foi feita. Se
nenhuma troca tiver sido feita, então os dados já deverão
estar na ordem certa, de modo que o programa
deverá ser concluído. Se foram feitas trocas, então,
pelo menos mais uma passada será necessária.

*/

#include <stdio.h>

#define SIZE 98

void bubbleSort(int response[SIZE]);
void printarray(const int response [SIZE]);

int main()
{
    int response[ SIZE ] =  { 6, 7, 8, 9, 8, 7, 8, 9, 8, 9, 7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
    6, 7, 8, 9, 3, 9, 8, 7, 8, 7, 7, 8, 9, 8, 9, 8, 9, 7, 8, 9, 6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
    7, 8, 9, 8, 9, 8, 9, 7, 5, 3, 5, 6, 7, 2, 5, 3, 9, 4, 6, 4, 7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
    7, 4, 4, 2, 5, 3, 8, 7, 5, 6, 4, 5, 6, 1, 6, 5, 7, 8, 7 };

    bubbleSort(response);

    printarray(response);
    
    return 0;
}

void bubbleSort(int response[SIZE])
{
    int pass, hold, holdlast, i;

    for (pass = 1; pass < SIZE - 1; pass++)
    {
        for (i = 0; i < SIZE - 1; i++)
        {

            if (response [i] > response [i + 1])
            {
                hold = response [i];
                response [i] = response [i + 1];
                holdlast = response [SIZE];
                response [i + 1] = holdlast;
                response [SIZE] = hold;  
            }
        }
    }
}

void printarray(const int response [SIZE])
{
    int soma = 0;

    for (int i = 0; i < SIZE; i++)
    {
        printf("O valor do array[%d] e:%d\n", i, response[i]);
    }
}