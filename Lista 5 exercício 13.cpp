#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Exercício 13, notas dos alunos.

int main(){
	setlocale(LC_ALL,"Portuguese");
		
	int a, b, pro, pro1 = 0, pro2 = 0, pro3 = 0; 
	float mat[10][3], menor = 11;
	
 	for(a=0; a<10; a++){
 		for(b=0; b<3; b++){
 			
			printf("insira a nota %d do aluno %d\n", b+1, a+1);
			scanf("%f", &mat[a][b]);
		}
	}
 	for(a=0; a<10; a++){	
	 menor = 11;	  		
 		for(b=0; b<3; b++){
 			
			if(mat[a][b] < menor){
				menor = mat[a][b];
				pro = b;
			}
		}
 		printf("Aluno %d. Prova de menor nota: %d.\n", a+1, pro+1);
 		if(pro == 0){
 			pro1++;
		 }else if(pro == 1){
		 	pro2++;
		 }else if(pro == 2){
		 	pro3++;
		 }
	}
	printf("\nA quantidade de alunos com notas baixas nas respectivas provas:\nProva 1: %d.\nProva 2: %d.\nProva 3: %d.\n\n", pro1, pro2, pro3);
}
