#include <stdio.h>
#include <locale.h>

//Exercício 2, imprimir intervalo de num.

main(){
	int a, b, c;
		
	setlocale(LC_ALL,"Portuguese");	

	printf("Digite o primeiro número:\n");
	scanf("%d", &a);
	printf("Digite o primeiro número:\n");
	scanf("%d", &b);
		
	c = a+1;
		
	while(c<b){
		printf("%d, ", c);
		c++;
	}
}
