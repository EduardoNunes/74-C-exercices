#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Exerc�cio 16, imprimir par.

int main(){
	setlocale(LC_ALL,"Portuguese");
		
	int x, a, b, c, z;

 	for(c=0; c<5; c++){
 		
	 	printf("\nInsira o primeiro n�mero:\n");
	 	scanf("%d", &a);
	 	printf("Insira o segundo n�mero:\n");
	 	scanf("%d", &b);
 		
 		z=0;
 		
	 	for(x=a; x<=b; x++){

	 		if((a+z) % 2 == 0){
	 			
	 			printf("%d ", a+z);
			 }
			z++;	 		
		}
	}
}
