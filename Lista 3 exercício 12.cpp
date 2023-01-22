#include <stdio.h>
#include <locale.h>

//Exercício 12, crescente, decrescente e maior no meio.

main(){
	int i;
	float a, b, c;
		
	setlocale(LC_ALL,"Portuguese");	
		
	printf("Informe o vetor A:\n");
	scanf("%f", &a);	
	printf("Informe o vetor B:\n");
	scanf("%f", &b);
	printf("Informe o vetor C:\n");
	scanf("%f", &c);
	printf("Informe a operação a ser feita:\n1 para crescente.\n2 para decrescente.\n3 para maior no meio.\n");
	scanf("%d", &i);
	
	switch(i){
		case 1:
			if(a<b && a<c){
				if(b<c){
					printf("\n%f, %f, %f\n", a, b, c);
				}else if(c<b){
					printf("\n%f, %f, %f\n", a, c, b);
				}
			}else if(b<a && b<c){
				if(a<c){
					printf("\n%f, %f, %f\n", b, a, c);
				}else if(c<a){
					printf("\n%f, %f, %f\n", b, c, a);
				}	
			}else if(c<a && c<b){
				if(a<b){
					printf("\n%f, %f, %f\n", c, a, b);
				}else if(b<a){
					printf("\n%f, %f, %f\n", c, b, a);
				}
		}break;
		
		case 2:
			if(a>b && a>c){
				if(b>c){
					printf("\n%f, %f, %f\n", a, b, c);
				}else if(c>b){
					printf("\n%f, %f, %f\n", a, c, b);
				}
			}else if(b>a && b>c){
				if(a>c){
					printf("\n%f, %f, %f\n", b, a, c);
				}else if(c>a){
					printf("\n%f, %f, %f\n", b, c, a);
				}	
			}else if(c>a && c>b){
				if(a>b){
					printf("\n%f, %f, %f\n", c, a, b);
				}else if(b>a){
					printf("\n%f, %f, %f\n", c, b, a);
				}
		}break;
		
		case 3:
			if(a>b && a>c){
					printf("\n%f, %f, %f\n", b, a, c);				
			}else if(b>a && b>c){
					printf("\n%f, %f, %f\n", a, b, c);					
			}else if(c>a && c>b){
					printf("\n%f, %f, %f\n", a, c, b);
				}
		break;
			
	}
}
