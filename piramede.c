/*
Escreva um programa para desenhar uma pirâmide com altura entre 2 e 30, conforme desenho
abaixo. Peça para o usuário a altura da pirâmide e se for digitada uma altura fora da faixa,
continue perguntando até que ele seja digitada uma altura aceitável. Em seguida, envie essa altura
para uma função e crie a pirâmide dentro da função.
*/
#include <stdio.h>

int piramede(int a){
	int i,j;

	for (i=1;i<a;i++){
		
		for (j=0;j<(i+1);j++){
			printf("#");
		}
	 printf("\n");
	}
}


int main(){
	int altura;
	altura=0;
	
	while (altura<=2 || altura>50){
	
		printf("\nDigite o tamanho da piramde com tamanho entre 2 e 30:\n");
		scanf("%i",&altura);	
		
	}
	printf("#\n");
	piramede(altura);

	getch();

}
