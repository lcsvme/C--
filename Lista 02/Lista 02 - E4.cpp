#include <stdio.h>
#include <locale.h>
/* Elabore um algoritmo que solicite ao usu�rio um n�mero real e ao final imprima na tela se o
n�mero informado � positivo, negativo ou nulo (zero) */

int main(){
	setlocale(LC_ALL, "Portuguese");

	float x;
	
	printf("Digite um n�mero real: ");
	scanf("%f", &x);
	
	if ( x > 0 ) {
		printf("O n�mero informado '%f' � POSITIVO. ", x);
	} else if ( x == 0 ){
		printf("O n�mero informado '%f' � NULO. ", x);
	} else {
		printf ("O n�mero informado '%f' � NEGATIVO. ", x);
	}
	
	return 0;
}
