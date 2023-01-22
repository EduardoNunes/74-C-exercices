#include <stdio.h>
#include <locale.h>

//Exercício 6, função número real.

void numero_real(float freal, int *freal_i, float *freal_frac);

main(){
	float real, real_frac;
	int real_i;

	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Informe um número real:\n");
	scanf("%f", &real);
	
	numero_real (real, &real_i, &real_frac);
	
	printf("A parte inteira é:\n%d\n", real_i);	
	printf("A parte fracionada é:\n%.2f\n", real_frac);

}

void numero_real(float freal, int *freal_i, float *freal_frac){
	*freal_i = freal;
	*freal_frac = freal - (float)*freal_i;
}
