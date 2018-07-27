#include<stdio.h>

extern char mat[7][7], opcao;
extern int p1X, p1Y, p2A, p2B, bolaX, bolaY;

void verifica();
void baixoPlayer1();
void cimaPlayer1();

void verifica(){
	switch(opcao){
		case 113: exit(0);//Encerrar o jogo
			break;
		case 115: baixoPlayer1();//Movimentar para baixo a barra do player 1
			break;
		case 119: cimaPlayer1();//Movimentar para cima a barra do player 1
			break;
	}
}

void baixoPlayer1(){
	if(p1Y<6)
		p1Y++;
}

void cimaPlayer1(){
	if(p1X>0)
		p1X++;
}
