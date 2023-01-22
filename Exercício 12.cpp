#include <stdio.h>
#include <locale.h>

//Exercício 12, caixa eletrônico.

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int saque, nota;
	
	printf("Informe o valor a ser sacado:\n");
	scanf("%d", &saque);
	
	nota = saque/100;
	printf("100:\n%d\n", nota);
	saque = saque % 100;
	
	nota = saque/50;
	printf("50:\n%d\n", nota);
	saque = saque % 50;
	
	nota = saque/20;
	printf("20:\n%d\n", nota);
	saque = saque % 20;
	
	nota = saque/10;
	printf("10:\n%d\n", nota);
	saque = saque % 10;
	
	nota = saque/5;
	printf("5:\n%d\n", nota);
	saque = saque % 5;
	
	nota = saque/2;
	printf("2:\n%d\n", nota);
	saque = saque % 2;
}
