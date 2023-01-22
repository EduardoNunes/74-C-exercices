#include <stdio.h>
#include <locale.h>

//Exercício 4, receber 2 números.

main(){
	int num1, num2, a;
		
	setlocale(LC_ALL,"Portuguese");
	
	printf("Informe o primeiro número:\n");
	scanf("%d", &num1);
	printf("Informe o segundo número:\n");
	scanf("%d", &num2);
	
	if(num1==num2){
		a = num1*num2;
		printf("\nA multiplicação é:\n%d\n", a);
	}else if(num1 > num2){
		a = num1 - num2;
		printf("\nA subtração é:\n%d\n", a);
	}else
		a = num1 + num2;
		printf("\nA soma é:\n%d\n", a);
}
