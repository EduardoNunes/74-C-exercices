#include <stdio.h>
#include <locale.h>

//Exercício 5, Hermes e Renato.

main(){
	float sal = 1000, a, b;
	int ano_atual;
		
	setlocale(LC_ALL,"Portuguese");
	
	printf("Informe o ano atual\n");
	scanf("%d", &ano_atual);
	
	b = 1.5/100;
	sal = sal + sal*b;
	
	
	for(a=2017; a<=ano_atual; a++){
		b = b*2;
		sal = sal + sal*b;		
	}
	printf("O salário atual é %.2f\n", sal);		
}
