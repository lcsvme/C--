#include <stdio.h>
#include <locale.h>
/* Escreva um programa que solicite ao usu�rio um n�mero real e ao final imprima na tela se
o n�mero informado � maior ou igual a dez ou menor que 10 (dez) */

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float x;
	
	printf("Digite um n�mero real: ");
	scanf("%f", &x);
	
	if (x >= 10) {
		printf("O n�mero real '%f' � maior ou igual a 10. ", x);
	} else {
		printf("O n�mero real '%f' � menor que 10. ", x);
	}
	
	return 0;
}
