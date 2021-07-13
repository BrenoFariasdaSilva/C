/*

7.14 Projeto: embaralhar e distribuir cartas. Modifique
o programa desenvolvido no Exercício 7.13 de
modo que seja possível simular o papel do carteador. A
mão de cinco cartas do carteador deve ser ‘virada para
baixo’, de modo que o jogador não possa vê-la. O programa
deve, então, avaliar a mão do carteador, e baseado
na qualidade da mão, o carteador deve retirar mais
uma, duas ou três cartas para substituir o número correspondente
de cartas desnecessárias na mão original.
O programa deve, então, reavaliar a mão do carteador.
[Cuidado: este é um problema difícil!]

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Players 3
#define CardsPerPlayer 5
#define Line 13
#define Column 4
#define MinPairPerPlayer 1
#define MaxPairPerPlayer 2
#define PairPoints 2
#define TriplePoints 3
#define QuadraPoints 4
#define FlushPoints 5
#define StraightPoints 5
#define StraightComparisons 4

// Protótipos de Função. 
void FunctionCaller (const int Deck[Line][Column][Players], const char *Value[], const char *Suit[], int PlayerPoints[]);
void Shuffle (int Deck[Line][Column][Players], const int Loop);
void ShufflePlayerCards (int Deck[Line][Column][Players], const int CurrentPlayer);
void Distributes (const int Deck[Line][Column][Players], const char *Value[], const char *Suit[]);
void Pairs (const int Deck[Line][Column][Players], const int Loop, int PlayerPoints[]);
void GoThroughDeck (const int Deck[Line][Column][Players], const int Points, int *CardsValuePTR, int PlayerPoints[]);
void Triple (const int Deck[Line][Column][Players], const int Loop, int PlayerPoints[]);
void Quadra (const int Deck[Line][Column][Players], const int Loop, int PlayerPoints[]);
void GoThroughModifiedDeck(const int Deck[Line][Column][Players], const int Points, int *FlushSuitPTR, int PlayerPoints[]);
void Flush (const int Deck[Line][Column][Players], const char *Suit[], const int Loop, int PlayerPoints[]);
void SortPlayersDeck (const int Deck[Line][Column][Players], const int *SortedCards[CardsPerPlayer][Players]);
void CardsSequence (const int SortedCards[][CardsPerPlayer], int NumbersSequence[], int PlayerPoints[]);
void Straight (const int Deck[Line][Column][Players], const int Loop, int PlayerPoints[]);
ocorrências (contagem);

int main(void)
{   
    const char *Value[Line] = {"As", "Dois", "Tres", "Quatro", "Cinco", "Seis", "Sete", "Oito", "Nove", "Dez", "Valete", "Dama", "Rei"}; // Inicializa array com os caracters dos Valores das Cartas.

    const char *Suit [Column] = {"Copas", "Ouros", "Paus", "Espadas"}; // Inicializa array com os caracters do Suit(Naipe). 

    int PlayerPoints[Players] = {0}; // Declara e Inicializa os pontos de Cada Player em 0.

    int Deck[Line][Column][Players] = {0};  // Declara o Deck e inicializa seus elementos em 0. 

    int * Pointer = NULL;

    FunctionCaller(Deck, Value, Suit, PlayerPoints);

    return 0; // Indica conclusão bem-sucedida. 
} // Fim do main. 

void FunctionCaller (const int Deck[Line][Column][Players], const char *Value[], const char *Suit[], int PlayerPoints[])
{
    int Loop = 0;

    srand(time(NULL)); // Semente do gerador de número aleatório. 

    while (Loop == 0)
    {
        Shuffle (Deck, Loop); 
        Pairs (Deck, Loop, PlayerPoints);
        Triple (Deck, Loop, PlayerPoints);
        Quadra (Deck, Loop, PlayerPoints);
        Flush (Deck, Suit, Loop, PlayerPoints);
        Straight (Deck, Loop, PlayerPoints);

        if (PlayerPoints[0] >= 2)
        {
            PlayerPoints[0] = 0;
            Loop = 1;
        }
    }

    Shuffle (Deck, Loop); 
    Distributes (Deck, Value, Suit);
    Pairs (Deck, Loop, PlayerPoints);
    Triple (Deck, Loop, PlayerPoints);
    Quadra (Deck, Loop, PlayerPoints);
    Flush (Deck, Suit, Loop, PlayerPoints);
    Straight (Deck, Loop, PlayerPoints);
    ScoreBoard (PlayerPoints);
}

void Shuffle (int Deck[Line][Column][Players], const int Loop) // Shuffle (Baralha) o Deck.
{
    int Player;

    if (Loop == 0)
    {
        for (Player = 0; Player < 1; Player++) // Deck do Dealer
        {
            ShufflePlayerCards(Deck, Player);
        } // Fim do for externo.
    }

    else
    {
        for (Player = 1; Player < Players; Player++) //Deck do Player.
        {
            ShufflePlayerCards(Deck, Player);
        } // Fim do for externo. 
    }
} // Fim da função Shuffle(Embaralha).

void ShufflePlayerCards (int Deck[Line][Column][Players], const int CurrentPlayer)
{
    int Value; // Value da Carta.
    int Suit; // Suit da Carta.

    for (int CurrentCard = 1; CurrentCard <= CardsPerPlayer; CurrentCard++) //Escolhe uma Carta Aleatória para o Deck do CurrentPlayer. 
    { 
        do //Procura um novo local aleatório até que um Slot no Deck não ocupado seja encontrado.
        {
            Value = rand() % 13; // Gera um Value aleatório.
            Suit = rand() % 4; // Gera um Suit aleatório.
        } 
        while (Deck[Value][Suit][CurrentPlayer] != 0); // Verifica se o Slot no Deck já foi usado.
        
        Deck[Value][Suit][CurrentPlayer] = CurrentCard; // coloca número da CurrentCard no slot escolhido do deck 
    } // Fim do for interno.
}
 
void Distributes (const int Deck[Line][Column][Players], const char *Value[], const char *Suit[]) // Distribui as Cards do Deck de cada Player.
{
    printf("Distribuindo as Cartas...\n");

    for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++) // Loop para entregar o Deck de cada Player, com exceção do do Carteador.
    {
        printf("Deck do Player %d:\n", CurrentPlayer + 1);

        for (int CurrentValue = 0; CurrentValue < Line; CurrentValue++) 
        {
            for (int CurrentSuit = 0; CurrentSuit < Column; CurrentSuit++)
            {
                if (Deck[CurrentValue][CurrentSuit][CurrentPlayer] != 0) // Se o valor do Deck, na atual posição dalinha, coluna e Deck do Player for igual ao valor da carta, virar a Carta ao Player(Imprimir a carta);
                {
                    printf("%s (%d) de %s \n", Value[CurrentValue], CurrentValue + 1, Suit[CurrentSuit]);
                } // Fim do if. 
            } // Fim do for da CurrentSuit.
        } // Fim do for da CurrentValue.
        printf("\n");
    } // Fim do for do CurrentPlayer.
} // Fim da função Distribute(Distribui).

void Pairs (const int Deck[Line][Column][Players], const int Loop, int PlayerPoints[]) // Procura se há cartas com o mesmo Numero.
{
    int SameCards = 0;
    int PairCount[Players] = {0};
    int CardsValue[Players][MaxPairPerPlayer] = {0};
    int PairPosition = 0;

    for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++)
    {
        for (int CurrentValue = 0; CurrentValue < Line; CurrentValue++)
        {
            for (int CurrentSuit = 0; CurrentSuit < Column; CurrentSuit++)
            {
                if (Deck[CurrentValue][CurrentSuit][CurrentPlayer] != 0)
                {
                    SameCards++;              
                }
            }

            if (SameCards == PairPoints)
            {
                PairCount[CurrentPlayer]++;
                CardsValue[CurrentPlayer][PairPosition] = (CurrentValue + 1);
                PlayerPoints[CurrentPlayer] += PairPoints;
                PairPosition++;
            }  

            SameCards = 0; 
        }
    
        PairPosition = 0;
    }

    if (Loop == 1)
    {
        for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++)
        {
            if (PairCount[CurrentPlayer] == MinPairPerPlayer)
            {
                printf("Player %d tem %d Par com o valor %d. \n", CurrentPlayer + 1, PairCount[CurrentPlayer], CardsValue[CurrentPlayer][0]);   
            }
            
            if (PairCount[CurrentPlayer] == MaxPairPerPlayer)
            {
                printf("Player %d tem %d Pares com os valores ", CurrentPlayer + 1, PairCount[CurrentPlayer]);

                for (int CurrentValue = 0; CurrentValue < MaxPairPerPlayer; CurrentValue++)
                {
                    if (CurrentValue == 0)
                    {
                        printf("%d, ", CardsValue[CurrentPlayer][CurrentValue]);  
                    }

                    else
                    {
                        printf("%d. \n", CardsValue[CurrentPlayer][CurrentValue]); 
                    }  
                }
            }
        }
        printf("\n");
    }
}

void GoThroughDeck (const int Deck[Line][Column][Players], const int Points, int *CardsValuePTR, int PlayerPoints[])
{
    int SameCards = 0;

    for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++)
    {
        for (int CurrentValue = 0; CurrentValue < Line; CurrentValue++)
        {
            for (int CurrentSuit = 0; CurrentSuit < Column; CurrentSuit++)
            {
                if (Deck[CurrentValue][CurrentSuit][CurrentPlayer] != 0)
                {
                    SameCards++;              
                }
            }

            if (SameCards == Points)
            {
                CardsValuePTR[CurrentPlayer] = CurrentValue + 1;
                PlayerPoints[CurrentPlayer] += Points;
            } 
            SameCards = 0; 
        }
    }
}

void Triple (const int Deck[Line][Column][Players], const int Loop, int PlayerPoints[]) // Procura se há 3 cartas com o mesmo Numero.
{
    int CardsValue[Players] = {0};
    const int *CardsValuePTR = CardsValue;

    GoThroughDeck(Deck, TriplePoints, *CardsValuePTR, PlayerPoints);

    if (Loop == 1)
    {
        for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++)
        {
            if (CardsValue[CurrentPlayer] != 0)
            {
                printf("Player %d tem um Trio com o valor %d \n", CurrentPlayer + 1, CardsValue[CurrentPlayer]);
            }
        }
    }   
} 

void Quadra (const int Deck[Line][Column][Players], const int Loop, int PlayerPoints[]) //Procura se há 4 cartas com o mesmo Numero.
{
    int CardsValue[Players] = {0};
    const int *CardsValuePTR = CardsValue;

    GoThroughDeck(Deck, QuadraPoints, *CardsValuePTR, PlayerPoints);

    if (Loop == 1)
    {
        for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++)
        {   
            if (CardsValue[CurrentPlayer] != 0)
            {
                printf("Player %d tem uma Quadra com o valor %d \n", CurrentPlayer + 1, CardsValue[CurrentPlayer]);
            }
        }
    }
}

void GoThroughModifiedDeck(const int Deck[Line][Column][Players], const int Points, int *FlushSuitPTR, int PlayerPoints[])
{
    int SameSuit = 0;

    for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++)
    {
        for (int CurrentSuit = 0; CurrentSuit < Column; CurrentSuit++)
        {
            for (int CurrentValue = 0; CurrentValue < Line; CurrentValue++)
            {
                if (Deck[CurrentValue][CurrentSuit][CurrentPlayer] != 0)
                {
                    SameSuit++;
                }
            }

            if (SameSuit == Points)
            {
                FlushSuitPTR[CurrentPlayer] = CurrentSuit;
                PlayerPoints[CurrentPlayer] += Points;
                CurrentSuit = Column;
            }
            SameSuit = 0;  
        }
    }
}

void Flush (const int Deck[Line][Column][Players], const char *Suit[], const int Loop, int PlayerPoints[]) // Procura se há um Flush (cartas com o mesmo Suit(Naipe)).
{
    int FlushSuit[Players] = {-1, -1, -1, -1, -1};
    const int *FlushSuitPTR = FlushSuit;

    GoThroughModifiedDeck(Deck, FlushPoints, *FlushSuitPTR, PlayerPoints);

    if (Loop == 1)
    {
        for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++)
        {
            if (FlushSuit[CurrentPlayer] != -1)
            {
                printf("Player %d tem um Flush com o Naipe %s \n", CurrentPlayer + 1, Suit[FlushSuit[CurrentPlayer]]);
            }
        }
    }
}

void SortPlayersDeck (const int Deck[Line][Column][Players], const int *SortedCards[CardsPerPlayer][Players])
{
    int Card = 0;

    for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++)
    {
        for (int CurrentValue = 0; CurrentValue < Line; CurrentValue++)
        {
            for (int CurrentSuit = 0; CurrentSuit < Column; CurrentSuit++)
            {
                if (Deck[CurrentValue][CurrentSuit][CurrentPlayer] != 0)
                {
                    SortedCards[Card][CurrentPlayer] = (CurrentValue + 1);  
                    Card++;            
                }
            }  
        }
        Card = 0;
    }
}

void CardsSequence (const int SortedCards[][CardsPerPlayer], int NumbersSequence[], int PlayerPoints[])
{    
    for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++)
    {
        for (int CurrentCard = 0; CurrentCard < CardsPerPlayer - 1; CurrentCard++)
        {
            if ((SortedCards[CurrentCard][CurrentPlayer]) == ((SortedCards[CurrentCard + 1][CurrentPlayer]) - 1))
            {
                NumbersSequence[CurrentPlayer]++;  
            }

            else
            {
                CurrentCard = CardsPerPlayer;
            }
        }

        if (NumbersSequence[CurrentPlayer] == StraightComparisons)
        {
            PlayerPoints[CurrentPlayer] += StraightPoints;
        }
    }
}

void Straight (const int Deck[Line][Column][Players], const int Loop, int PlayerPoints[]) //Procura se há um Straight (cartas com valores consecutivos)
{
    int SortedCards[CardsPerPlayer][Players] = {0};
    int NumbersSequence[Players];  

    SortPlayersDeck(Deck, SortedCards);

    if (Loop == 1)
    {
        printf("Deck dos Players ordenados: \n");
        for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++)
        {
            printf("Deck Player %d: ", CurrentPlayer + 1);

            for (int CurrentValue = 0; CurrentValue < CardsPerPlayer; CurrentValue++)
            {
                printf("%d ", SortedCards[CurrentValue][CurrentPlayer]);
            }
            printf("\n");
        }
        printf("\n");
    }

    CardsSequence(SortedCards, NumbersSequence, PlayerPoints); 

    if (Loop == 1)
    {
        for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++) 
        {
            if (NumbersSequence[CurrentPlayer] == StraightComparisons)
            {   
                printf("Player %d tem um Straight! \n", CurrentPlayer + 1);           
            }
        }
    } 
}

void ScoreBoard (const int PlayerPoints[])
{
    int WinnerPlayer = 1;
    int WinnerPoints = PlayerPoints[0];
    int DrawPoints = 0;

    printf("Quem ganhou esta ronda? \n");

    for (int CurrentPlayer = 1; CurrentPlayer < Players; CurrentPlayer++)
    {
        if (WinnerPoints == PlayerPoints[CurrentPlayer])
        {
            DrawPoints = PlayerPoints[CurrentPlayer];
        }

        if (PlayerPoints[CurrentPlayer] > WinnerPoints)
        {
            WinnerPlayer = CurrentPlayer + 1; 
            WinnerPoints = PlayerPoints[CurrentPlayer];  
        }       
    }

    if (WinnerPoints > DrawPoints)
    {
        if (WinnerPlayer == 1)
        {
            printf("A Casa ganhou, com %d pontos! \n", WinnerPoints);
        }

        else
        {
            printf("Player %d ganhou, com %d pontos! \n", WinnerPlayer, WinnerPoints);
        }
    }

    else
    {
        printf("Houve empate entre jogadores.\n");
    }

    for (int i = 0; i < Players; i++)
    {
        printf("%d ", PlayerPoints[i]);
    }
}