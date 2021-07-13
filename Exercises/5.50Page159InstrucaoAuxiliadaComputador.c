/*

5.50 Instrução auxiliada por computador. O uso de
computadores na educação é conhecido como Instrução
Auxiliada por Computador (IAC). Escreva
um programa que ajude um aluno do ensino fundamental
a aprender a tabuada. Use a função rand
para produzir dois inteiros positivos de um dígito. O
programa deverá então fazer uma pergunta ao usuário,
tal como
Quanto é 6 vezes 7?
O aluno, então, entra com a resposta. Em seguida, o
programa verifica a resposta do aluno. Se estiver correta,
mostre a mensagem ‘Muito bom!’ e faça outra
pergunta de tabuada. Se a resposta estiver errada,
mostre a mensagem ‘Não. Tente novamente.’
e deixe que o aluno tente responder à mesma pergunta
repetidamente, até que ele finalmente acerte
a resposta. Uma função separada deverá ser usada
para gerar cada nova pergunta. Essa função deverá
ser chamada uma vez, quando a aplicação iniciar a
execução, e toda vez que o usuário responder à pergunta
corretamente.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int geradorperguntas (void);

int main()
{
    int resposta, respostacorreta, continuacao;

    geradorperguntas ();

    while (continuacao != -1)
    {
        geradorperguntas ();
    }
    return 0;
}

int geradorperguntas (void)
{
    int respostacorreta, resposta, valor1, valor2, continuacao;
    
    srand (time(NULL));

    valor1 = 1 + rand () % 10;
    valor2 = 1 + rand () % 10;

    respostacorreta = valor1 * valor2;

    printf("Quanto e %d vezes %d?\n", valor1, valor2);
    scanf("%d", &resposta);

    while (resposta != respostacorreta)
    {
        printf("Valor incorreto. Tente novamente: \n");

        printf("Quanto e %d vezes %d? \n", valor1, valor2);
        scanf("%d", &resposta);
    }

    if (resposta == respostacorreta)
        {
            printf("Parabens! \n");
            printf("Quer tentar novamente? (Digite -1 Para sair) \n");
            scanf("%d", &continuacao);
        }

    return continuacao;  
}