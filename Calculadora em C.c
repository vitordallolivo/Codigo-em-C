/*
Escreva um algoritmo para simular uma calculadora com as 4 operações básicas
(soma, subtração, multiplicação e divisão) e também a tabuada e equação do segundo
grau. O algoritmo deverá pedir 2 números reais, para as operações básicas, 3 números
reais para a equação do segundo grau e um número para a tabuada. Também deve
pedir a operação que o usuário deseja fazer. A operação deverá ser digitada usando
os símbolos (+, -, *, /, t ou T, e ou E). Depois de mostrar o resultado, o algoritmo
deverá perguntar se o usuário deseja continuar os cálculos. Enquanto a resposta for
sim, o algoritmo deverá perguntar novamente os números e refazer a operação.
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
     
	 printf("Digite se deseja a calculadora(c), tabuada(t) e equação do segundo grau(e) \n");
	 scanf("%s",&tipo);
	 
	for (refazer='s';refazer='s';){
	 tipo=tolower(tipo);
	
		if (tipo=='c'){
				oper=1;
						    
				printf("\nDigite um numero!\n");
			    scanf("%i",&num1);
				printf("\ndigite + para soma, - para diminuição, * para multiplicação, / para divisão\n");
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
			 printf("\nDigite um número para tabuada\n");
			 scanf("%i",&num);
			
			 for (i=MIN;i<=MAX;i++){
				printf("\n %i x %i = %i\n",num,i,num*i);
			}
			 printf("\nDeseja continuar?\n");
		 	 scanf("%s",&continuar);
	
		}// fim da tabuada
	
		else {
		if (tipo=='e'){
			printf("\nDigite um número para Ax\n");
			scanf("%f",&a);
			if (a!=0){
			 	printf("\nDigite um número para Bx\n");
			 	scanf("%f",&b);
			 	printf("\nDigite um número para C\n");
			 	scanf("%f",&c);
			 	
			 	delta=(b*b)-4*a*c;
			 	x1=(-b+sqrt(delta))/(2*a);
			 	x2=(-b-sqrt(delta))/(2*a);
			} 
		
			
			 printf("\nseu resultado é para x1= %f\n já seu resultado para x2 =%f",x1,x2);			
		}
				
		}
		printf("\nDeseja fazer alguma operação outra operação?\n");
		scanf("%s",&refazer);
			if (refazer!='s'){
				return 0;
			}
			else{
				 printf("\nDigite se deseja a calculadora(c), tabuada(t) e equação do segundo grau(e) \n");
		 		 scanf("%s",&tipo);
			}
	}
 	 getch();
 	 return 0;
}

