#include <stdio.h>
#include <locale.h>

//Exerc�cio 10, �rea do c�rculo.

main(){
	setlocale(LC_ALL,"Portuguese");
	
	float raio, area, pi = 3.14;
	
	printf("Informe o raio do c�rculo:\n");
	scanf("%f", &raio);
	
	area = (raio*raio)*pi;
	
	printf("A �rea do c�rculo �:\n%.2f", area);
}
