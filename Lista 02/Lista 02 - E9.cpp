#include <stdio.h>
#include <locale.h>
/* Elabore um algoritmo que leia dois n�meros inteiros e realize a adi��o; caso o resultado
seja maior que 10, imprima o quadrado do resultado, caso contr�rio, imprima a metade dele */

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	int y;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%i", &x);
	
	printf("Digite outro n�mero inteiro: ");
	scanf("%i", &y);
	
	int z = x + y;
	
	if ( z > 10) {
		printf("%i", z * z);
	} else {
		printf("%i", z / 2);
	}
	
	return 0;
}
