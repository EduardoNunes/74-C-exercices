#include <stdio.h>
#include <locale.h>
#include <math.h>

//Exerc�cio 8, pot�ncia.

main(){		
	setlocale(LC_ALL,"Portuguese");
	
	int num1, num2, cal;
	char cont;	

		do{
			printf("Informe o primeiro n�mero\n");
			scanf("%d", &num1);
			printf("Informe o segundo n�mero\n");
			scanf("%d", &num2);	
		
			cal = pow (num1, num2);
			
			printf("%d n�mero elevado a %d �:\n%d\n", num1, num2, cal);
			
			printf("\nDigite s para fazer uma nova opera��o.\n");
			scanf("%s", &cont);
			
		}while(cont == 's');		
}
