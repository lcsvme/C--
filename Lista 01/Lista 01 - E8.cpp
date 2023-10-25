#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char letra;
	
	printf("Digite a primeira letra do seu nome: ");
	scanf("%c", &letra);
	
	printf("Você digitou %c!", letra);
	
	return 0;
}
