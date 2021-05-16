/*
Desenvolva um programa em linguagem C para determinar quais funcionários de uma
empresa devem receber um aumento de salário para o próximo ano. Siga as seguintes
instruções:
1. Crie um vetor com tamanho igual a quantidade de letras do seu último sobrenome.
Considere hífen ou apóstrofo, se houver. Por exemplo: sobrenome “Carvalho” tem
8 letras, então o vetor deverá ter tamanho 8.
2. Use a função para gerar números aleatórios e preencha esse vetor com valores de 0 a
12000. Considere que esses valores são os salários de cada funcionário.
3. Crie outro vetor com o mesmo tamanho do anterior e use a função para gerar
números aleatórios para preencher esse vetor com valores entre 0 e 10. Considere
que esses valores representam o tempo de serviço em anos de cada funcionário.
4. Selecione os 3 funcionários com mais tempo de serviço para receber um aumento de
salário.
5. Se o funcionário com mais tempo de serviço estiver com o salário abaixo de
R$11500, o software deve dar um aumento de 10% e apresentar o salário antigo e o
novo salário.
6. Se o segundo funcionário com mais tempo de serviço estiver com salário abaixo de
R$10500, o software deve dar um aumento de 8% e apresentar o salário antigo e o
novo salário.
7. Se o terceiro funcionário com mais tempo de serviço estiver com salário abaixo de
R$8500, o software deve dar um aumento de 5% e apresentar o salário antigo e o
novo salário.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

int main(){
	 int funcionario[9],tempo[9],i=0,a=0,salario[3],posicao[3]; //gonçalves tem 9 letras
	 
	 setlocale (LC_ALL,"Portuguese");
	
	 srand(time(0)); // gera os numeros aleatorios em função do tempo
	 
	 printf("Salario dos funcionarios\n");
	 
	 for (i=0;i<9;i++){ // gera os numeros e coloca no vetor dos funcionarios de 0 a 12000 reais
	 	
	 	funcionario[i]= rand()%12001;
	 	printf("|%i|",funcionario[i]); // assitencia visual para saber o salario dos funcionarios
	 }
	 
	 printf("\nTempo dos funcionarios\n");
	 
	 for (i=0;i<9;i++){ // colocar no vetor tempo o numero de jornada de trabalho
	 	
	 	tempo[i]=rand()%11; // transformando o tempo em um numero de 0 a 10
	 
	 }
	  printf("\n");
	  
	  salario[0]=0; // transformar os valores em 0, para que não tenha nenhum tipo de erro
	  salario[1]=0; // transformar em 0, para que não evitar lixos de memoria
	  salario[2]=0; // transformar os valores em 0, para que não tenha nenhum tipo de erro
	 
	 for (a=0;a<9;a++){ // para vetor tempo[i] e também para o vetor funcionario
	 
		 printf("\nFuncionario %i: ",a+1);
		 printf("%i",tempo[a]); // ajuda a encontrar em qual posição está o salario x
		 
		 if (tempo[a]>salario[0]){
		 	
		 	salario[0]=tempo[a];
		 	
		 	if (salario[0]==tempo[a]){ // esse if tem que estar aqui para não ocorrer nenhum erro de transformar uma parte do vetor que não tem haver com o processo em 0
			 tempo[a]=0;
		 	 posicao[0]=a+1; // vetor posicao para saber qual funcionario teve mais horas
			 
			 }
		 }
	 
	 	 if (tempo[a]>salario[1]){
		 	
		 	salario[1]=tempo[a];
		 	
		 	if (salario[1]==tempo[a]){ // esse if tem que estar aqui para não ocorrer nenhum erro de transformar uma parte do vetor que não tem haver com o processo em 0
			 tempo[a]=0;
		 	 posicao[1]=a+1;
			 }
		 	
		 }
		 if (tempo[a]>salario[2]){
		 	
		 	salario[2]=tempo[a];
		 	
		 	if (salario[2]==tempo[a]){  // esse if tem que estar aqui para não ocorrer nenhum erro de transformar uma parte do vetor que não tem haver com o processo em 0
			 tempo[a]=0;
		 	 posicao[2]=a+1;
			
			 }
		 	
		 	
		 }
	}
	
	printf("\n\nMaior tempo: %i\nSegundo maior tempo: %i\nTerceiro maior tempo: %i",salario[0],salario[1],salario[2]);
	
	printf("\n\nFuncionario que ficou em primeiro lugar %i\nFuncionario que ficou em segundo %i\nFuncionario que ficou em terceiro %i\n",posicao[0],posicao[1],posicao[2]);
	
	printf("\nSalario antes do primeiro: %i", funcionario[posicao[0]-1]); // menos um no valor da posicao para encontrar ele realmente
	
	if (funcionario[posicao[0]-1]<11500){
		
		funcionario[posicao[0]-1]= funcionario [posicao[0]-1] * 1.1;
		printf("\nSalario atual: %i",funcionario[posicao[0]-1]);
	}
	printf("\nSalario antes do segundo lugar: %i",funcionario[posicao[1]-1]);
	
	if (funcionario[posicao[1]-1]<10500){
		
		funcionario[posicao[1]-1]=funcionario[posicao[1]-1]*1.08;
		printf("\nSalario atual: %i",funcionario[posicao[1]-1]);
	}
	printf("\nSalario de antes do terceiro: %i",funcionario[posicao[2]-1]);

	if (funcionario[posicao[2]-1]<8500){
		funcionario[posicao[2]-1]=funcionario[posicao[2]-1]*1.05;
		printf("\nSalario atual: %i",funcionario[posicao[2]-1]);
		
	}
	getch();
}
