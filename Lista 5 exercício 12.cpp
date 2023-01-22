#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Exercício 12, soma das linhas.

int main(){
	setlocale(LC_ALL,"Portuguese");
		
	int a, b, mat[3][5], vet[3] = {0, 0, 0}, x = 0;
	
 	for(a=0; a<3; a++){
 		for(b=0; b<5; b++){
 			
			printf("insira um número\n");
			scanf("%d", &mat[a][b]);
			
			switch(a){
				case 0:
					vet[a] = mat[a][b] + vet[a];
					break;
				
				case 1:
					vet[a] = mat[a][b] + vet[a];
					break;

				case 2:
					vet[a] = mat[a][b] + vet[a];
					break;
			}
		 }
	}
 	for(a=0; a<3; a++){
 		for(b=0; b<5; b++){ 			
 		
 			mat[a][b] = mat[a][b] * vet[a];
 			printf("%d ", mat[a][b]);
		}
		printf("\n");
	}
}
