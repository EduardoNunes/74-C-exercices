#include <stdio.h>
#include <locale.h>

//Exerc�cio 10, ordem crescente.

main(){
	int num1, num2, num3, num4;
		
	setlocale(LC_ALL,"Portuguese");
	
	printf("Informe o primeiro n�mero:\n");
	scanf("%d", &num1);		
	printf("Informe o segundo n�mero:\n");
	scanf("%d", &num2);	
	printf("Informe o terceiro n�mero:\n");
	scanf("%d", &num3);
	printf("Informe o quarto n�mero:\n");
	scanf("%d", &num4);
	
	if(num4>num3){
		printf("\n%d, %d, %d, %d\n", num2, num3, num1, num4);
	}else	if(num4<num2){
		printf("\n%d, %d, %d, %d\n", num1, num3, num2, num4);
	}else	if(num4>num1){
		printf("\n%d, %d, %d, %d\n", num4, num1, num2, num3);
	}else	if(num4>=num2){
		printf("\n%d, %d, %d, %d\n", num3, num2, num1, num4);
	}
}
