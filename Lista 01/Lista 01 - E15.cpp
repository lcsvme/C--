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
	
	float mais = x + y;
	float menos = x - y;
	float vezes = x * y;
	float divide = x / y;
	
	printf("\n\nA adi��o de %.2f e %.2f �: %.2f", x, y, mais);
	
	printf("\nA subtra��o de %.2f e %.2f �: %.2f", x, y, menos);
	
	printf("\nA multiplica��o de %.2f e %.2f �: %.2f", x, y, vezes);
	
	printf("\nA divis�o de %.2f e %.2f �: %.2f", x, y, divide);
	
	return 0;
}
