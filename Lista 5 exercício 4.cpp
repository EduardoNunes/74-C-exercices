#include <stdio.h>
#include <locale.h>

//Exerc�cio 4, primo.

int main(){
	setlocale(LC_ALL,"Portuguese");
		
	int a, b=2, vet[9], c;

 	for(a=0; a<9; a++)
	 {
	 	printf("Digite um n�mero:\n");
	 	scanf("%d", &vet[a]);
	 }
	 
 	for(a=0; a<9; a++)
	 {
	 	b = 2;
		do{
			c = vet[a] % b;
			
			if(b != vet[a] && c == 0){
				printf("%d N�o � primo\n", vet[a]);
				break;		
			}
	
			if(c == 0 && b == vet[a]){
				printf("%d � primo, posi��o %d\n", vet[a], a);
				break;
			}
	
			b++;
		}while(b<=vet[a]);
	 }
	 
}
