#include <stdio.h>
#include <locale.h>

//Exercício 7, matriz 3x3.

int main(){
	setlocale(LC_ALL,"Portuguese");
		
	int a, b, c = 0, mat[3][3];
	
 	for(a=0; a<3; a++){

 		for(b=0; b<3; b++){
 			mat[a][b] = c;
 			printf("%d ", mat[a][b]);
			 c++;	
		 }
		 printf("\n");
	}
}
	 	
