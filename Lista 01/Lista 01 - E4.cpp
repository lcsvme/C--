#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	int y;
	
	printf("Digite um n�mero:");
	scanf("%i", &x);
	
	printf("Digite outro n�mero:");
	scanf("%i", &y);
	
	printf("Voc� informou os n�meros %i e %i", x, y);
	
	return 0;
}
