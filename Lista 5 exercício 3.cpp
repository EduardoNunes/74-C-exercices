#include <stdio.h>
#include <locale.h>

//Exerc�cio 3, Chave.

int main(){
	setlocale(LC_ALL,"Portuguese");
		
	int a, chave, x = 0;
	float vet[10];

 	for(a=0; a<10; a++)
	 {
	 	printf("Digite um n�mero:\n");
	 	scanf("%f", &vet[a]);
	 }
	 
	 	printf("Digite a chave de busca.\n");
	 	scanf("%d", &chave);
	 
 	for(a=0; a<10; a++)
	 {
		if(vet[a] == chave){
			printf("\nChave encontrada na posi��o %d.\n", a);
			x++;
		}
	 }
	if(x==0){
		printf("\nChave n�o encontrada.\n");
	}
}
