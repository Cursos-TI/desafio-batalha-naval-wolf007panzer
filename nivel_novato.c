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

printf("Nivel novato\n");
printf("Commit\n");

//posição onde os navios estão representados pelo numero 3

int navio[10][10] = {0};

navio [1][1] = 3;
navio [1][2] = 3;
navio [1][3] = 3;

navio [1][9] = 3;
navio [2][9] = 3;
navio [3][9] = 3;

tabuleiro(navio);

return 0;

}
