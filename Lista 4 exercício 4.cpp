#include <stdio.h>
#include <locale.h>

//Exerc�cio 4, tabuada.

main(){
	int a, b, c;
		
	setlocale(LC_ALL,"Portuguese");	

	printf("Digite o n�mero:\n");
	scanf("%d", &a);
	
	for(b=0; b<=10; b++){
		c = a*b;
		printf("%d x %d = %d\n", a, b, c);
	}
}
