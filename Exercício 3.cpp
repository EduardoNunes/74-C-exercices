#include <stdio.h>
#include <locale.h>

//Exerc�cio 3, m�dia ponderada.

main(){
	setlocale(LC_ALL,"Portuguese");
	
	float notas[3], peso[3], ponderada, mult = 0;
	int a;
	
	for(a=0; a<3; a++){
		printf("Informe a nota:\n");
		scanf("%f", &notas[a]);
		printf("Informe o peso desta nota:\n");
		scanf("%f", &peso[a]);
		
		mult = (notas[a]*peso[a]) + mult;
	}

		ponderada = mult/(peso[0]+peso[1]+peso[2]);
		
		printf("A m�dia ponderada �: %.2f.\n", ponderada);
		
}
