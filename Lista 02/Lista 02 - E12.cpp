#include <stdio.h>
#include <locale.h>
/* Elabore um algoritmo que indique se um número digitado está compreendido entre 20 e
90, ou não */

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	
	printf("Digite um número: ");
	scanf("%i", &x);
	
	if ( x >= 20 && x <= 90) {
		printf("O número '%i' está entre 20 e 90. ", x);
	} else {
		printf("O número '%i' NÃO está entre 20 e 90.", x);
	}
}
