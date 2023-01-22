#include <stdio.h>
#include <locale.h>

//Exercício 5, Hermes e Renato.

main(){
	float cha = 140, bos = 145, anos = 0;
		
	setlocale(LC_ALL,"Portuguese");	

	do{
		cha = cha + 2.1;
		bos = bos + 1.1;
		anos++;
	}while (cha <= bos);
	
	printf("Em %.0f anos.\n", anos);
}
