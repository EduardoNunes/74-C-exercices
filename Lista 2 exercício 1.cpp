#include <stdio.h>
#include <locale.h>
#include <math.h>

//Exerc�cio 1, fun��o.

void lucro();
void imposto();
void preco();

float fab, luc, imp;
float lucdis, impostos, final;

main(){
	setlocale(LC_ALL,"Portuguese"); 
	
	printf("Informe o pre�o de f�brica do ve�culo:\n");
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
	printf("O lucro do distribuidor �:\n%.2f", lucdis);
}

void imposto(){
	impostos = (imp*fab)/100;
	printf("\nO valor do imposto �:\n%.2f", impostos);
}

void preco(){
	final = lucdis+fab+impostos;
	printf("\nO pre�o final do ve�culo �:\n%.2f", final);
}
