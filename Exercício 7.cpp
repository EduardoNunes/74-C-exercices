#include <stdio.h>
#include <locale.h>

//Exerc�cio 3, m�dia ponderada.

main(){
	setlocale(LC_ALL,"Portuguese");
	
	float salario;
	
	printf("Informe o sal�rio:\n");
	scanf("%f", &salario);
	
	salario = salario + 600 - ((salario*10)/100);
	
	printf("O sal�rio a receber �:\n%2.f", salario);
	
}
