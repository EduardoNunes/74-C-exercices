#include <stdio.h>
#include <locale.h>

//Exerc�cio 7, convers�o moeda.

void moeda();

main(){
	setlocale(LC_ALL,"Portuguese");
	
	moeda();
}

void moeda(){
	float din;
	
	printf("Informe quanto dinheiro vc tem:\n");
	scanf("%f", &din);
	printf("O valor em d�lar �:\n%.2f\n", din/4);
	printf("O valor em euro �:\n%.2f\n", din/4.25);
	printf("O valor em yen �:\n%.2f\n", din/0.10);
}
