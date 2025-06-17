#include <stdio.h>

int main() {

 char tabuleiro [10][11]; 

//Prencher o Tabuleiro com '0' (água)
 for(int i = 0; i < 11; i++) {
    for(int j = 0; j < 10; j++){
        tabuleiro[i][j] = '0'; 

    }
  }

   // Adicionando os dois barcos representados pelo número 3
   tabuleiro[2][3] = '3';
   tabuleiro[2][4] = '3';
   tabuleiro[2][5] = '3';
   tabuleiro[5][6] = '3';
   tabuleiro[6][6] = '3';
   tabuleiro[7][6] = '3';

  //Mostrar o Tabuleiro
   printf("TABULEIRO DE BATALHA NAVAL:\n");

   printf("  ");
   // Imprimindo o cabeçalho com letras de A a J
   for (char c ='A'; c <='J';c++) {
    printf(" %c ", c);
  }   
  printf("\n");
    
   for(int i = 1; i <= 10; i++) {
        printf("%d ", i);
      for(int j = 0; j < 10; j++){
       
       printf(" %c ", tabuleiro[i][j]);
    }
    printf("\n");
 }
 
 return 0;
 }