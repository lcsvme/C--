#include <stdio.h>
#include <locale.h>
/* Escreva um programa que solicite ao usuário um número real e ao final imprima na tela se
o número informado é maior ou igual a dez ou menor que 10 (dez) */

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float x;
	
	printf("Digite um número real: ");
	scanf("%f", &x);
	
	if (x >= 10) {
		printf("O número real '%f' é maior ou igual a 10. ", x);
	} else {
		printf("O número real '%f' é menor que 10. ", x);
	}
	
	return 0;
}
