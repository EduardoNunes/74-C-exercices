#include <stdio.h>
#include <locale.h>

//Exerc�cio 3, impar ou par.

main(){
	int num, a;
		
	setlocale(LC_ALL,"Portuguese");
	
	printf("Informe um n�mero inteiro:\n");
	scanf("%d", &num);
	
	a = num % 2;
	
	if(a==0){
		printf("\nO n�mero � par.\n");
	}else
		printf("\nO n�mero � �mpar.\n");
}
