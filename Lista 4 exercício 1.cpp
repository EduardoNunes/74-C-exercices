#include <stdio.h>
#include <locale.h>

//Exercício 1, Imprimir intervalo de num.

main(){
	int a, b=0;
		
	setlocale(LC_ALL,"Portuguese");	
		
	for(a=1; a<11; a++){
		b = a+b;
	}
	
	printf("A soma é %d:\n", b);
}
