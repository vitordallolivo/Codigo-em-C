/*
Escreva um algoritmo para simular uma calculadora com as 4 opera��es b�sicas
(soma, subtra��o, multiplica��o e divis�o) e tamb�m a tabuada e equa��o do segundo
grau. O algoritmo dever� pedir 2 n�meros reais, para as opera��es b�sicas, 3 n�meros
reais para a equa��o do segundo grau e um n�mero para a tabuada. Tamb�m deve
pedir a opera��o que o usu�rio deseja fazer. A opera��o dever� ser digitada usando
os s�mbolos (+, -, *, /, t ou T, e ou E). Depois de mostrar o resultado, o algoritmo
dever� perguntar se o usu�rio deseja continuar os c�lculos. Enquanto a resposta for
sim, o algoritmo dever� perguntar novamente os n�meros e refazer a opera��o.
*/

#include <stdio.h> // biblioteca de entradas e saidas
#include <conio.h> //biblioteca de configuracoes de entradas e saidas
#include <locale.h> 
#include <math.h>
#define MIN 1
#define MAX 10



int main(void){

	 setlocale (LC_ALL,"Portuguese");
     float x1, x2, a, b, c,delta;
     int i,num,num1, num2,num3;
     char tipo, continuar,oper,refazer;
     
	 printf("Digite se deseja a calculadora(c), tabuada(t) e equa��o do segundo grau(e) \n");
	 scanf("%s",&tipo);
	 
	for (refazer='s';refazer='s';){
	 tipo=tolower(tipo);
	
		if (tipo=='c'){
				oper=1;
						    
				printf("\nDigite um numero!\n");
			    scanf("%i",&num1);
				printf("\ndigite + para soma, - para diminui��o, * para multiplica��o, / para divis�o\n");
		   		scanf("%s",&oper);
	
			     if (oper=='+'){			
					 
					 printf("Digite outro numero!\n");
					 scanf("%i",&num2);
					 printf("\n %i + %i = %i", num1, num2,num1+num2);
					 printf("\nO resultado e %.i\n", num1+num2);
					}
				else {
					if (oper=='-'){
						 printf("Digite outro numero!\n");
					    
						 scanf("%i",&num2);
					     printf("\n %i - %i = %i", num1, num2,num1-num2);
						 printf("\nO resultado e %i\n", num1-num2);	
					}
						else {
							if (oper=='*'){c
								printf("Digite outro numero!\n");
							 	scanf("%i",&num2);
						     	printf("\n %i * %i = %i\n", num1, num2,num1*num2);
							 	printf("\nO resultado e %i\n", num1*num2);
							}
						 	else {
								if (oper=='/'){
	
								 	printf("Digite outro numero!\n");
								 	scanf("%i",&num2);
									 if (num2==0){
										printf("KABOOM\n");
									}
								 	else{
										printf("\n %i / %i = %i\n", num1, num2,num1/num2);
										printf("\nO resultado e %i\n", num1/num2);
									}
								}			
							}
						}
					}	
		} // fim da calculadora
		
		if (tipo=='t'){
			 num1=0;
			 printf("\nDigite um n�mero para tabuada\n");
			 scanf("%i",&num);
			
			 for (i=MIN;i<=MAX;i++){
				printf("\n %i x %i = %i\n",num,i,num*i);
			}
			 printf("\nDeseja continuar?\n");
		 	 scanf("%s",&continuar);
	
		}// fim da tabuada
	
		else {
		if (tipo=='e'){
			printf("\nDigite um n�mero para Ax\n");
			scanf("%f",&a);
			if (a!=0){
			 	printf("\nDigite um n�mero para Bx\n");
			 	scanf("%f",&b);
			 	printf("\nDigite um n�mero para C\n");
			 	scanf("%f",&c);
			 	
			 	delta=(b*b)-4*a*c;
			 	x1=(-b+sqrt(delta))/(2*a);
			 	x2=(-b-sqrt(delta))/(2*a);
			} 
		
			
			 printf("\nseu resultado � para x1= %f\n j� seu resultado para x2 =%f",x1,x2);			
		}
				
		}
		printf("\nDeseja fazer alguma opera��o outra opera��o?\n");
		scanf("%s",&refazer);
			if (refazer!='s'){
				return 0;
			}
			else{
				 printf("\nDigite se deseja a calculadora(c), tabuada(t) e equa��o do segundo grau(e) \n");
		 		 scanf("%s",&tipo);
			}
	}
 	 getch();
 	 return 0;
}

