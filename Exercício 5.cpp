#include <stdio.h>
#include <locale.h>

//Exerc�cio 5, m�dia ponderada.

main(){
	setlocale(LC_ALL,"Portuguese");
	
	float salario, aumento, a;
	
	printf("Informe o sal�rio:\n");
	scanf("%f", &a);
	printf("Informe o percentual do aumento\n");
	scanf("%f", &aumento);
	
	salario = a + (a * aumento)/100;
	aumento = (a*aumento)/100;
	
	printf("O novo sal�rio �: %.2f\n", salario);
	printf("O aumento �: %.2f\n", aumento);
	
}
