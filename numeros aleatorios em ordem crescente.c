/*
Escreva um programa para gerar 50 números aleatórios entre 0 e 100 e armazene –
os em um vetor. Apresente todos os números na tela. Em seguida, organize estes
números em ordem crescente e apresente – os novamente.
*/
#include <stdio.h> // biblioteca de entradas e saidas
#include <stdlib.h> // bibliotecad do número aleatório
#include <time.h>// tempo em milisegundos
#include <conio.h> //biblioteca de configuracoes de entradas e saidas
#include <locale.h> 


int main(){
	
	int i,numeros[50],auxiliar,a;
	srand(time(0)); // pega o valor do relógio para iniciar os números aleatórios
	
	for(i=0;i<50;i++){
		numeros[i] = ( rand() % 100);
	}
	for (i=0;i<50;i++){
		
		for(a=0;a<50;a++){
			
			if (numeros[i]<numeros[a]){
				auxiliar= numeros[i];
				numeros[i] = numeros[a];
				numeros[a]= auxiliar;
			}
		}
	}
	for(i=0;i<50;i++){
		printf("|%i|",numeros[i]);
	}
}
