#include <stdio.h>
#include <locale.h>

//Exerc�cio 9, ordem crescente.

main(){
	int num1, num2, num3, a;
		
	setlocale(LC_ALL,"Portuguese");
	
	printf("Informe o primeiro n�mero:\n");
	scanf("%d", &num1);		
	printf("Informe o segundo n�mero:\n");
	scanf("%d", &num2);	
	printf("Informe o terceiro n�mero:\n");
	scanf("%d", &num3);
	
	if(num1 < num2 && num1 < num3){
		
		if(num2 < num3){
			printf("\n%d, %d, %d", num1, num2, num3);
		}else if(num3 < num2){
			printf("\n%d, %d, %d", num1, num3, num2);			
			}
			
	}else if(num2 < num1 && num2 < num3){
		
		if(num1 < num3){
			printf("\n%d, %d, %d", num2, num1, num3);
			}else if(num3 < num1){
			printf("\n%d, %d, %d", num2, num3, num1);			
			}
			
	}else if(num3 < num1 && num3 < num2){
		
		if(num1 < num2){
			printf("\n%d, %d, %d", num3, num1, num2);
		}else if(num2 < num1){
			printf("\n%d, %d, %d", num3, num2, num1);			
			}
	}
}
