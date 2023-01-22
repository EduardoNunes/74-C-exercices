#include <stdio.h>
#include <locale.h>

//Exercício 10, área do círculo.

main(){
	setlocale(LC_ALL,"Portuguese");
	
	float raio, area, pi = 3.14;
	
	printf("Informe o raio do círculo:\n");
	scanf("%f", &raio);
	
	area = (raio*raio)*pi;
	
	printf("A área do círculo é:\n%.2f", area);
}
