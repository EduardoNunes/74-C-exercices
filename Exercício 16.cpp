#include <stdio.h>
#include <locale.h>
#include <math.h>

//Exerc�cio 12, caixa eletr�nico.

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int nasc, atual, idade; 
	
	printf("Informe seu ano de nascimento:\n");
	scanf("%d", &nasc);
	printf("Informe o ano atual:\n");
	scanf("%d", &atual);
	
	idade = atual-nasc;
	
	printf("Sua idade �:\n%d", idade);
	printf("\nEm 2030 voc� tera %d anos.\n", 2030-nasc);
}
