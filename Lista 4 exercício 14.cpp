#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Exerc�cio 14, fatorial.

main(){		
	setlocale(LC_ALL,"Portuguese");
	
	int num1, num2, fat=1, a, b;
	
	printf("Informe quantos n�meros ser�o informados:\n");
	scanf("%d", &num1);
	
	for(a=0; a<num1; a++){
		printf("\nDigite o %d(o) n�mero\n", a+1);
		scanf("%d", &num2);
		
		fat = 1;
		
		for(b=1; b<=num2; b++){
			fat = fat*b;

		}
		printf("\nO fatorial � %d\n", fat);
	}
}
