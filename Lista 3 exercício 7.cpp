#include <stdio.h>
#include <locale.h>

//Exercício 7, média ponderada.

main(){
	float lab, sem, fin, med;
		
	setlocale(LC_ALL,"Portuguese");
	
	printf("Insira a nota do trabalho de laboratório:\n");
	scanf("%f", &lab);		
	printf("Insira a nota da avaliação semestral:\n");
	scanf("%f", &sem);	
	printf("Insira a nota do exame final\n");
	scanf("%f", &fin);

	med = ((lab*2)+(sem*3)+(fin*5))/(2+3+5);
	
	if(med<5){
		printf("\nConceito E\n");
	}else if(med >= 5 && med < 6){
		printf("\nConceito D\n");		
	}else if (med>=6 && med < 7){
		printf("\nConceito C\n");
	}else if (med>=7 && med < 8){
		printf("\nConceito B\n");
	}else if (med >= 8){
		printf("\nConceito A\n");
	}
}
