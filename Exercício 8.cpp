#include <stdio.h>
#include <locale.h>

//Exerc�cio 3, m�dia ponderada.

main(){
	setlocale(LC_ALL,"Portuguese");
	
	float deposito, taxa, rendimento;
	
	printf("Informe o valor do deposito:\n");
	scanf("%f", &deposito);
	printf("Informe a taxa de juros:\n");
	scanf("%f", &taxa);
	
	rendimento = (deposito*taxa)/100;
	deposito = deposito+rendimento;
	
	printf("O valor total �:\n%.2f", deposito);
	printf("\nA taxa de juros �:\n%.2f", rendimento);

}
