#include <stdio.h>
#include <locale.h>

//Exerc�cio 1, vetor 10 posi��esr.

int main(){
	setlocale(LC_ALL,"Portuguese");
		
	int a;
	float som = 0, med, vet[5];

 	for(a=0; a<5; a++)
	 {
	 	printf("Digite um n�mero entre 1 e 1000:\n");
	 	scanf("%f", &vet[a]);
	 }
	 
 	for(a=0; a<5; a++)
	 {
	 	printf("%.2f ", vet[a]/100);
	 }
}
