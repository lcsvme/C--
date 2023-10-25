#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float x;
	
	printf("Digite um número:");
	scanf("%f", &x);
	
	printf("Você informou o número: %.2f", x);
	
	return 0;
}	
