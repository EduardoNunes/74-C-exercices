#include <stdio.h>
#include <locale.h>

//Exerc�cio 3, imprimir fatorial.

main(){
	int a, b = 1, c;
		
	setlocale(LC_ALL,"Portuguese");	

	printf("Digite o n�mero:\n");
	scanf("%d", &a);
	
	while (a!=0){
		b = a * b;
		a--;
	}
	
	printf("\nO fatorial �:\n%d\n", b);
}

