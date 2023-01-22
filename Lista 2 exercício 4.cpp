#include <stdio.h>
#include <locale.h>

//Exercício 4, função altura da escada.

int altura(int cent, float metro);

main(){
	int deg, a;
	float quant;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Informe a altura dos degraus em centímetros:\n");
	scanf("%d", &deg);
	printf("Informe a altura que você quer alcançar em metros:\n");
	scanf("%f", &quant);
	
	a = altura(deg, quant);
	
	printf("A quantidade de degraus é:\n%d", a);

}

int altura(int cent, float metro){
	return (metro*100)/cent;
}
