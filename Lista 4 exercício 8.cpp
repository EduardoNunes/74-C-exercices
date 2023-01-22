#include <stdio.h>
#include <locale.h>
#include <math.h>

//Exercício 8, potência.

main(){		
	setlocale(LC_ALL,"Portuguese");
	
	int num1, num2, cal;
	char cont;	

		do{
			printf("Informe o primeiro número\n");
			scanf("%d", &num1);
			printf("Informe o segundo número\n");
			scanf("%d", &num2);	
		
			cal = pow (num1, num2);
			
			printf("%d número elevado a %d é:\n%d\n", num1, num2, cal);
			
			printf("\nDigite s para fazer uma nova operação.\n");
			scanf("%s", &cont);
			
		}while(cont == 's');		
}
