#include <stdio.h>
#include <locale.h>
#include <math.h>

//Exercício 11, Bhaskara.

main(){
	int a, b, c, delt, bask1, bask2;
		
	setlocale(LC_ALL,"Portuguese");
	
	printf("Informe a:\n");
	scanf("%d", &a);		
	printf("Informe b:\n");
	scanf("%d", &b);	
	printf("Informe c:\n");
	scanf("%d", &c);
	
	delt = (b*b)-(4*a*c);
	
	bask1 = (-b + sqrt(delt)) / (2*a);
	bask2 = (-b - sqrt(delt)) / (2*a);
	
	printf("\nResultado positivo:\n%d\n", bask1);	
	printf("Resultado negativo:\n%d\n", bask2);
}
