#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	float y;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%i", &x);
	
	printf("Digite um n�mero real: ");
	scanf("%f", &y);
	
	printf("Voc� informou os n�meros %i e %.2f", x, y);
	
	return 0;
}
