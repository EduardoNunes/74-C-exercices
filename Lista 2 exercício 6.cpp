#include <stdio.h>
#include <locale.h>

//Exerc�cio 6, fun��o n�mero real.

void numero_real(float freal, int *freal_i, float *freal_frac);

main(){
	float real, real_frac;
	int real_i;

	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Informe um n�mero real:\n");
	scanf("%f", &real);
	
	numero_real (real, &real_i, &real_frac);
	
	printf("A parte inteira �:\n%d\n", real_i);	
	printf("A parte fracionada �:\n%.2f\n", real_frac);

}

void numero_real(float freal, int *freal_i, float *freal_frac){
	*freal_i = freal;
	*freal_frac = freal - (float)*freal_i;
}
