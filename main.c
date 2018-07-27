#include<stdio.h>
#include<stdlib.h>
#include "outros.h"
#include "mover.h"

char mat[7][7], opcao;
char player1[15], player2[15];
int vPlayer1 = 0, vPlayer2 = 0;
int p1X = 0, p1Y = 3, p2X = 6, p2Y = 3, bolaX = 3, bolaY = 3;

int main(){
	inicializaNomes();
	system("cls");
	inicializaMatriz();
	while(1){
		opcao = getch();
		verifica(opcao);
		system("cls");
		impressao();
	}
	
	return 0;
}
