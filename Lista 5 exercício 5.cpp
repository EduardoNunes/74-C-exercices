#include <stdio.h>
#include <locale.h>

//Exerc�cio 5, intercal��o.

int main(){
	setlocale(LC_ALL,"Portuguese");
		
	int a, vet1[10], vet2[10];

	
 	for(a=0; a<10; a++)
	 {
	 	printf("Digite um n�mero:\n");
	 	scanf("%d", &vet1[a]);
	 }

 	for(a=0; a<10; a++)
	 {
	 	printf("Digite um n�mero:\n");
	 	scanf("%d", &vet2[a]);
	 }
	 
 	for(a=0; a<10; a++)
	 {
	 	printf("%d ", vet1[a]);
	 	printf("%d ", vet2[a]);
	 }
}
