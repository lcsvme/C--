#include <stdio.h>
#include <locale.h>
/* Elabore um algoritmo que leia um número inteiro e imprima uma das mensagens: é múltiplo
de 3, ou, não é múltiplo de 3 */

int main(){
	setlocale(LC_ALL, "Portuguese");

	int x;
	
	printf("Digite um número inteiro: ");
	scanf("%i", &x);
	
	if (x % 3 == 0) {
		printf("O número informado '%i' É múltiplo de 3. ");
	} else {
		printf("O número informado '%i' NÃO é múltiplo de 3. ");
	}
		
	return 0;
}
