#include <stdio.h>
#include <locale.h>
/* Elabore um algoritmo que indique se um n�mero digitado est� compreendido entre 20 e
90, ou n�o */

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	
	printf("Digite um n�mero: ");
	scanf("%i", &x);
	
	if ( x >= 20 && x <= 90) {
		printf("O n�mero '%i' est� entre 20 e 90. ", x);
	} else {
		printf("O n�mero '%i' N�O est� entre 20 e 90.", x);
	}
}
