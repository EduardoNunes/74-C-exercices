#include <stdio.h>
#include <locale.h>

//Exerc�cio 1, vetor 10 posi��esr.

int main(){
	setlocale(LC_ALL,"Portuguese");
		
	int a;
	float som = 0, med, vet[10];

 	for(a=0; a<10; a++)
	 {
	 	printf("Digite um n�mero:\n");
	 	scanf("%f", &vet[a]);
	 	
	 	som = som + vet[a];
	 }
	 
	 med = som/10;
	 
	 printf("\nA soma � %.2f, e a m�dia � %.2f", som, med);
}
