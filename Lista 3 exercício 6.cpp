#include <stdio.h>
#include <locale.h>

//Exerc�cio 6, calculadora.

main(){
	int op;
	float base, alt, a;
		
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite 0 para calcular o per�metro do ret�ngulo:\n");
	printf("Digite 1 para calcular a �rea do ret�ngulo:\n");
	scanf("%d", &op);	
	printf("Informe a base do ret�ngulo:\n");
	scanf("%f", &base);
	printf("Informe a altora do ret�ngulo:\n");
	scanf("%f", &alt);
	
	if(op == 0){
		a = (base*2)+(alt*2);
		printf("\nO per�metro do ret�ngulo �:\n%.2f", a);
	}else if(op == 1){
		a = base*alt;
		printf("\nA �rea do ret�ngulo �:\n%.2f", a);
	}else
	printf("\nOp��o inv�lida.\n");
}
		
	
	
