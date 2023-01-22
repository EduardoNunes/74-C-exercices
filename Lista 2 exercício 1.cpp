#include <stdio.h>
#include <locale.h>
#include <math.h>

//Exercício 1, função.

void lucro();
void imposto();
void preco();

float fab, luc, imp;
float lucdis, impostos, final;

main(){
	setlocale(LC_ALL,"Portuguese"); 
	
	printf("Informe o preço de fábrica do veículo:\n");
	scanf("%f", &fab);
	printf("Informe o percentual de lucro do distribuidor:\n");
	scanf("%f", &luc);
	printf("Informe o ercentual de impostos:\n");
	scanf("%f", &imp);
	
	lucro();
	imposto();
	preco();	
}

void lucro(){
	lucdis = (luc*fab)/100;
	printf("O lucro do distribuidor é:\n%.2f", lucdis);
}

void imposto(){
	impostos = (imp*fab)/100;
	printf("\nO valor do imposto é:\n%.2f", impostos);
}

void preco(){
	final = lucdis+fab+impostos;
	printf("\nO preço final do veículo é:\n%.2f", final);
}
