#include <stdio.h>
#include <locale.h>
#include <math.h>

//Exercício 8, potência.

main(){		
	setlocale(LC_ALL,"Portuguese");
	
	int num1, num2, a, b;

			printf("Informe o primeiro número\n");
			scanf("%d", &num1);
			printf("Informe o segundo número\n");
			scanf("%d", &num2);	
			
			a = num1;
		
			while(num1 < num2){
				
				b = num1 % 2;
				if(b == 1){
					printf("%d, ", num1);
				}
				num1++;
			}
}
