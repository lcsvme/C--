#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	
	printf("Digite um n�mero:");
	scanf("%i", &x);
	
	int quadrado = x * x;
	int cubo = x * x * x;
	
	printf("\n\nO quadrado de %i �: %i\n", x, quadrado);
	printf("O cubo de %i �: %i", x, cubo);
	
	return 0;	
}
