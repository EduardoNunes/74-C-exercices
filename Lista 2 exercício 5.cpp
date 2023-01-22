#include <stdio.h>
#include <locale.h>

//Exerc�cio 5, fun��o qulowatts.

void quilowatt (float fsal, float fe_cons, float *fkilo, float *fboleto, float *fdesconto);

main(){
	float sal, kilo, e_cons, boleto, desconto;

	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Informe o sal�rio recebido:\n");
	scanf("%f", &sal);
	printf("Informe a quantidade de energia consumida:\n");
	scanf("%f", &e_cons);
	
	quilowatt (sal, e_cons, &kilo, &boleto, &desconto);
	
	printf("O valor do kilowatts �:\n%.2f\n", kilo);
	printf("O valor do boleto sem desconto �:\n%.2f\n", boleto);
	printf("O valor do boleto com desconto �:\n%.2f\n", desconto);
}


void quilowatt (float fsal, float fe_cons, float *fkilo, float *fboleto, float *fdesconto){
	
	*fkilo = fsal/1000;
	*fboleto = *fkilo * fe_cons;
	*fdesconto = *fboleto - ((*fboleto*15)/100);
}
