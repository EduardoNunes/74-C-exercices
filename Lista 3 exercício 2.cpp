#include <stdio.h>
#include <locale.h>

//Exercício 2, condição satisfeita.

main(){
	int num1, num2, num3;
		
	setlocale(LC_ALL,"Portuguese");
	
	printf("Informe o primeiro:\n");
	scanf("%d", &num1);
	printf("Informe o segundo:\n");
	scanf("%d", &num2);
	printf("Informe o terceiro:\n");
	scanf("%d", &num3);
	
	if(num1 > num2 && num1 > num3){
		printf("\nCondição satisfeita.\n");
	}else
		printf("\nErro.\n");
}
