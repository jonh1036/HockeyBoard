#include<stdio.h>

void inicializaNomes();

char player1[15], player2[15];

void inicializaNomes(){
	printf("Player 1, insira o seu nome: \n");
	fgets(player1, 15, stdin);
	printf("Player 2, insira o seu nome: \n");
	fgets(player2, 15, stdin);
}


