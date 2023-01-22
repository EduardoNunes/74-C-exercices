#include <stdio.h>
#include <locale.h>

//Exercício 5, calculadora.

main(){
	int oper, num1, num2, a;
		
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite o número referente a operação que você deseja fazer:\n");
	printf("\n1 = soma\n2 = subtração\n3 = multiplicação\n4 = divisão\n");
	scanf("%d", &oper);
	
	printf("\nDigite o primeiro número:\n");
	scanf("%d", &num1);
	printf("\nDigite o segundo número:\n");
	scanf("%d", &num2);
	
	switch (oper){
		case 1:
			a = num1+num2;
			printf("\nA soma dos números é:\n%d\n", a);
			break;
		case 2:
			a = num1-num2;
			printf("\nA subtração dos números é:\n%d\n", a);
			break;
		case 3:
			a = num1*num2;
			printf("\nA multiplicação dos números é:\n%d\n", a);
			break;
		case 4:
			a = num1/num2;
			printf("\nA divisão dos números é:\n%d\n", a);
			break;
		default:
			break;
	}
	
	
}


