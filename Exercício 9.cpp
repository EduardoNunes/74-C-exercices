#include <stdio.h>
#include <locale.h>

//Exerc�cio 9, �rea do tri�ngulo.

main(){
	setlocale(LC_ALL,"Portuguese");
	
	float base, altura, area;
	
	printf("Informe a base do tri�ngulo:\n");
	scanf("%f", &base);
	printf("Informe a altura do tri�ngulo:\n");
	scanf("%f", &altura);
	
	area = (base*altura)/2;
	
	printf("A �rea do tri�ngulo �:\n%.2f", area);
	
}
