#include <stdio.h>
#include <locale.h>

//Exerc�cio 4, fun��o altura da escada.

int altura(int cent, float metro);

main(){
	int deg, a;
	float quant;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Informe a altura dos degraus em cent�metros:\n");
	scanf("%d", &deg);
	printf("Informe a altura que voc� quer alcan�ar em metros:\n");
	scanf("%f", &quant);
	
	a = altura(deg, quant);
	
	printf("A quantidade de degraus �:\n%d", a);

}

int altura(int cent, float metro){
	return (metro*100)/cent;
}
