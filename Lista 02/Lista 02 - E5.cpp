#include <stdio.h>
#include <locale.h>
/* Elabore um algoritmo que leia um n�mero inteiro e imprima uma das mensagens: � m�ltiplo
de 3, ou, n�o � m�ltiplo de 3 */

int main(){
	setlocale(LC_ALL, "Portuguese");

	int x;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%i", &x);
	
	if (x % 3 == 0) {
		printf("O n�mero informado '%i' � m�ltiplo de 3. ");
	} else {
		printf("O n�mero informado '%i' N�O � m�ltiplo de 3. ");
	}
		
	return 0;
}
