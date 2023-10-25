#include <stdio.h>
#include <locale.h>
/* Elabore um algoritmo que leia dois números inteiros e realize a adição; caso o resultado
seja maior que 10, imprima o quadrado do resultado, caso contrário, imprima a metade dele */

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	int y;
	
	printf("Digite um número inteiro: ");
	scanf("%i", &x);
	
	printf("Digite outro número inteiro: ");
	scanf("%i", &y);
	
	int z = x + y;
	
	if ( z > 10) {
		printf("%i", z * z);
	} else {
		printf("%i", z / 2);
	}
	
	return 0;
}
