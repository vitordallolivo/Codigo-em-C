#include <stdio.h> // biblioteca de entradas e saidas
#include <conio.h> //biblioteca de configuracoes de entradas e saidas
#include <locale.h>


int main(void) {
	
	int dinossauro[5],i, media,total,contador,cont1;
	 setlocale (LC_ALL,"Portuguese");
	
	media=0;
	total=0;
 	
	for (i=0; i<5; i++){
		 printf("\nDigite seu n�mero de dinossauro\n");
		 scanf("%i", &dinossauro[i]); 
		 
		 total=total+dinossauro[i];
		 
	}
     media=(media+total)/i;
	 contador=0;
	 printf("\nMedia � %i\n",media);
	 cont1=0;
	
	for(i=0; i<5 ; i++ ){
	 	
		 if (dinossauro[i]>media){
	 		contador++;
		 }
	 	else if (dinossauro[i]<media){
			 cont1++;
	 	}
    }
	 printf("Dinossauros acima da m�dia %i",contador);
	 printf("\nDinossauros abaixo da m�dia %i",cont1);
     printf("\nA soma dos dinossauros s�o %i",total);
	
	getch();
	return 0;
}
