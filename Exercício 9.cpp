#include <stdio.h>
#include <locale.h>

//Exercício 9, Área do triângulo.

main(){
	setlocale(LC_ALL,"Portuguese");
	
	float base, altura, area;
	
	printf("Informe a base do triângulo:\n");
	scanf("%f", &base);
	printf("Informe a altura do triângulo:\n");
	scanf("%f", &altura);
	
	area = (base*altura)/2;
	
	printf("A área do triângulo é:\n%.2f", area);
	
}
