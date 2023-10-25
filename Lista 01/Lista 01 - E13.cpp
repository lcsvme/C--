#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	int y;
	
	printf("Digite um número: ");
	scanf("%i", &x);
	
	printf("Digite outro número: ");
	scanf("%i", &y);
	
	int soma = x + y;
	
	printf("O número %i e %i somados correspondem a %i", x, y, soma);
	
	return 0;
}
