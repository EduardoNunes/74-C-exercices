#include <stdio.h>
#include <locale.h>

//Exerc�cio 7, n�meros positivos.

main(){		
	setlocale(LC_ALL,"Portuguese");
	
	int num, a=0;
	
	do{
		
		printf("Informe um n�mero\n");
		scanf("%d", &num);
		
		if(num > 0 ){
			a++;
		}
	}while(num!=0);

		printf("A quantidade de n�meros positivos �:\n%d\n", a);		
}
