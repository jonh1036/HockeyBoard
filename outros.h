#include<stdio.h>

void inicializaNomes();
void inicializaMatriz();

extern char player1[15], player2[15];
extern char mat[7][7];

void inicializaNomes(){
	printf("Player 1, insira o seu nome: \n");
	fgets(player1, 15, stdin);
	printf("Player 2, insira o seu nome: \n");
	fgets(player2, 15, stdin);
}

void inicializaMatriz(){
	int x, y;
	for(x=0;x<7;x++){
		for(y=0;y<7;y++){
			mat[y][x] = ' ';
		}
	}
	mat[3][0] = '|';
	mat[3][3] = '*';
	mat[3][6] = '|';
}
