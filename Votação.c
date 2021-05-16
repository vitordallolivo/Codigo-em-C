/*Escreva um algoritmo para funcionar como uma urna eletrônica, com 3 candidatos:
Candidato A, Candidato B e Candidato C. O usuário deverá digitar uma das 3 letras
(A, B, ou C) para votar em um candidato. Se uma letra diferente for digitada, o voto
deve ir para os nulos. Considere que a população de votantes é de 500 pessoas e a
eleição só pode ser finalizada quando todos terminarem de votar. Ao final, o
algoritmo deve mostrar a quantidade de votos para cada candidato e a quantidade de
votos nulos.*/
#include <stdio.h> // biblioteca de entradas e saidas
#include <conio.h> //biblioteca de configuracoes de entradas e saidas
#include <locale.h> 

int main(void){
	
	setlocale (LC_ALL,"Portuguese");
	int i,Ca,Cb,Cc; 
	char voto;
	float nulos;
	
	Cc=0;
	Cb=0;
	Ca=0;
	nulos=0;
	
	for (i=0;i<500;i++){
		
		printf("\nDiga seu candidato, com A ou B ou C\nDigite outra letra para voto nulo\n");
		scanf("%s",&voto);
		voto = tolower(voto);
		
		if ((voto!='a')&&(voto!='b')&&(voto!='c')){
			nulos++;
		}
		else{
			if (voto=='a'){
				 Ca++;
			}
			else{ 
				if (voto=='b'){
					Cb++;
				}
				else{
					if( voto=='c') {
					Cc++;
					}
				}
			}
			
		}
		
	}
	printf("\nVotos nulos: %.0f\n",nulos);
	printf("\n Votos no candidato A: %i",Ca);
	printf("\n Votos no candidato B: %i",Cb);
	printf("\n Votos no candidato C: %i",Cc);
	
	getch();
	return 0;
}
