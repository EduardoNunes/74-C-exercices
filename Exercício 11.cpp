#include <stdio.h>
#include <locale.h>

//Exerc�cio 11, segundos.

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int tempo, hora, min, seg=0;
	
	printf("Informe os segundos:\n");
	scanf("%d", &tempo);
	
	hora = tempo/3600;
	min = (tempo - (hora*3600))/60;
	seg = tempo%60;
	
	printf("\nAs horas s�o:\n%d", hora);
	printf("\nOs minutos s�o:\n%d", min);
	printf("\nOs segundos s�o:\n%d", seg);
}
