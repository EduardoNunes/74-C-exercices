#include <stdio.h>
#include <locale.h>

//Exerc�cio 1, n�mero maior.

main(){
	int num1, num2;
		
	setlocale(LC_ALL,"Portuguese");
	
	printf("Informe o primeiro:\n");
	scanf("%d", &num1);
	printf("Informe o segundo:\n");
	scanf("%d", &num2);
	
	if (num1>num2){
		printf("\nO primeiro � maior\n");		
	}else if(num2>num1){
		printf("\nO segundo n�mero � maior.\n");
	}else 
		printf("\nOs n�meros s�o iguais.\n");
}
