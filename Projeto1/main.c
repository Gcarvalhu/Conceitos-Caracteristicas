#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Variavel - espa�o em memoria que contem 
	//TIPO - NOME  - VALOR
	int a = 1; //valores numericos inteiros 1,2,3,4 - normalmente aplicado a quantidade/idade
	float b= 2.2; //valores num�ricos decimais com pontos - normalmente aplicado a dinheiro e peso
	
	//Isso � um vetor uma vari�vel com v�rias posi��es de mem�ria
	char nome[] = "Gustavo Carvalho dos Santos","Teste"; //armazena caracteres
				 //01234567.....
	
	
	//exibir int %d/exibir float %f/ exibir char ou string %s tudo dentro das aspas!
	printf("a=%d  b=%f  c=%s" ,a,b,nome[2]);
	
	return 0;
}
