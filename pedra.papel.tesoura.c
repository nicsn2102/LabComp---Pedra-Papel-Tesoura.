#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int plr, npc, voltar;

	do{
		
		printf("\nPedra, Papel ou Tesoura?\n0 - Pedra | 1 - Papel | 2 - Tesoura\n");
		scanf("%d", &plr);
		
		npc=rand()%2;

		if(npc==plr)
		  printf("\nEmpate!\n");

		if(npc==0 && plr==1){
	      printf("\nTu escolheu: Papel.\n");
		  printf("\nO Computador escolheu: Pedra.\n");
		  printf("\nTu venceu!\n");}
		
		if(npc==0 && plr==2){
		  printf("\nTu escolheu: Tesoura.\n");
		  printf("\nO Computador escolheu: Pedra.\n");
		  printf("\nO Computador venceu!\n");}
	
		if(npc==1 && plr==0){
		  printf("\nTu escolheu: Pedra.\n");
		  printf("\nO Computador escolheu: Papel.\n");
		  printf("\nO Computador venceu!\n");}
		
		if(npc==1 && plr==2){
		  printf("\nTu escolheu: Tesoura.\n");
		  printf("\nO Computador escolheu: Papel.\n");
		  printf("\nTu venceu!\n");}
	
		if(npc==2 && plr==0){
		  printf("\nTu escolheu: Pedra.\n");
		  printf("\nO Computador escolheu: Tesoura.\n");
		  printf("\nTu venceu!\n");}
		  
		if(npc==2 && plr==1){
		  printf("\nTu escolheu: Papel.\n");
		  printf("\nO Computador escolheu: Tesoura.\n");
		  printf("\nO Computador venceu!\n");}
		 
		printf("\n\nDeseja jogar novamente?\n0 - Jogar Novamente | 1 - Encerrar jogo\n");
		scanf("%d", &voltar);
		
	}while(voltar|=1);
}
