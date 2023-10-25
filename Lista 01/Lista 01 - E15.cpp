#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	float x;
	float y;
	
	printf("Digite um número real: ");
	scanf("%f", &x);
	
	printf("Digite outro número real: ");
	scanf("%f", &y);
	
	float mais = x + y;
	float menos = x - y;
	float vezes = x * y;
	float divide = x / y;
	
	printf("\n\nA adição de %.2f e %.2f é: %.2f", x, y, mais);
	
	printf("\nA subtração de %.2f e %.2f é: %.2f", x, y, menos);
	
	printf("\nA multiplicação de %.2f e %.2f é: %.2f", x, y, vezes);
	
	printf("\nA divisão de %.2f e %.2f é: %.2f", x, y, divide);
	
	return 0;
}
