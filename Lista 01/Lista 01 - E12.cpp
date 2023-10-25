#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	
	printf("Digite um número:");
	scanf("%i", &x);
	
	int quadrado = x * x;
	int cubo = x * x * x;
	
	printf("\n\nO quadrado de %i é: %i\n", x, quadrado);
	printf("O cubo de %i é: %i", x, cubo);
	
	return 0;	
}
