#include <stdio.h>
#include <locale.h>

//Exercício 6, calculadora.

main(){
	int op;
	float base, alt, a;
		
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite 0 para calcular o perímetro do retângulo:\n");
	printf("Digite 1 para calcular a área do retângulo:\n");
	scanf("%d", &op);	
	printf("Informe a base do retângulo:\n");
	scanf("%f", &base);
	printf("Informe a altora do retângulo:\n");
	scanf("%f", &alt);
	
	if(op == 0){
		a = (base*2)+(alt*2);
		printf("\nO perímetro do retângulo é:\n%.2f", a);
	}else if(op == 1){
		a = base*alt;
		printf("\nA área do retângulo é:\n%.2f", a);
	}else
	printf("\nOpção inválida.\n");
}
		
	
	
