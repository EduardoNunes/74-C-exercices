#include <stdio.h>
#include <locale.h>
#include <string.h>

//Exercício 14, struct.

struct dados{
	char nome[20];
	int idade;
	float peso, alt;
};

typedef struct dados dados;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float magr = 500, baixa = 3, med = 0;	
	int a, b, c;
	dados dad[5];
	
	for(a=0; a<5; a++){
		printf("Informe o nome da pessoa:\n");
		scanf("%s", &dad[a].nome);
		printf("Informe o a idade da pessoa:\n");
		scanf("%d", &dad[a].idade);
		printf("Informe o peso da pessoa:\n");
		scanf("%f", &dad[a].peso);
		printf("Informe a altura da pessoa:\n");
		scanf("%f", &dad[a].alt);
	}
	for(a=0; a<5; a++){
		printf("\nNome: %s\n", dad[a].nome);
		printf("Idade: %d\n", dad[a].idade);
		printf("Peso: %.2f\n", dad[a].peso);
		printf("Altura: %.2f\n", dad[a].alt);
		
		med = med + dad[a].idade;
		
		if(dad[a].peso < magr){
			magr = dad[a].peso;
			b = a;
		}
		if(dad[a].alt < baixa){
			baixa = dad[a].alt;
			c = a;
		}
	}
	printf("\nA pessoa mais magra é: %s\n", dad[b].nome);
	printf("A pessoa mais baixa é: %s\n", dad[c].nome);
	printf("A média das idades é: %.2f\n", med/5);	
}
