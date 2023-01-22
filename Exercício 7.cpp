#include <stdio.h>
#include <locale.h>

//Exercício 3, média ponderada.

main(){
	setlocale(LC_ALL,"Portuguese");
	
	float salario;
	
	printf("Informe o salário:\n");
	scanf("%f", &salario);
	
	salario = salario + 600 - ((salario*10)/100);
	
	printf("O salário a receber é:\n%2.f", salario);
	
}
