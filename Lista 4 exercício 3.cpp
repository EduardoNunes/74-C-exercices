#include <stdio.h>
#include <locale.h>

//Exercício 3, imprimir fatorial.

main(){
	int a, b = 1, c;
		
	setlocale(LC_ALL,"Portuguese");	

	printf("Digite o número:\n");
	scanf("%d", &a);
	
	while (a!=0){
		b = a * b;
		a--;
	}
	
	printf("\nO fatorial é:\n%d\n", b);
}

