#include <stdio.h>
#include <locale.h>

//Exerc�cio 4, receber 2 n�meros.

main(){
	int num1, num2, a;
		
	setlocale(LC_ALL,"Portuguese");
	
	printf("Informe o primeiro n�mero:\n");
	scanf("%d", &num1);
	printf("Informe o segundo n�mero:\n");
	scanf("%d", &num2);
	
	if(num1==num2){
		a = num1*num2;
		printf("\nA multiplica��o �:\n%d\n", a);
	}else if(num1 > num2){
		a = num1 - num2;
		printf("\nA subtra��o �:\n%d\n", a);
	}else
		a = num1 + num2;
		printf("\nA soma �:\n%d\n", a);
}
