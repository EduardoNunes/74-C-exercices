#include <stdio.h>
#include <locale.h>

//Exercício 5, intercalção.

int main(){
	setlocale(LC_ALL,"Portuguese");
		
	int a, vet1[10], vet2[10];

	
 	for(a=0; a<10; a++)
	 {
	 	printf("Digite um número:\n");
	 	scanf("%d", &vet1[a]);
	 }

 	for(a=0; a<10; a++)
	 {
	 	printf("Digite um número:\n");
	 	scanf("%d", &vet2[a]);
	 }
	 
 	for(a=0; a<10; a++)
	 {
	 	printf("%d ", vet1[a]);
	 	printf("%d ", vet2[a]);
	 }
}
