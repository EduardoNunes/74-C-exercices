#include <stdio.h>
#include <locale.h>

//Exercício 14, Hora.

main(){
	int hora1, min1, hora2, min2, res_hora, res_min;
		
	setlocale(LC_ALL,"Portuguese");	
		
	printf("Informe a hora do início do jogo:\n");
	scanf("%d", &hora1);	
	printf("Informe os minutos do início do jogo:\n");
	scanf("%d", &min1);
	printf("Informe a hora do fim do jogo:\n");
	scanf("%d", &hora2);	
	printf("Informe os minutos do fim do jogo:\n");
	scanf("%d", &min2);
	
	if(hora1 > hora2){
		res_hora = 24 - (hora1-hora2);
	}
	if(hora1 < hora2){
		res_hora = hora2-hora1;	
	}
	if(min1 > min2){
		res_min = 60 - (min1-min2);
	}
	if(min1 < min2){
		res_min = min2-min1;
	}
	printf("\nO jogo durou %d horas e %d minutos.\n", res_hora, res_min);	
}

	
