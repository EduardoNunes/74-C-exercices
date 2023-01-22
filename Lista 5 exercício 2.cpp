#include <stdio.h>
#include <locale.h>

//Exercício 1, vetor 10 posiçõesr.

int main(){
	setlocale(LC_ALL,"Portuguese");
		
	int a;
	float som = 0, med, vet[5];

 	for(a=0; a<5; a++)
	 {
	 	printf("Digite um número entre 1 e 1000:\n");
	 	scanf("%f", &vet[a]);
	 }
	 
 	for(a=0; a<5; a++)
	 {
	 	printf("%.2f ", vet[a]/100);
	 }
}
