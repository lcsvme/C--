#include <stdio.h>
#include <locale.h>
/* Refazer o exerc�cio anterior, solicitando antes o m�ltiplo a ser testado */

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	int y;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%i", &x);
	
	printf("Digite qual m�ltiplo deve ser testado: ");
	scanf("%i", &y);
	
	if ( x % y == 0) {
		printf("O n�mero informado '%i' � m�ltiplo de '%i'. ", x, y);
	} else {
		printf("O n�mero informado '%i' N�O � m�ltiplo de '%i'. ", x, y);
	}
	
	return 0;
}
