#include <stdio.h>
#include <locale.h>
#include <math.h>

//Exercício 13, menu.

main(){
	int menu, a, b;
	float raiz;
		
	setlocale(LC_ALL,"Portuguese");
	
	printf("Escolha uma opção:\n1 - Somar dois números.\n2 - Calcular a raiz quadrada de um número.\n");
	scanf("%d", &menu);		
	
	switch (menu){
		case 1:
			printf("\nInforme o primeiro número:\n");
			scanf("%d", &a);	
			printf("Informe o segundo número:\n");
			scanf("%d", &b);
			
			menu = a+b;		
			
			printf("A soma dos números é:\n%d\n", menu);			
		break;
		
		case 2:
			printf("\nInforme um número:\n");
			scanf("%d", &a);
			
			raiz = sqrt(a);
			
			printf("A raiz do número digitado é:\n%.2f\n", raiz);			
		break;
	}
}
