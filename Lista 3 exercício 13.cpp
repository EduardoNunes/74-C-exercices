#include <stdio.h>
#include <locale.h>
#include <math.h>

//Exerc�cio 13, menu.

main(){
	int menu, a, b;
	float raiz;
		
	setlocale(LC_ALL,"Portuguese");
	
	printf("Escolha uma op��o:\n1 - Somar dois n�meros.\n2 - Calcular a raiz quadrada de um n�mero.\n");
	scanf("%d", &menu);		
	
	switch (menu){
		case 1:
			printf("\nInforme o primeiro n�mero:\n");
			scanf("%d", &a);	
			printf("Informe o segundo n�mero:\n");
			scanf("%d", &b);
			
			menu = a+b;		
			
			printf("A soma dos n�meros �:\n%d\n", menu);			
		break;
		
		case 2:
			printf("\nInforme um n�mero:\n");
			scanf("%d", &a);
			
			raiz = sqrt(a);
			
			printf("A raiz do n�mero digitado �:\n%.2f\n", raiz);			
		break;
	}
}
