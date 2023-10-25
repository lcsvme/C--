#include <stdio.h>
#include <locale.h>
/* Elabore um algoritmo que leia um número, e se ele for maior do que 20, imprimir a metade
desse número, caso contrário, imprimir o dobro do número) */

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	
	printf("Digite um número inteiro: ");
	scanf("%i", &x);
	
	if ( x > 20) {
		printf("%i", x / 2);
	} else {
		printf("%i", x * 2);
	}
	
	return 0;
}

