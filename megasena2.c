/****************************************************************************************************
SORTEIO DA MEGA SENA 2020

O programa gera 10 números aleatórios entre 0 e 100.  

O usuário não pode ver esses números !!

O programa pede 6 números para o usuário e verifica quais números ele acertou.
Para cada acerto (n), o usuário ganha (R$10,00)^n.

Uma parte do programa já está escrita.
Existem erros de sintaxe e partes do código não estão corretas.
Corrija os problemas para que o programa funcione conforme o solicitado.

*************************************************************************************************/
#include<stdio.h>
#include<time.h>
#include<math.h>
#include<locale.h>
int main(void){	
	int j,i, numero, contador = 0, premio = 0, Valores[10];
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));		
	
	contador=0;
	premio=0;
	
	for(i = 0; i < 10; i++){ 
	
		 Valores[i]=rand()%101;  
	
	
	}
	for(i=0; i < 6; i++){
		printf("\nDigite um número entre 0 e 100: ");
		scanf("%i",&numero);
		
		for (j=0; j < 10; j++){
			if (Valores[j]==numero){
				contador++;	
			}
		}	
	}
		 premio = pow(10,contador);
		
		if(contador>0){ 
		 printf("\n\nVocê ganhou R$%i,00 !!", premio);
		}
		else{
			printf("\n\nMais sorte da próxima vez!!");
		}

}

