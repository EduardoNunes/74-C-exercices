#include <stdio.h>
#include <locale.h>
#include <math.h>

//Exerc�cio 12, caixa eletr�nico.

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num, quadrado, cubo; 
	
	printf("Informe o n�umero:\n");
	scanf("%d", &num);
	
	quadrado = num*num;
	cubo = num*num*num;

	printf("Ao quadrado %d:\n", quadrado);
	printf("Ao cubo %d:\n", cubo);
	printf("A raiz quadrada %.2f:\n", sqrt(num));
	printf("A raiz c�bica %.2f:\n", cbrt(num));
}
