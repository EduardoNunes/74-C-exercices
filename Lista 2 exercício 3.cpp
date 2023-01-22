#include <stdio.h>
#include <locale.h>

//Exercício 3, função ração para gatos.

void retorno();

float peso, gatos, quantidade;


main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Informe o peso do saco de ração em quilos:\n");
	scanf("%f", &peso);
	printf("Informe o número de gatos:\n");
	scanf("%f", &gatos);
	printf("Informe a quantidade de ração fornecida para cada gato por dia em gramas:\n");
	scanf("%f", &quantidade);
	
	retorno();
}

void retorno(){
	float resta;
	
	resta = peso - (((quantidade/1000)*gatos)*5);
	
	printf("A quantidade de ração restante após 5 dias é:\n%.2f Kg", resta);	
}
