#include <stdio.h>
#include <locale.h>

//Exerc�cio 3, m�dia ponderada.

main(){
	setlocale(LC_ALL,"Portuguese");
	
	float salario, grat, imposto;
	
	printf("Informe o sal�rio:\n");
	scanf("%f", &salario);
	
	grat = (salario*5)/100;
	imposto = (salario*7)/100;
	salario = salario + grat-imposto;
	
	printf("O sal�rio l�quido �:\n%.2f", salario);
}
	
	
