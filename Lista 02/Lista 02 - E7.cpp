#include <stdio.h>
#include <locale.h>
/* Desenvolva um algoritmo que classifique um número inteiro fornecido pelo usuário como
par ou ímpar */

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	
	printf("Digite um número inteiro: ");
	scanf("%i", &x);
	
	if ( x % 2 == 0 ) {
		printf("O número informado '%i' é PAR. ", x);
	} else {
		printf("O número informado '%i' é ÍMPAR. ", x);
	}
	
	return 0;
}
