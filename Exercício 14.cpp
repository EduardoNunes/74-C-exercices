#include <stdio.h>
#include <locale.h>
#include <math.h>

//Exercício 12, caixa eletrônico.

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num1, num2, a; 
	
	printf("Informe o primeiro néumero:\n");
	scanf("%d", &num1);
	printf("Informe o segundo néumero:\n");
	scanf("%d", &num2);
	
	a = pow(num1, num2);
	printf("%d elevado a %d:\n%d", num1, num2, a);
	
	a = pow(num2, num1);
	printf("\n%d elevado a %d:\n%d", num2, num1, a);
}
