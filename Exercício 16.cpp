#include <stdio.h>
#include <locale.h>
#include <math.h>

//Exercício 12, caixa eletrônico.

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int nasc, atual, idade; 
	
	printf("Informe seu ano de nascimento:\n");
	scanf("%d", &nasc);
	printf("Informe o ano atual:\n");
	scanf("%d", &atual);
	
	idade = atual-nasc;
	
	printf("Sua idade é:\n%d", idade);
	printf("\nEm 2030 você tera %d anos.\n", 2030-nasc);
}
