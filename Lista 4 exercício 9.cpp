#include <stdio.h>
#include <locale.h>
#include <math.h>

//Exerc�cio 8, pot�ncia.

main(){		
	setlocale(LC_ALL,"Portuguese");
	
	int num1, num2, a, b;

			printf("Informe o primeiro n�mero\n");
			scanf("%d", &num1);
			printf("Informe o segundo n�mero\n");
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
