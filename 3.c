/*
Escreva um programa que gere 100 números aleatórios entre 0 e 90. Considere que esses valores
representam a idade de 100 pessoas e as armazene em um vetor. Em seguida permita que o
usuário pesquise quantas pessoas estão abaixo de uma certa idade. Por exemplo, se o usuário
digitar 25 o programa deve mostrar quantas pessoas tem menos de 25 anos.
*/


#include <stdio.h>
#include <time.h>// tempo em milisegundos
#include <stdlib.h> // bibliotecad do número aleatório


int main (void){
	int idades[90],encontrar=0,i, contador=0;
	srand(time(0));
	
	for (i=0; i<90;i++){
		
		idades[i]=(rand()%91);
	}
	
	 printf("\nDigite a idade que voce procura e direi quantas pessoas entao abaixo da media: ");
	 scanf("%i",&encontrar);
	 
	 for (i=0; i<90; i++){
	 	
	 	 if (idades[i]<encontrar){
	 	 	contador++;
		  }
	 	
	}
	 printf("\n%i abaixo de %i",contador,encontrar);
	 
}
