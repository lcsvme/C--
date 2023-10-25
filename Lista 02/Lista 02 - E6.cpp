#include <stdio.h>
#include <locale.h>
/* Refazer o exercício anterior, solicitando antes o múltiplo a ser testado */

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	int y;
	
	printf("Digite um número inteiro: ");
	scanf("%i", &x);
	
	printf("Digite qual múltiplo deve ser testado: ");
	scanf("%i", &y);
	
	if ( x % y == 0) {
		printf("O número informado '%i' É múltiplo de '%i'. ", x, y);
	} else {
		printf("O número informado '%i' NÃO é múltiplo de '%i'. ", x, y);
	}
	
	return 0;
}
