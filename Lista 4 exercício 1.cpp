#include <stdio.h>
#include <locale.h>

//Exerc�cio 1, Imprimir intervalo de num.

main(){
	int a, b=0;
		
	setlocale(LC_ALL,"Portuguese");	
		
	for(a=1; a<11; a++){
		b = a+b;
	}
	
	printf("A soma � %d:\n", b);
}
