#include <stdio.h>
#include <locale.h>

//Exerc�cio 3, fun��o ra��o para gatos.

void retorno();

float peso, gatos, quantidade;


main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Informe o peso do saco de ra��o em quilos:\n");
	scanf("%f", &peso);
	printf("Informe o n�mero de gatos:\n");
	scanf("%f", &gatos);
	printf("Informe a quantidade de ra��o fornecida para cada gato por dia em gramas:\n");
	scanf("%f", &quantidade);
	
	retorno();
}

void retorno(){
	float resta;
	
	resta = peso - (((quantidade/1000)*gatos)*5);
	
	printf("A quantidade de ra��o restante ap�s 5 dias �:\n%.2f Kg", resta);	
}
