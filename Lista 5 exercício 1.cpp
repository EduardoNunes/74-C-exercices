#include <stdio.h>
#include <locale.h>

//Exercício 1, vetor 10 posiçõesr.

int main(){
	setlocale(LC_ALL,"Portuguese");
		
	int a;
	float som = 0, med, vet[10];

 	for(a=0; a<10; a++)
	 {
	 	printf("Digite um número:\n");
	 	scanf("%f", &vet[a]);
	 	
	 	som = som + vet[a];
	 }
	 
	 med = som/10;
	 
	 printf("\nA soma é %.2f, e a média é %.2f", som, med);
}
