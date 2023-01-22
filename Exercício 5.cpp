#include <stdio.h>
#include <locale.h>

//Exercício 5, média ponderada.

main(){
	setlocale(LC_ALL,"Portuguese");
	
	float salario, aumento, a;
	
	printf("Informe o salário:\n");
	scanf("%f", &a);
	printf("Informe o percentual do aumento\n");
	scanf("%f", &aumento);
	
	salario = a + (a * aumento)/100;
	aumento = (a*aumento)/100;
	
	printf("O novo salário é: %.2f\n", salario);
	printf("O aumento é: %.2f\n", aumento);
	
}
