#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float c;
	
	printf("Digite uma temperatura em Celsius: ");
	scanf("%f", &c);
	
	printf("A temperatura correspondente em Farenheit é: %f", c * 1.8 + 32);
	
	return 0;	
}
