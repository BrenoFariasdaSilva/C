#include <stdio.h>
#define line 12
#define column 12
#define coordinates 2
#define startLine 4
#define startColumn 11
#define endLine 2
#define endColumn 0

void mazeTraverse(char Maze[line][column]);
void mazePrinter(const char Maze[line][column]);

int main(void)
{
    char Maze[line][column] = {{"############"}, {"#...#......#"},
    {"E.#.#.####.#"}, {"###.#....#.#"}, {"#....###.#.S"},
    {"####.#.#.#.#"}, {"#..#.#.#.#.#"}, {"##.#.#.#.#.#"},
    {"#........#.#"}, {"######.###.#"}, {"#......#...#"}, 
    {"############"}};

    char *MazePtr = Maze;

    mazeTraverse(Maze);
    
    for (int i = 0; i < line; i++)
    {
        for (int z = 0; z < column; z++)
        {
            if (Maze[i][z] == 'O')
            {
                Maze[i][z] = '.';
            }
        }
    }
    
    mazePrinter(Maze);

    return 0;
}

void mazeTraverse(char Maze[line][column])
{
    int CurrentPosition[coordinates] = {startLine, startColumn}, x = 0, lastplay[300] = {0}, play = 0, wrongplay = -1, place;

    while (x <= 300)  // CurrentPosition[0]  == Linha Atual. CurrentPosition[1]  == Coluna Atual. 
    {
        //printf("\n%d %d %d",wrongplay,CurrentPosition[0],CurrentPosition[1]);
        if (Maze[CurrentPosition[0] - 1][CurrentPosition[1]] == 'E')  
        {  
            Maze[CurrentPosition[0]][CurrentPosition[1]] = 'X';
            break;
        }

        else if (Maze[CurrentPosition[0]][CurrentPosition[1] - 1] == 'E')
        {   
            Maze[CurrentPosition[0]][CurrentPosition[1]] = 'X';
            break;
        }

        else if (Maze[CurrentPosition[0] + 1][CurrentPosition[1]] == 'E')
        {     
            Maze[CurrentPosition[0]][CurrentPosition[1]] = 'X';
            break;
        }

        else if (Maze[CurrentPosition[0]][CurrentPosition[1] + 1] == 'E')
        {     
            Maze[CurrentPosition[0]][CurrentPosition[1]] = 'X';
            break;
        }
        else if (Maze[CurrentPosition[0] - 1][CurrentPosition[1]] == '.' && wrongplay != 1)  
        {  
            Maze[CurrentPosition[0]][CurrentPosition[1]] = 'X';
            CurrentPosition[0]--;
            //printf("\nFiz isto 1, %d ",play);
            lastplay[play] = 1;
            //printf("Jogada guardada:%d",lastplay[play]);
            play++;
            wrongplay = -1;
        }

        else if (Maze[CurrentPosition[0]][CurrentPosition[1] - 1] == '.' && wrongplay != 2)
        {   
            Maze[CurrentPosition[0]][CurrentPosition[1]] = 'X';
            CurrentPosition[1]--;   
            //printf("\nFiz isto 2, %d ",play);
            lastplay[play] = 2;
            //printf("Jogada guardada:%d",lastplay[play]);
            play++;
            wrongplay = -1;
        }

        else if (Maze[CurrentPosition[0] + 1][CurrentPosition[1]] == '.' && wrongplay != 3)
        {     
            Maze[CurrentPosition[0]][CurrentPosition[1]] = 'X';
            CurrentPosition[0]++;  
            //printf("\nFiz isto 3, %d",play);
            lastplay[play] = 3;
            //printf("Jogada guardada:%d ",lastplay[play]);
            play++;
            wrongplay = -1;
        }

        else if (Maze[CurrentPosition[0]][CurrentPosition[1] + 1] == '.' && wrongplay != 4)
        {     
            Maze[CurrentPosition[0]][CurrentPosition[1]] = 'X';
            CurrentPosition[1]++;   
            //printf("\nFiz isto 4, %d",play);
            lastplay[play] = 4;
            //printf("Jogada guardada:%d ",lastplay[play]);
            play++;
            wrongplay = -1;
        }
        else
        {
            //printf("\nplay: %d", play);
            //printf("\n%d %d", lastplay[play - 1], lastplay[play - 2]);
            do
            {
                Maze[CurrentPosition[0]][CurrentPosition[1]] = 'O';
                if (Maze[CurrentPosition[0] - 1][CurrentPosition[1]] == 'X')
                {
                    Maze[CurrentPosition[0] - 1][CurrentPosition[1]] = 'O';
                    //printf("\nBacktrack|Fiz isto 1, %d", play);
                    play--;
                    CurrentPosition[0] -= 1;
                    place = 1;
                }

                else if (Maze[CurrentPosition[0]][CurrentPosition[1] - 1] == 'X')
                {
                    Maze[CurrentPosition[0]][CurrentPosition[1] - 1] = 'O';
                    //printf("\nBacktrack|Fiz isto 2, %d", play);
                    play--;
                    CurrentPosition[1] -= 1;
                    place = 2;
                }

                else if (Maze[CurrentPosition[0] + 1][CurrentPosition[1]] == 'X')
                {
                    Maze[CurrentPosition[0] + 1][CurrentPosition[1]] = 'O';
                    //printf("\nBacktrack|Fiz isto 3, %d", play);
                    play--;
                    CurrentPosition[0] += 1;
                    place = 3;
                }

                else if (Maze[CurrentPosition[0]][CurrentPosition[1] + 1] == 'X')
                {
                    Maze[CurrentPosition[0]][CurrentPosition[1] + 1] = 'O';
                    //printf("\nBacktrack|Fiz isto 4, %d", play);
                    play--;
                    CurrentPosition[1] += 1;
                    place = 4;
                }
            } while (lastplay[play - 1] == lastplay[play - 2]);
            switch (place)
            {
            case 1: CurrentPosition[0] -= 1; 
                break;
            case 2: CurrentPosition[1] -= 1; 
                break;
            case 3: CurrentPosition[0] += 1; 
                break;
            case 4: CurrentPosition[1] += 1; 
                break;
            }
            wrongplay = lastplay[play + 1];
        }
        x++;
    }
}

void mazePrinter(const char Maze[line][column])
{
    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%c ", Maze[i][j]);
        }
        printf("\n");
    }  
}