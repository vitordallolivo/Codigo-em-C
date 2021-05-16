#include <stdio.h> // biblioteca de entradas e saidas
#include <conio.h> //biblioteca de configuracoes de entradas e saidas
#include <locale.h> 

int main(void){

    // inicio da funcao principal
	 setlocale (LC_ALL,"Portuguese");
	 char letra;
	 int i,n;
	  
	 printf("Digite uma letra(não tente digitar palavras, não vai acontecer nada)\n");
	 scanf("%s",&letra);
	 
	 letra = tolower(letra);
	  
	 if ( (letra=='m')||(letra=='f')||(letra=='k')||(letra=='a'))
	 {
	 	printf("\nTua é um pedaço do meu céu *-*\nDEUSA");
	 }
	 else {
	 	printf("Gata!");
	 }	 
	
	printf("\nDigite um número para calcular a tabuada\n");
    scanf("%i",&n);
	
	for(i=1;i<=10;i++){
		printf("\n %i x %i = %i\n",n,i,n*i);
	}
	
	getch();
}
