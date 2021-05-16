/*
Fazer um algoritmo que peça para n pessoas a sua idade, ao final o programa deverá
verificar se a média de idade da turma varia entre 0 e 25, 26 e 60 e maior que 60; e
então, informar se a turma é jovem, adulta ou idosa, conforme a média calculada.
*/

#include <stdio.h> // biblioteca de entradas e saidas
#include <conio.h> //biblioteca de configuracoes de entradas e saidas
#include <locale.h> 


int main(void){
	
	setlocale (LC_ALL,"Portuguese");	
	 int num,idade,i,total;
	
	 printf("\nNúmero de pessoas\n");
	 scanf("%i",&num);
	
	total=0;
	for (i=0; i<num;i++){
		
		printf("\nDigite a idade\n");
		scanf("%i",&idade);
		
		total=idade+total;
	}

	total=total/i;
	
	if ((total>=0)&&(total<=25)) {
		printf("\nA media do publico é jovem\n");
	}	
	else{
		if ((total>=26)&&(total<60)){
		 	printf("\nA media do publico é adulto\n");
		}
		else{
			printf("\nA media do publico é velho\n");
		} 	
	}
		
	
}
