/*
100 numeros aleatórios entre 0 e 500. 
Peça que o usuario digite um numero e verificar se está entre uns dos números do vetor
*/

#include <stdio.h> // biblioteca de entradas e saidas
#include <stdlib.h> // bibliotecad do número aleatório
#include <time.h>// tempo em milisegundos
#include <conio.h> //biblioteca de configuracoes de entradas e saidas
#include <locale.h> 

int main (){
	
	int numeros[100],pesquisar,i;
	
	srand(time(0));
	
	for (i=0;i<100;i++){
		
		numeros[i]=(rand()%501);
		
		printf("|%i|",numeros[i]);
	}
	
	printf("\n\nQual o número que deseja pesquisar? ");
	scanf("%i",&pesquisar);
	
	for(i=0;i<100;i++){
		
		if(numeros[i]==pesquisar){
			
			pesquisar=1;
			
		}		
	}
	
	if(pesquisar==1){
		printf("Voce conseguiu");
		
	}
	else{
		
		printf("Mais sorte na proxima");
	}
	
}
