#include <stdio.h>
#include <locale.h>
/* Elabore um algoritmo que solicite ao usu�rio um n�mero real e ao final imprima na tela se o
n�mero informado � maior que dez, se � menor que dez, ou se � igual a dez */

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float x;
	
	printf("Digite um n�mero real: ");
	scanf("%f", &x);
	
	if ( x > 10) {
		printf("O n�mero real '%f' � MAIOR que 10. ", x);
	} else if ( x == 10 ) {
		printf("O n�mero real '%f' � IGUAL a 10. ", x);
	} else {
		printf("O n�mero real '%f' � MENOR que 10. ", x);
	}
	
	return 0;
}
