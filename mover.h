#include<stdio.h>

extern char mat[7][7], opcao;

void verifica(){
	switch(opcao){
		case 113: exit(0);//Encerrar o jogo
			break;
		case 115: //baixo();//Movimentar para baixo a barra do player 1
			break;
		case 119: //cima();//Movimentar para cima a barra do player 1
			break;
	}
}
