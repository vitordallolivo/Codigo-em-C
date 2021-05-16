#include <stdio.h>
#include <math.h>
#define max 10
#define min 1
/*
Faça um programa para funcionar como uma calculadora para executar as 4 operações básicas,
solução da equação do segundo grau e tabuada de um número inteiro. As operações deverão ser
selecionadas pelos símbolos ou pela primeira letra do nome da operação (minúscula ou
maiúscula). Cada operação deve ser executada através de uma função, usando a passagem de
parâmetros por valor. Não utilizar variáveis globais. Ao final, pergunte se o usuário deseja
calcular novamente. Se a resposta for s, repita todo o código novamente.
*/

int soma(int a,int b){ // soma
	int result;
	result=a+b;
	printf("%i+%i= %i",a,b,result);
}
int dim(int c,int d){ // subtração
	int result;
	result=c-d;
	printf("%i-%i=%i",c,d,result);
}
int mult(int e,int f){  // multiplicação
	int result;
	result=e*f;
	printf("%i*%i=%i",e,f,result);
}
int div(int g,int h){ // divisao
	int result;
	
	if(h!=0){
	
		result=g/h;
		printf("%i ÷ %i= %i",g,h,result);
	}
	else{
	
		printf("Resultado impossivel de se calcular");
	}
}

int segg(int i, int j, int k){    // segg abreviação para segundo grau
	int delta,x1,x2;
	delta= (j*j)-4*i*k;
	
	delta=sqrt(delta);
	
	x1 = (-1*j+delta)/(2*i);
	
	printf("\nx1 e igual a %i\n",x1);
	
	x2 = (-1*j-delta)/(2*i);
	
	printf("\nx2 e igual a %i\n",x2);
	
}

int tabuada(int l){
	int i;
	for (i=1;i<=10;i++){
		printf("\n %i x %i = %i\n", l,i, i*l);
	}
}

int main(void){
	 int num1,num2,num3;
	 char funcao,continuar,ordem;	
	 
	 continuar='s';
	 
	 do{
	 	
	 	
	 	printf("\nDigite seu tipo de operacao, funcao basicas(b), funcao segundo grau(e) ou tabuada(t)\n");
	 	scanf("%s",&funcao);
	 	
	 	funcao= tolower(funcao);
	 	
	 	if (funcao =='b'){
	 		 
	 		 printf("\nDigite um numero: ");
	 		 scanf("%i",&num1);
			 printf("\nDigite outro numero: ");
	 		 scanf("%i",&num2);
	 		 
	 		 printf("\nDigite o tipo da operacao soma(s ou +), subtracao(s ou -), multiplicacao(m ou *) e divisao(d ou /) \n");
	 		 scanf("%s",&ordem);
	 		 
	 		 if (ordem=='s' || ordem=='+'){
	 		 	soma(num1,num2);
			  }
	 		else if (ordem =='s' || ordem=='-'){
	 			dim(num1,num2);
			 }
			else if (ordem =='m' || ordem =='*'){
				mult(num1,num2);
			}
			else if (ordem =='d'|| ordem =='/'){
				div(num1,num2);
			}
		 }
		 else if (funcao=='e'){
		 	 
		 	 printf("Digite um valor para a: ");
		 	 scanf("%i",&num1);
		 	 printf("Digite um valor para b: ");
		 	 scanf("%i",&num2);
			  printf("Digite um valor para c: ");
		 	 scanf("%i",&num3);
		 	 
		 	 segg(num1,num2,num3); 
		 	
		 }
		 
		 else if (funcao=='t'){
		 	printf("Digite um numero: ");
		 	scanf("%i",&num1);
		 	
		 	tabuada(num1);
		 }
		 
		 
		 
		 
		 
		 
		 printf("\nDeseja continuar ");
		 scanf("%s",&continuar);
	 	
	 	
	 	
	 	
	 	
	 }while( continuar=='s');
	
}
