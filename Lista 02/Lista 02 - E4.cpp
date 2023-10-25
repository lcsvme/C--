#include <stdio.h>
#include <locale.h>
/* Elabore um algoritmo que solicite ao usuário um número real e ao final imprima na tela se o
número informado é positivo, negativo ou nulo (zero) */

int main(){
	setlocale(LC_ALL, "Portuguese");

	float x;
	
	printf("Digite um número real: ");
	scanf("%f", &x);
	
	if ( x > 0 ) {
		printf("O número informado '%f' é POSITIVO. ", x);
	} else if ( x == 0 ){
		printf("O número informado '%f' é NULO. ", x);
	} else {
		printf ("O número informado '%f' é NEGATIVO. ", x);
	}
	
	return 0;
}
