#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float x;
	
	printf("Digite um n�mero real: ");
	scanf("%f", &x);
	printf("N�mero: %.2f\n", x);
	printf("O dobro deste n�mero: %.2f", x * 2);
	
	return 0;
}
