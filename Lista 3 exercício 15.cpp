#include <stdio.h>
#include <locale.h>

//Exercício 15, Salário.

main(){
	float sal, bon, aux, sal_nov;
		
	setlocale(LC_ALL,"Portuguese");	
		
	printf("Informe o salário do funcionário:\n");
	scanf("%f", &sal);
	
	if(sal <= 500){
		bon = (sal*5)/100;
		
	}else if(sal > 500 && sal <= 1200){
		bon = (sal*12)/100;
		
	}else 
		bon = 0;
	
	
	if(sal <= 600){
		aux = 150;
		
	}else if(sal > 600){
		aux = 100;
	}
	
	sal_nov = sal + bon + aux;
	
	printf("\nO salário atualizado é:\n%.2f\n", sal_nov);
}
