#include <stdio.h>

// codigo do tabuleiro onde o mar e 0
void tabuleiro (int tabuleiro[10][10]){

 char linha [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
 printf("TABULEIRO DE BATALHA NAVAL\n");
 printf(" ");

 for(int j = 0; j < 10; j++)
 {
 printf("%c ", linha[j]);
 }
 printf("\n");

 for(int i = 0; i < 10; i++)
 {
 printf("%2d ", i+1);
 for(int j = 0; j < 10; j++)
 {
  printf("%d ", tabuleiro[i][j]);
 }
 printf("\n");
 }
}

int main () {
printf("Nivel mestre\n");
printf("Commit\n");

//posição onde os navios estão representados pelo numero 3

int navio[10][10] = {0};

navio [1][4] = 3;
navio [1][5] = 3;
navio [1][6] = 3;

navio [1][9] = 3;
navio [2][9] = 3;
navio [3][9] = 3;

for (int i = 0; i < 3; i++)
    {
      navio[i][i] = 3;  
      for (int i = 4; i < 7; i++)
      {
        navio[i][i] = 3;
      }
    }
      
tabuleiro(navio);

// formaçao de cone no tabuleiro

int matriz[3][5] = {
    {0, 0, 1, 0, 0},
    {0, 1, 1, 1, 0},
    {1, 1, 1, 1, 1}
};

for(int i = 0; i < 3; i++) // Percorre as linhas do cone
{
    for (int j = 0; j < 5; j++)
    {
        if (matriz[i][j] == 1)
        {
            navio[i][j] = 5; // Representa a parte do cone
        }
    }
tabuleiro(navio);
}

// formaçao da cruz no tabuleiro

int cruz[5][5] = {
    {0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0},
    {1, 1, 1, 1, 1},
    {0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0}
};

for(int i = 0; i < 5; i++) // Percorre as linhas da cruz
{
    for (int j = 0; j < 5; j++)
    {
        if (cruz[i][j] == 1)
        {
            navio[i + 5][j] = 5; // Representa a parte da cruz
        }
    }
}
tabuleiro(navio);

// formação do octaedro no tabuleiro

int octaedro[5][5] = {
    {0, 0, 1, 0, 0},
    {0, 1, 1, 1, 0},
    {1, 1, 1, 1, 1},
    {0, 1, 1, 1, 0},
    {0, 0, 1, 0, 0}
};

for(int i = 0; i < 5; i++) // Percorre as linhas do octaedro
{
    for (int j = 0; j < 5; j++)
    {
        if (octaedro[i][j] == 1)
        {
            navio[i + 4][j + 5] = 5; // Representa a parte do octaedro
        }
    }
}
tabuleiro(navio);

return 0;
}

