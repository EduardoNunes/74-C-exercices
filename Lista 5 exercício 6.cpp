#include <stdio.h>
#include <locale.h>

//Exercício 6, Positocs e negativos.

int main(){
	setlocale(LC_ALL,"Portuguese");
		
	int a, vet[8], pos[8], neg[8], b = 0, c = 0;
	
 	for(a=0; a<8; a++)
	 {
	 	printf("Digite um número:\n");
	 	scanf("%d", &vet[a]);
	 	
	 	if(vet[a] < 0){
	 		neg[b] = vet[a];
	 		b++;
	 		
		 }else if(vet[a] > 0){
		 	pos[c] = vet[a];
		 	c++;
		 }
	 
	 }
	 for(a=0; a<c; a++){
	 	printf("%d ", pos[a]);
	}
	
	printf("\n");
		
	 for(a=0; a<b; a++){
		 printf("%d ", neg[a]);		
	 } 
}
	 
	 
