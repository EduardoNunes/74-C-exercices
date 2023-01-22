#include <stdio.h>
#include <locale.h>
#include <string.h>

//Exercício 14, struct.

struct produto{
	int cod, quant;
	char nome[20];
	float val;
};

typedef struct produto produto;

int main(){
	setlocale(LC_ALL,"Portuguese");
		
	int codigo, a;
	produto prod[5];
	
	for(a=0; a<5; a++){
		printf("Informe o código do produto:\n");
		scanf("%d", &prod[a].cod);
		printf("Informe o nome do produto:\n");
		scanf("%s", &prod[a].nome);
		printf("Informe o valor do produto:\n");
		scanf("%d", &prod[a].quant);
		printf("Informe a quantidade desse produto:\n");
		scanf("%f", &prod[a].val);
	}
	
	printf("\nDigite o código do produto que deseja buscar:\n");
	scanf("%d", &codigo);
	
	for(a=0; a<5; a++){
		if(codigo == prod[a].cod){
			printf("\n%d\n%s\n%d\n%.2f\n", prod[a].cod, prod[a].nome, prod[a].quant, prod[a].val);
			a += 10;
		}
	}
	if(a < 8){
		printf("\nProduto não encontrado\n");
	}
}
