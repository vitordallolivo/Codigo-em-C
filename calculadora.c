#include <stdio.h>
#include <math.h>
#include <locale.h>
	
int main(){
		
	setlocale (LC_ALL,"Portuguese");
	int num1,num2; // nome para as variaveis de tipo inteiro
	char oper; // variavel da opera��o
	 
	
	printf("\nDigite um numero!\n");
	scanf("%i",&num1); // leitura de num1
	printf("\ndigite + para soma, - para diminui��o, * para multiplica��o, / para divis�o\n");
	scanf("%s",&oper); // leitura da opera��o
		
	if (oper=='+'){	 // caso seja opera��o de soma
		printf("Digite outro numero!\n");
		scanf("%i",&num2); 
		printf("\n %i + %i = %i", num1, num2,num1+num2);
		printf("\nO resultado e %.i\n", num1+num2); // calculo da soma dentro do printf
	}
	else {
		if (oper=='-'){ // subtra��o
			 printf("Digite outro numero!\n");  
			 scanf("%i",&num2);
			 printf("\n %i - %i = %i", num1, num2,num1-num2);
			 printf("\nO resultado e %i\n", num1-num2);	// calculo da subtra��o
		}
		else {
			if (oper=='*'){ // multiplica��o
				printf("Digite outro numero!\n");
			 	scanf("%i",&num2);
		     	printf("\n %i * %i = %i\n", num1, num2,num1*num2);
			 	printf("\nO resultado e %i\n", num1*num2); // calculo da multiplica��o
			}
		 	else {
				if (oper=='/')	{ // divis�o
				 	printf("Digite outro numero!\n");
					scanf("%i",&num2);
					
					if (num2==0){
						printf("KABOOM\n"); // caso valor de num2 seja 0, o resultado � indeterminado
					}
					else{
						printf("\n %i / %i = %i\n", num1, num2,num1/num2);
						printf("\nO resultado e %i\n", num1/num2); // calculo da divis�o
					}
				}			
			}
		}
	}
} // fim da calculadora
