#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Exerc�cio 12, N�mero primo.

main(){		
	setlocale(LC_ALL,"Portuguese");
	
	int num, a, b=2;
	
	printf("Informe um n�mero:\n");
	scanf("%d", &num);
	
	do{
		a = num % b;
		
		if(b != num && a == 0){
			printf("N�o � primo\n\n");
			break;		
		}

		if(a == 0 && b == num){
			printf("� primo\n\n");
		}

		b++;
	}while(b<=num);
	
}
