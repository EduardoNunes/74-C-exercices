#include <stdio.h>
#include <locale.h>

//Exercício 3, média ponderada.

main(){
	setlocale(LC_ALL,"Portuguese");
	
	float deposito, taxa, rendimento;
	
	printf("Informe o valor do deposito:\n");
	scanf("%f", &deposito);
	printf("Informe a taxa de juros:\n");
	scanf("%f", &taxa);
	
	rendimento = (deposito*taxa)/100;
	deposito = deposito+rendimento;
	
	printf("O valor total é:\n%.2f", deposito);
	printf("\nA taxa de juros é:\n%.2f", rendimento);

}
