#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	float x;
	float y;
	
	printf("Digite um n�mero real: ");
	scanf("%f", &x);
	
	printf("Digite outro n�mero real: ");
	scanf("%f", &y);
	
	float soma = x + y;
	
	printf("A soma de %.2f e %.2f correspondem a: %.2f", x, y, soma);
	
	return 0;
}
