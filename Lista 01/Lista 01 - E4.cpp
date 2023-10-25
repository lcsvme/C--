#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	int y;
	
	printf("Digite um número:");
	scanf("%i", &x);
	
	printf("Digite outro número:");
	scanf("%i", &y);
	
	printf("Você informou os números %i e %i", x, y);
	
	return 0;
}
