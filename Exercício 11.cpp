#include <stdio.h>
#include <locale.h>

//Exercício 11, segundos.

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int tempo, hora, min, seg=0;
	
	printf("Informe os segundos:\n");
	scanf("%d", &tempo);
	
	hora = tempo/3600;
	min = (tempo - (hora*3600))/60;
	seg = tempo%60;
	
	printf("\nAs horas são:\n%d", hora);
	printf("\nOs minutos são:\n%d", min);
	printf("\nOs segundos são:\n%d", seg);
}
