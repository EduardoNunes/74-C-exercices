#include <stdio.h>
#include <locale.h>

//Exercício 1, número maior.

main(){
	int num1, num2;
		
	setlocale(LC_ALL,"Portuguese");
	
	printf("Informe o primeiro:\n");
	scanf("%d", &num1);
	printf("Informe o segundo:\n");
	scanf("%d", &num2);
	
	if (num1>num2){
		printf("\nO primeiro é maior\n");		
	}else if(num2>num1){
		printf("\nO segundo número é maior.\n");
	}else 
		printf("\nOs números são iguais.\n");
}
