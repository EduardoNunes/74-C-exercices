#include <stdio.h>
#include <locale.h>

//Exercício 8, Diagonal principal.

int main(){
	setlocale(LC_ALL,"Portuguese");
		
	int a, b, mat[3][3];
	
 	for(a=0; a<3; a++){
 		for(b=0; b<3; b++){
 			
			printf("insira um número\n");
			scanf("%d", &mat[a][b]);
		 }
	}
 	for(a=0; a<3; a++){
 		for(b=0; b<3; b++){
 			
 			if(a == b){
 				printf("%d ", mat[a][b]);
			 }
			 else if(a != b){
			 	mat[a][b] = 0;
			 	printf("%d ", mat[a][b]);

			 }			 
		}
		printf("\n");
	}
}
