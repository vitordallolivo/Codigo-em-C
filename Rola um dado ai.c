#include <stdio.h> // biblioteca de entradas e saidas
#include <stdlib.h> // bibliotecad do n�mero aleat�rio
#include <time.h>// tempo em milisegundos
#include <conio.h> //biblioteca de configuracoes de entradas e saidas
#include <locale.h> 

int main(void) {
	
     setlocale (LC_ALL,"Portuguese");
	 int numero,i,soma,dado,maximo;
	 char sim;
     
	 srand(time(0)); // pega o valor do rel�gio para iniciar os n�meros aleat�rios
	 soma=0;
	 
	 printf("\ndigite o tipo do dado, como d6, sem o D!\n");
	 scanf("%i",&dado);
	 printf("\nDeseja jogar quantas vezes?\n");
	 scanf("%i",&maximo);
	 
	 
	 
	 for(dado=dado;dado>1000;){
	 	 printf("\nPor favor digite um n�mero que mil!\n");
	 	 scanf("%i",&dado);
	 }
	 for (i=0; i<maximo;i++){
	 	 numero = (rand()%(dado+1)); // randomiza os n�meros
	   	if (numero==0){   // n�o quero numeros iguais a zero, ent�o transformo todos iguais a 1
	   		numero=1;     
		}
			
		 printf("seu numero � %i\n",numero);  // Diz qual � o n�mero para termos certeza
	    	
	     soma=numero+soma;
		 
	}
		
	if ((soma!=numero)&&(dado<100)){	 
		printf("a soma dos seus %id%i � %i",maximo,dado,soma);
	} 
	 getch();
	 return 0;
}
