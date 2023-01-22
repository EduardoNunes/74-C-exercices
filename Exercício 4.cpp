#include <stdio.h>
#include <locale.h>

//Exercício 4, salário + 25%.

main(){
	setlocale(LC_ALL,"Portuguese");
	
	float salario;

	printf("Informe o salário:\n");
	scanf("%f", &salario);
	
	salario = salario + ((salario*25)/100);
	
	printf("O salário com aumento é:\n%.2f", salario);
	
}
