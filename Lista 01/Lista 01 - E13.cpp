#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	int y;
	
	printf("Digite um n�mero: ");
	scanf("%i", &x);
	
	printf("Digite outro n�mero: ");
	scanf("%i", &y);
	
	int soma = x + y;
	
	printf("O n�mero %i e %i somados correspondem a %i", x, y, soma);
	
	return 0;
}
