#include <stdio.h>
#include <locale.h>

//Exercício 2, média.

main(){
	setlocale(LC_ALL,"Portuguese");
	
	float a[3], media = 0;
	int b;
	
	for(b=0; b<3; b++){
		printf("Digite uma nota:\n");
		scanf("%f", &a[b]);
		
		media = media + a[b];
	}
	
		printf("A média das notas é:\n%.2f", media/3);
			
}
