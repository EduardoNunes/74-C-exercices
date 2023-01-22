#include <stdio.h>
#include <locale.h>

//Exercício 9, soma e média da matriz.

int main(){
	setlocale(LC_ALL,"Portuguese");
		
	int a, b, mat[3][3], som = 0, med=0;
	
 	for(a=0; a<3; a++){
 		for(b=0; b<3; b++){
 			
			printf("insira um número\n");
			scanf("%d", &mat[a][b]);
			
			som = som+mat[a][b];
			med++;
		 }
	}
	med = som/med;
	
	printf("Soma %d, média %d.\n", som, med);
}
