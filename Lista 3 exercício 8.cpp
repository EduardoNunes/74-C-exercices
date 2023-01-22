#include <stdio.h>
#include <locale.h>

//Exercício 8, exame final.

main(){
	float nota1, nota2, nota3, med, exa;
		
	setlocale(LC_ALL,"Portuguese");
	
	printf("Informe a primeira nota:\n");
	scanf("%f", &nota1);		
	printf("Informe a segunda nota:\n");
	scanf("%f", &nota2);	
	printf("Informe a terceira nota:\n");
	scanf("%f", &nota3);
	
	med = (nota1+nota2+nota3)/3;
	
	if(med<3){
		printf("\nReprovado.\n");
		
	}else if(med>=3 && med<7){
		exa= 12-med;
		printf("\nVocê precisa tirar %.2f no exame\n", exa);
		
	}else if(med>=7 && med<=10){
		printf("\nAprovado\n");
	}
}
