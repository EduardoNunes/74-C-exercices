#include <stdio.h>
#include <locale.h>

//Exerc�cio 10, multiplica��o pelo maior elemento.

int main(){
	setlocale(LC_ALL,"Portuguese");
		
	int a, b, mat[2][2], maior = 0, mult;
	
 	for(a=0; a<2; a++){
 		for(b=0; b<2; b++){
 			
			printf("insira um n�mero\n");
			scanf("%d", &mat[a][b]);
			
			if(mat[a][b] > maior);
			maior = mat[a][b];
		 }
	}
	
 	for(a=0; a<2; a++){
 		for(b=0; b<2; b++){
			
			mult = maior*mat[a][b];	
			printf("%d ", mult);
		 }
		 printf("\n");
	}
}
