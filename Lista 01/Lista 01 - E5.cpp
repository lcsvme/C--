#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float x;
	
	printf("Digite um n�mero:");
	scanf("%f", &x);
	
	printf("Voc� informou o n�mero: %.2f", x);
	
	return 0;
}	
