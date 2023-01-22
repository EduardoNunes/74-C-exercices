#include <stdio.h>
#include <locale.h>

//Exercício 7, conversão moeda.

void moeda();

main(){
	setlocale(LC_ALL,"Portuguese");
	
	moeda();
}

void moeda(){
	float din;
	
	printf("Informe quanto dinheiro vc tem:\n");
	scanf("%f", &din);
	printf("O valor em dólar é:\n%.2f\n", din/4);
	printf("O valor em euro é:\n%.2f\n", din/4.25);
	printf("O valor em yen é:\n%.2f\n", din/0.10);
}
