#include <stdio.h>
#include <locale.h>

//Exerc�cio 1, ler 4 n�meros inteiros.

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int a[4], b, c = 0;
	
	for(b=0; b<4; b++){	
		printf("Digite um n�mero.\n");
		scanf("%d", &a[b]);
	}
	
	for(b=0; b<4; b++){	
	c = a[b] + c;
	}
	
	printf("A soma dos n�meros � %d", c);
	
}
