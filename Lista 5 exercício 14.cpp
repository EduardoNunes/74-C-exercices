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
		
	int a;
	dados dad[3];
	
	for(a=0; a<3; a++){
		printf("Informe o nome da pessoa:\n");
		scanf("%s", &dad[a].nome);
		printf("Informe o a idade da pessoa:\n");
		scanf("%d", &dad[a].idade);
		printf("Informe o peso da pessoa:\n");
		scanf("%f", &dad[a].peso);
		printf("Informe a altura da pessoa:\n");
		scanf("%f", &dad[a].alt);
	}
	printf("\nPessoa 1:\nNome: %s. Idade %d.\n\n", dad[0].nome, dad[0].idade);
	printf("Pessoa 3:\nPeso: %.2f. Altura %.2f.\n\n", dad[0].peso, dad[0].alt);
}

