#include <stdio.h>
#include <math.h>
#include <locale.h>
	
int main(){
		
	setlocale (LC_ALL,"Portuguese");
	int num1,num2; // nome para as variaveis de tipo inteiro
	char oper; // variavel da operação
	 
	
	printf("\nDigite um numero!\n");
	scanf("%i",&num1); // leitura de num1
	printf("\ndigite + para soma, - para diminuição, * para multiplicação, / para divisão\n");
	scanf("%s",&oper); // leitura da operação
		
	if (oper=='+'){	 // caso seja operação de soma
		printf("Digite outro numero!\n");
		scanf("%i",&num2); 
		printf("\n %i + %i = %i", num1, num2,num1+num2);
		printf("\nO resultado e %.i\n", num1+num2); // calculo da soma dentro do printf
	}
	else {
		if (oper=='-'){ // subtração
			 printf("Digite outro numero!\n");  
			 scanf("%i",&num2);
			 printf("\n %i - %i = %i", num1, num2,num1-num2);
			 printf("\nO resultado e %i\n", num1-num2);	// calculo da subtração
		}
		else {
			if (oper=='*'){ // multiplicação
				printf("Digite outro numero!\n");
			 	scanf("%i",&num2);
		     	printf("\n %i * %i = %i\n", num1, num2,num1*num2);
			 	printf("\nO resultado e %i\n", num1*num2); // calculo da multiplicação
			}
		 	else {
				if (oper=='/')	{ // divisão
				 	printf("Digite outro numero!\n");
					scanf("%i",&num2);
					
					if (num2==0){
						printf("KABOOM\n"); // caso valor de num2 seja 0, o resultado é indeterminado
					}
					else{
						printf("\n %i / %i = %i\n", num1, num2,num1/num2);
						printf("\nO resultado e %i\n", num1/num2); // calculo da divisão
					}
				}			
			}
		}
	}
} // fim da calculadora
