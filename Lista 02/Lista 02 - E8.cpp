#include <stdio.h>
#include <locale.h>
/* Elabore um algoritmo que leia um n�mero, e se ele for maior do que 20, imprimir a metade
desse n�mero, caso contr�rio, imprimir o dobro do n�mero) */

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%i", &x);
	
	if ( x > 20) {
		printf("%i", x / 2);
	} else {
		printf("%i", x * 2);
	}
	
	return 0;
}

