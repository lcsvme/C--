#include <stdio.h>
#include <locale.h>
/* Desenvolva um algoritmo que classifique um n�mero inteiro fornecido pelo usu�rio como
par ou �mpar */

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%i", &x);
	
	if ( x % 2 == 0 ) {
		printf("O n�mero informado '%i' � PAR. ", x);
	} else {
		printf("O n�mero informado '%i' � �MPAR. ", x);
	}
	
	return 0;
}
