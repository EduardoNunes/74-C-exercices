#include <stdio.h>
#include <locale.h>

//Exerc�cio 4, sal�rio + 25%.

main(){
	setlocale(LC_ALL,"Portuguese");
	
	float salario;

	printf("Informe o sal�rio:\n");
	scanf("%f", &salario);
	
	salario = salario + ((salario*25)/100);
	
	printf("O sal�rio com aumento �:\n%.2f", salario);
	
}
