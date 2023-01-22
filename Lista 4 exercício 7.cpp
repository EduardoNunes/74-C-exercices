#include <stdio.h>
#include <locale.h>

//Exercício 7, números positivos.

main(){		
	setlocale(LC_ALL,"Portuguese");
	
	int num, a=0;
	
	do{
		
		printf("Informe um número\n");
		scanf("%d", &num);
		
		if(num > 0 ){
			a++;
		}
	}while(num!=0);

		printf("A quantidade de números positivos é:\n%d\n", a);		
}
