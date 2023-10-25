#include <stdio.h>
#include <locale.h>
/* Elabore um algoritmo que solicite ao usuário um número real e ao final imprima na tela se o
número informado é maior que dez, se é menor que dez, ou se é igual a dez */

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float x;
	
	printf("Digite um número real: ");
	scanf("%f", &x);
	
	if ( x > 10) {
		printf("O número real '%f' é MAIOR que 10. ", x);
	} else if ( x == 10 ) {
		printf("O número real '%f' é IGUAL a 10. ", x);
	} else {
		printf("O número real '%f' é MENOR que 10. ", x);
	}
	
	return 0;
}
