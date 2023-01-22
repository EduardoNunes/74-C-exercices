#include <stdio.h>
#include <locale.h>

//Exercício 3, impar ou par.

main(){
	int num, a;
		
	setlocale(LC_ALL,"Portuguese");
	
	printf("Informe um número inteiro:\n");
	scanf("%d", &num);
	
	a = num % 2;
	
	if(a==0){
		printf("\nO número é par.\n");
	}else
		printf("\nO número é ímpar.\n");
}
