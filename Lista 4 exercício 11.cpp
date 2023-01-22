#include <stdio.h>
#include <locale.h>

//Exercício 10, Aluno mais alto.

main(){		
	setlocale(LC_ALL,"Portuguese");
	
	int fib1 = 1, fib2 = 0, fib3 = 0, a;
		
	printf("%d ", fib2);

	for(a=0; a<7; a++){	
			
		printf("%d ", fib1);
		
		fib3 = fib1 + fib2;
		fib2 = fib1;
		fib1 = fib3;
	}
}

