#include <stdio.h>
#include <locale.h>

//Exerc�cio 5, calculadora.

main(){
	int oper, num1, num2, a;
		
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite o n�mero referente a opera��o que voc� deseja fazer:\n");
	printf("\n1 = soma\n2 = subtra��o\n3 = multiplica��o\n4 = divis�o\n");
	scanf("%d", &oper);
	
	printf("\nDigite o primeiro n�mero:\n");
	scanf("%d", &num1);
	printf("\nDigite o segundo n�mero:\n");
	scanf("%d", &num2);
	
	switch (oper){
		case 1:
			a = num1+num2;
			printf("\nA soma dos n�meros �:\n%d\n", a);
			break;
		case 2:
			a = num1-num2;
			printf("\nA subtra��o dos n�meros �:\n%d\n", a);
			break;
		case 3:
			a = num1*num2;
			printf("\nA multiplica��o dos n�meros �:\n%d\n", a);
			break;
		case 4:
			a = num1/num2;
			printf("\nA divis�o dos n�meros �:\n%d\n", a);
			break;
		default:
			break;
	}
	
	
}


