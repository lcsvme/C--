#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char cor[20];
	
	printf("Digite sua cor preferida: ");
	scanf("%s", &cor);
	
	printf("Sua cor preferida é: %s", cor);
	
	return 0;
}
