#include <stdio.h>
#include <locale.h>

//Exerc�cio 10, Aluno mais alto.

main(){		
	setlocale(LC_ALL,"Portuguese");
	
	int num, maior, menor, a;
	float alt, alt_maior = 0, alt_menor = 1000;
	
		for(a=0; a<10; a++){
			
			printf("Informe o n�mero do aluno\n");
			scanf("%d", &num);
			printf("Informe a altura do aluno em cent�metros\n");
			scanf("%f", &alt);
			
			if(alt > alt_maior){
				maior = num;
				alt_maior = alt;
			}else if (alt < alt_menor){
				menor = num;
				alt_menor = alt;
			}			
		}
		printf("\nO maior aluno �: %d com %.2f de altura.\nO menor aluno � %d com %.2f de altura.\n", maior, alt_maior, menor, alt_menor);
}
