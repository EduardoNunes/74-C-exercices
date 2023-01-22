#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Exercício 12, Número primo.

main(){		
	setlocale(LC_ALL,"Portuguese");
	
	int num, a, b=2;
	
	printf("Informe um número:\n");
	scanf("%d", &num);
	
	do{
		a = num % b;
		
		if(b != num && a == 0){
			printf("Não é primo\n\n");
			break;		
		}

		if(a == 0 && b == num){
			printf("É primo\n\n");
		}

		b++;
	}while(b<=num);
	
}
