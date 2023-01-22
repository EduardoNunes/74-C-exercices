#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
		
	int num, a, b;
 	float e = 1, fat = 1;
 
 	printf("Insira um número:\n");
 	scanf("%d", &num);
	 
		for(a=1; a<=num; a++){
			
			for(b=1; b<=a; b++){					
				fat = fat * (float)b;
			}
				
			e = e + (1/fat);
		}
	 
	 printf("Resultado: %f.\n", e);
}

