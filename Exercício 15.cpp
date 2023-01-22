#include <stdio.h>
#include <locale.h>
#include <math.h>

//Exercício 12, caixa eletrônico.

main(){
	setlocale(LC_ALL,"Portuguese");
	
	float pe, jarda, polegada, milha; 
	
	printf("Informe a medida em pés:\n");
	scanf("%f", &pe);
	
	polegada = pe*12;
	jarda = pe/3 ;
	milha = jarda/1760;
	
	printf("Em polegadas:\n%.2f", polegada);
	printf("\nEm jardas:\n%.2f", jarda);
	printf("\nEm milhas:\n%.2f", milha);
}
