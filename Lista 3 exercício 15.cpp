#include <stdio.h>
#include <locale.h>

//Exerc�cio 15, Sal�rio.

main(){
	float sal, bon, aux, sal_nov;
		
	setlocale(LC_ALL,"Portuguese");	
		
	printf("Informe o sal�rio do funcion�rio:\n");
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
	
	printf("\nO sal�rio atualizado �:\n%.2f\n", sal_nov);
}
