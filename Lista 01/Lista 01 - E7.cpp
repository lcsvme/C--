#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	float y;
	
	printf("Digite um número inteiro: ");
	scanf("%i", &x);
	
	printf("Digite um número real: ");
	scanf("%f", &y);
	
	printf("Você informou os números %i e %.2f", x, y);
	
	return 0;
}
