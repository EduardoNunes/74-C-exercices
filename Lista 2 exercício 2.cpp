#include <stdio.h>
#include <locale.h>
#include <math.h>

//Exerc�cio 2, fun��o sal�rio.

void horatrab();

float salario, horas;


main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Informe o n�mero de horas trabalhadas:\n");
	scanf("%f", &horas);
	printf("Informe o valor do sal�rio m�nimo:\n");
	scanf("%f", &salario);
	
	horatrab();
}

void horatrab(){
	float htrab, bruto, imp, receber;
	
	htrab = salario/2;
	bruto = horas*htrab;
	imp = (bruto*3)/100;
	receber = bruto-imp;
	
	printf("\nO sal�rio a receber �:\n%.2f\n", receber);
}
