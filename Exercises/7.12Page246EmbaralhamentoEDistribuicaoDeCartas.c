/*

7.12 Embaralhamento e distribuição de cartas. Modifique
o programa na Figura 7.24 de modo que a função
de distribuição de cartas cuide de uma mão de cinco
cartas no pôquer. Depois, escreva as seguintes funções
adicionais:

a) Determine se a mão contém um par.
void Pairs (const int Deck[Line][Column][Players], int PlayerPoints[])
{
    int SameValueCards= 0;
    int PairCount[Players] = {0};
    int CardsValue[Players] = {0};

    printf("Ha algum Par nesta ronda?\n");

    for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++)
    {
        for (int CurrentValue = 0; CurrentValue < Line; CurrentValue++)
        {
            for (int CurrentSuit = 0; CurrentSuit < Column; CurrentSuit++)
            {
                if (Deck[CurrentValue][CurrentSuit][CurrentPlayer] != 0)
                {
                    SameValueCards++;              
                }
            }

            if (SameValueCards == PairPoints)
            {
                PairCount[CurrentPlayer]++;
                CardsValue[CurrentPlayer] = (CurrentValue + 1);
                PlayerPoints[CurrentPlayer] += PairPoints;
            }  
            SameValueCards = 0; 
        }
    }

    for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++)
    {
        if (PairCount[CurrentPlayer] == 1)
        {
            printf("Player %d tem %d Par com o valor %d \n", CurrentPlayer + 1, PairCount[CurrentPlayer], CardsValue[CurrentPlayer][0]);   
        }

        if (PairCount[CurrentPlayer] == 0)
        {
           printf("Player %d nao tem nenhum Par! \n", CurrentPlayer + 1); 
        }
    }
    printf("\n");
}

b) Determine se a mão contém dois pares.

void Pairs (const int Deck[Line][Column][Players], int PlayerPoints[]) //Procura se há cartas com o mesmo Numero.
{
    int SameValueCards= 0;
    int PairCount[Players] = {0};
    int CardsValue[Players][MaxPairPerPlayer] = {0};
    int PairPosition = 0;

    printf("Ha algum Par nesta ronda?\n");

    for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++)
    {
        for (int CurrentValue = 0; CurrentValue < Line; CurrentValue++)
        {
            for (int CurrentSuit = 0; CurrentSuit < Column; CurrentSuit++)
            {
                if (Deck[CurrentValue][CurrentSuit][CurrentPlayer] != 0)
                {
                    SameValueCards++;              
                }
            }

            if (SameValueCards == PairPoints)
            {
                PairCount[CurrentPlayer]++;
                CardsValue[CurrentPlayer][PairPosition] = (CurrentValue + 1);
                PlayerPoints[CurrentPlayer] += PairPoints;
                PairPosition++;
            }  

            SameValueCards = 0; 
        }
    
        PairPosition = 0;
    }

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

        if (PairCount[CurrentPlayer] == 0)
        {
           printf("Player %d nao tem nenhum Par! \n", CurrentPlayer + 1); 
        }
    }
    printf("\n");
}

c) Determine se a mão contém uma trinca (por exemplo, três valetes).

void Triple (const int Deck[Line][Column][Players], int PlayerPoints[]) //Procura se há 3 cartas com o mesmo Numero.
{
    int SameValueCards= 0;
    int CardsValue[Players] = {0};

    printf("Ha algum Trio nesta ronda?\n");

    for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++)
    {
        for (int CurrentValue = 0; CurrentValue < Line; CurrentValue++)
        {
            for (int CurrentSuit = 0; CurrentSuit < Column; CurrentSuit++)
            {
                if (Deck[CurrentValue][CurrentSuit][CurrentPlayer] != 0)
                {
                    SameValueCards++;              
                }
            }

            if (SameValueCards == TriplePoints)
            {
                CardsValue[CurrentPlayer] = (CurrentValue + 1);
                PlayerPoints[CurrentPlayer] += TriplePoints;
            } 
            SameValueCards = 0; 
        }
    }

    for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++)
    {
        if (CardsValue[CurrentPlayer] != 0)
        {
            printf("Player %d tem um Trio com o valor %d \n", CurrentPlayer + 1, CardsValue[CurrentPlayer]);
        }

        else
        {
           printf("Player %d nao tem nenhum Trio! \n", CurrentPlayer + 1); 
        }
    }
    printf("\n");
}

d) Determine se a mão contém uma quadra (por exemplo, quatro ases).

void Quadra (const int Deck[Line][Column][Players], int PlayerPoints[]) //Procura se há 4 cartas com o mesmo Numero.
{
    int SameValueCards= 0;
    int CardsValue[Players] = {0};

    printf("Ha alguma Quadra nesta ronda?\n");

    for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++)
    {
        for (int CurrentValue = 0; CurrentValue < Line; CurrentValue++)
        {
            for (int CurrentSuit = 0; CurrentSuit < Column; CurrentSuit++)
            {
                if (Deck[CurrentValue][CurrentSuit][CurrentPlayer] != 0)
                {
                    SameValueCards++;              
                }
            }

            if (SameValueCards == QuadraPoints)
            {
                CardsValue[CurrentPlayer] = (CurrentValue + 1);
                PlayerPoints[CurrentPlayer] += QuadraPoints;
            } 
            SameValueCards = 0; 
        }
    }

    for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++)
    {
        if (CardsValue[CurrentPlayer] != 0)
        {
            printf("Player %d tem uma Quadra com o valor %d \n", CurrentPlayer + 1, CardsValue[CurrentPlayer]);
        }

        else
        {
           printf("Player %d nao tem nenhuma Quadra! \n", CurrentPlayer + 1); 
        }
    }
    printf("\n");
}

e) Determine se a mão contém um flush (ou seja, cinco cartas do mesmo naipe).

void Flush (const int Deck[Line][Column][Players], const char *Suit[], int PlayerPoints[])
{
    int InvertedDeck[Column][Line][Players] = {0};
    int FlushSuit[Players] = {0};
    int SameSuitCardsCount = 0;

    printf("Ha algum Flush?...\n");

    for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++)
    {
        for (int CurrentSuit = 0; CurrentSuit < Column; CurrentSuit++)
        {
            for (int CurrentValue = 0; CurrentValue < Line; CurrentValue++)
            {   
                InvertedDeck[CurrentSuit][CurrentValue][CurrentPlayer] = Deck[CurrentValue][CurrentSuit][CurrentPlayer];
            }
        }   
    }

    for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++)
    {
        for (int CurrentSuit = 0; CurrentSuit < Column; CurrentSuit++)
        {
            for (int CurrentValue = 0; CurrentValue < Line; CurrentValue++)
            {
                if (InvertedDeck[CurrentSuit][CurrentValue] != 0)
                {
                    SameSuitCardsCount++;
                }
            }

            if (SameSuitCardsCount == FlushPoints)
            {
                FlushSuit[CurrentPlayer] = CurrentSuit;
                PlayerPoints[CurrentPlayer] += FlushPoints;
                CurrentSuit = Column;
            }
            SameSuitCardsCount = 0;  
        }
    }

    for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++)
    {
        if (FlushSuit[CurrentPlayer] != 0)
        {
            printf("Player %d tem um Flush com o Naipe %s \n", CurrentPlayer + 1, Suit[CurrentPlayer]);
        }

        else
        {
           printf("Player %d nao tem um Flush! \n", CurrentPlayer + 1); 
        }
    }
    printf("\n");
}

f) Determine se a mão contém straight (ou seja, cinco cartas de valores de naipe consecutivos).

void CardsSequence (const int SortedPlayerCards[][CardsPerPlayer], int NumbersSequence[])
{    
    for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++)
    {
        for (int CurrentCard = 0; CurrentCard < CardsPerPlayer - 1; CurrentCard++)
        {
            if ((SortedPlayerCards[CurrentPlayer][CurrentCard] + 1) == (SortedPlayerCards[CurrentPlayer][CurrentCard + 1]))
            {
                NumbersSequence[CurrentPlayer]++;  
            }

            else
            {
                CurrentCard = CardsPerPlayer;
            }
        }
    }
}

void Straight (const int Deck[Line][Column][Players], int PlayerPoints[]) //Procura se há um Straight (cartas com valores consecutivos)
{
    int SortedPlayerCards[Players][CardsPerPlayer]= {0};
    int NumbersSequence[Players];
    int SortedCardsPosition = 0;
    
    printf("Ha algum Straight?...\n");    

    for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++)
    {
        for (int CurrentValue = 0; CurrentValue < Line; CurrentValue++)
        {
            for (int CurrentSuit = 0; CurrentSuit < Column; CurrentSuit++)
            {
                if (Deck[CurrentValue][CurrentSuit][CurrentPlayer] != 0)
                {
                    SortedPlayerCards[CurrentPlayer][SortedCardsPosition] = (CurrentValue + 1);  
                    SortedCardsPosition++;            
                }
            }  
        }
        SortedCardsPosition = 0;
    }

    printf("Deck dos Players ordenados: \n");

    for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++)
    {
        printf("Deck Player %d: ", CurrentPlayer + 1);

        for (int CurrentValue = 0; CurrentValue < CardsPerPlayer; CurrentValue++)
        {
            printf("%d ", SortedPlayerCards[CurrentPlayer][CurrentValue]);
        }
        printf("\n");
    }

    printf("\n");

    CardsSequence(SortedPlayerCards, NumbersSequence); 

    for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++) 
    {
        if (NumbersSequence[CurrentPlayer] == StraightPoints)
        {
            printf("Player %d tem um Straight! \n", CurrentPlayer + 1);
            PlayerPoints[CurrentPlayer] += StraightPoints;
        }
    } 
}

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

// Protótipos de Função. 
void Shuffle (int Deck[Line][Column][Players]);
void Distributes (const int Deck[Line][Column][Players], const char *Value[], const char *Suit[]);
void Pairs (const int Deck[Line][Column][Players], int PlayerPoints[]);
void Triple (const int Deck[Line][Column][Players], int PlayerPoints[]);
void Quadra (const int Deck[Line][Column][Players], int PlayerPoints[]);
void Flush (const int Deck[Line][Column][Players], const char *Suit[], int PlayerPoints[]);
void Straight (const int Deck[Line][Column][Players], int PlayerPoints[]);
void CardsSequence (const int SortedPlayerCards[][CardsPerPlayer], int NumbersSequence[]);
void ScoreBoard (const int PlayerPoints[]);

int main(void)
{   
    const char *Value[Line] = {"As", "Dois", "Tres", "Quatro", "Cinco", "Seis", "Sete", "Oito", "Nove", "Dez", "Valete", "Dama", "Rei"}; // Inicializa array com os caracters dos Valores das Cartas.

    const char *Suit [Column] = {"Copas", "Ouros", "Paus", "Espadas"}; // Inicializa array com os caracters do Suit(Naipe). 

    int PlayerPoints[Players] = {0}; // Declara e Inicializa os pontos de Cada Player em 0.

    int Deck[Line][Column][Players] = {0};  // Declara o Deck e inicializa seus elementos em 0.

    srand(time(NULL)); // Semente do gerador de número aleatório. 

    Shuffle (Deck); // Shuffle(Baralha) o Deck.
    Distributes (Deck, Value, Suit); // Distribui as Cards do Deck de cada Player.
    Pairs (Deck, PlayerPoints);
    Triple (Deck, PlayerPoints);
    Quadra (Deck, PlayerPoints);
    Flush (Deck, Suit, PlayerPoints);
    Straight (Deck, PlayerPoints);
    ScoreBoard (PlayerPoints);

    return 0; // Indica conclusão bem-sucedida. 
} // Fim do main. 

void Shuffle (int Deck[Line][Column][Players]) // Shuffle (Baralha) o Deck.
{
    int Value; // Value da Carta.
    int Suit; // Suit da Carta.

    for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++) //Deck do CurrentPlayer.
    {
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
    } // Fim do for externo. 

} // Fim da função Shuffle(Embaralha).
 
void Distributes (const int Deck[Line][Column][Players], const char *Value[], const char *Suit[]) // Distribui as Cards do Deck de cada Player.
{
    printf("Distribuindo as Cartas...\n");

    for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++) // Loop para entregar o Deck de cada Player, com exceção do do Carteador.
    {
        printf("Deck do Player %d:\n", CurrentPlayer + 1);

        for (int Card = 1; Card <= CardsPerPlayer; Card++) // Loop para distribuir as cartas do Deck do CurrentPlayer.
        {
            for (int CurrentValue = 0; CurrentValue < Line; CurrentValue++) 
            {
                for (int CurrentSuit = 0; CurrentSuit < Column; CurrentSuit++)
                {
                    if (Deck[CurrentValue][CurrentSuit][CurrentPlayer] == Card) // Se o valor do Deck, na atual posição dalinha, coluna e Deck do Player for igual ao valor da carta, virar a Carta ao Player(Imprimir a carta);
                    {
                        printf("%s (%d) de %s \n", Value[CurrentValue], CurrentValue + 1, Suit[CurrentSuit]);
                    } // Fim do if. 
                } // Fim do for da CurrentSuit.
            } // Fim do for da CurrentValue.
        } // Fim do for da CurrentCard.
        printf("\n");
    } // Fim do for do CurrentPlayer.
} // Fim da função Distribute(Distribui).

void Pairs (const int Deck[Line][Column][Players], int PlayerPoints[]) //Procura se há cartas com o mesmo Numero.
{
    int SameValueCards= 0;
    int PairCount[Players] = {0};
    int CardsValue[Players][MaxPairPerPlayer] = {0};
    int PairPosition = 0;

    printf("Ha algum Par nesta ronda?\n");

    for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++)
    {
        for (int CurrentValue = 0; CurrentValue < Line; CurrentValue++)
        {
            for (int CurrentSuit = 0; CurrentSuit < Column; CurrentSuit++)
            {
                if (Deck[CurrentValue][CurrentSuit][CurrentPlayer] != 0)
                {
                    SameValueCards++;              
                }
            }

            if (SameValueCards == PairPoints)
            {
                PairCount[CurrentPlayer]++;
                CardsValue[CurrentPlayer][PairPosition] = (CurrentValue + 1);
                PlayerPoints[CurrentPlayer] += PairPoints;
                PairPosition++;
            }  

            SameValueCards = 0; 
        }
    
        PairPosition = 0;
    }

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

        if (PairCount[CurrentPlayer] == 0)
        {
           printf("Player %d nao tem nenhum Par! \n", CurrentPlayer + 1); 
        }
    }
    printf("\n");
}

void Triple (const int Deck[Line][Column][Players], int PlayerPoints[]) //Procura se há 3 cartas com o mesmo Numero.
{
    int SameValueCards= 0;
    int CardsValue[Players] = {0};

    printf("Ha algum Trio nesta ronda?\n");

    for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++)
    {
        for (int CurrentValue = 0; CurrentValue < Line; CurrentValue++)
        {
            for (int CurrentSuit = 0; CurrentSuit < Column; CurrentSuit++)
            {
                if (Deck[CurrentValue][CurrentSuit][CurrentPlayer] != 0)
                {
                    SameValueCards++;              
                }
            }

            if (SameValueCards == TriplePoints)
            {
                CardsValue[CurrentPlayer] = (CurrentValue + 1);
                PlayerPoints[CurrentPlayer] += TriplePoints;
            } 
            SameValueCards = 0; 
        }
    }

    for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++)
    {
        if (CardsValue[CurrentPlayer] != 0)
        {
            printf("Player %d tem um Trio com o valor %d \n", CurrentPlayer + 1, CardsValue[CurrentPlayer]);
        }

        else
        {
           printf("Player %d nao tem nenhum Trio! \n", CurrentPlayer + 1); 
        }
    }
    printf("\n");
} 

void Quadra (const int Deck[Line][Column][Players], int PlayerPoints[]) //Procura se há 4 cartas com o mesmo Numero.
{
    int SameValueCards= 0;
    int CardsValue[Players] = {0};

    printf("Ha alguma Quadra nesta ronda?\n");

    for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++)
    {
        for (int CurrentValue = 0; CurrentValue < Line; CurrentValue++)
        {
            for (int CurrentSuit = 0; CurrentSuit < Column; CurrentSuit++)
            {
                if (Deck[CurrentValue][CurrentSuit][CurrentPlayer] != 0)
                {
                    SameValueCards++;              
                }
            }

            if (SameValueCards == QuadraPoints)
            {
                CardsValue[CurrentPlayer] = (CurrentValue + 1);
                PlayerPoints[CurrentPlayer] += QuadraPoints;
            } 
            SameValueCards = 0; 
        }
    }

    for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++)
    {
        if (CardsValue[CurrentPlayer] != 0)
        {
            printf("Player %d tem uma Quadra com o valor %d \n", CurrentPlayer + 1, CardsValue[CurrentPlayer]);
        }

        else
        {
           printf("Player %d nao tem nenhuma Quadra! \n", CurrentPlayer + 1); 
        }
    }
    printf("\n");
}   

void Flush (const int Deck[Line][Column][Players], const char *Suit[], int PlayerPoints[])
{
    int InvertedDeck[Column][Line][Players] = {0};
    int FlushSuit[Players] = {0};
    int SameSuitCardsCount = 0;

    printf("Ha algum Flush?...\n");

    for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++)
    {
        for (int CurrentSuit = 0; CurrentSuit < Column; CurrentSuit++)
        {
            for (int CurrentValue = 0; CurrentValue < Line; CurrentValue++)
            {   
                InvertedDeck[CurrentSuit][CurrentValue][CurrentPlayer] = Deck[CurrentValue][CurrentSuit][CurrentPlayer];
            }
        }   
    }

    for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++)
    {
        for (int CurrentSuit = 0; CurrentSuit < Column; CurrentSuit++)
        {
            for (int CurrentValue = 0; CurrentValue < Line; CurrentValue++)
            {
                if (InvertedDeck[CurrentSuit][CurrentValue][CurrentPlayer] != 0)
                {
                    SameSuitCardsCount++;
                }
            }

            if (SameSuitCardsCount == FlushPoints)
            {
                FlushSuit[CurrentPlayer] = CurrentSuit;
                PlayerPoints[CurrentPlayer] += FlushPoints;
                CurrentSuit = Column;
            }
            SameSuitCardsCount = 0;  
        }
    }

    for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++)
    {
        if (FlushSuit[CurrentPlayer] != 0)
        {
            printf("Player %d tem um Flush com o Naipe %s \n", CurrentPlayer + 1, Suit[CurrentPlayer]);
        }

        else
        {
           printf("Player %d nao tem um Flush! \n", CurrentPlayer + 1); 
        }
    }
    printf("\n");
}

void CardsSequence (const int SortedPlayerCards[][CardsPerPlayer], int NumbersSequence[])
{    
    for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++)
    {
        for (int CurrentCard = 0; CurrentCard < CardsPerPlayer - 1; CurrentCard++)
        {
            if ((SortedPlayerCards[CurrentPlayer][CurrentCard] + 1) == (SortedPlayerCards[CurrentPlayer][CurrentCard + 1]))
            {
                NumbersSequence[CurrentPlayer]++;  
            }

            else
            {
                CurrentCard = CardsPerPlayer;
            }
        }
    }
}

void Straight (const int Deck[Line][Column][Players], int PlayerPoints[]) //Procura se há um Straight (cartas com valores consecutivos)
{
    int SortedPlayerCards[Players][CardsPerPlayer]= {0};
    int NumbersSequence[Players];
    int SortedCardsPosition = 0;
    
    printf("Ha algum Straight?...\n");    

    for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++)
    {
        for (int CurrentValue = 0; CurrentValue < Line; CurrentValue++)
        {
            for (int CurrentSuit = 0; CurrentSuit < Column; CurrentSuit++)
            {
                if (Deck[CurrentValue][CurrentSuit][CurrentPlayer] != 0)
                {
                    SortedPlayerCards[CurrentPlayer][SortedCardsPosition] = (CurrentValue + 1);  
                    SortedCardsPosition++;            
                }
            }  
        }
        SortedCardsPosition = 0;
    }

    printf("Deck dos Players ordenados: \n");

    for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++)
    {
        printf("Deck Player %d: ", CurrentPlayer + 1);

        for (int CurrentValue = 0; CurrentValue < CardsPerPlayer; CurrentValue++)
        {
            printf("%d ", SortedPlayerCards[CurrentPlayer][CurrentValue]);
        }
        printf("\n");
    }

    printf("\n");

    CardsSequence(SortedPlayerCards, NumbersSequence); 

    for (int CurrentPlayer = 0; CurrentPlayer < Players; CurrentPlayer++) 
    {
        if (NumbersSequence[CurrentPlayer] == StraightPoints)
        {
            printf("Player %d tem um Straight! \n", CurrentPlayer + 1);
            PlayerPoints[CurrentPlayer] += StraightPoints;
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
        if (PlayerPoints[CurrentPlayer] == WinnerPoints)
        {
            DrawPoints = PlayerPoints[CurrentPlayer];
        }

        if (PlayerPoints[CurrentPlayer] > WinnerPoints)
        {
            WinnerPlayer = (CurrentPlayer + 1);
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
}