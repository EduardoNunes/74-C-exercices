#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Exerc�cio 11, matriz com chave de busca.

int main(){
	setlocale(LC_ALL,"Portuguese");
		
	int a, b, mat[3][3], cha, x = 0;
	
 	for(a=0; a<3; a++){
 		for(b=0; b<3; b++){
 			
			printf("insira um n�mero\n");
			scanf("%d", &mat[a][b]);
		 }
	}
	printf("Informa a chave de busca:\n");
	scanf("%d", &cha);
	
 	for(a=0; a<3; a++){
 		for(b=0; b<3; b++){
 			
			if(mat[a][b] == cha){
				printf("Chave na linha %d, coluna %d.\n\n", a, b);
				x++;
				goto fim;
			}
		 }
	}
	if(x == 0){
		printf("Chave n�o encontrada.\n\n");
	}
	fim:
		system("pause");
}
