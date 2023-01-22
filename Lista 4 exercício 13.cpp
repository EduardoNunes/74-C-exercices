#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Exercício 13, tabuada.

main(){		
	setlocale(LC_ALL,"Portuguese");
	
	int a, b, c;
	
	for(a=1; a<11; a++){
		for(b=1; b<11; b++){
			c = a*b;
			printf("%d x %d = %d\n", a, b, c);
		}
		printf("\n");
	}
}
		
