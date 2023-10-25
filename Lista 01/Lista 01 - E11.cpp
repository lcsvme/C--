#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float x;
	
	printf("Digite um número real: ");
	scanf("%f", &x);
	printf("Número: %.2f\n", x);
	printf("O dobro deste número: %.2f", x * 2);
	
	return 0;
}
