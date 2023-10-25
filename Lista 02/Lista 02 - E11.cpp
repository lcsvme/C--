#include <stdio.h>
#include <locale.h>
/* Elabore um algoritmo que leia o nome e o peso de duas pessoas e imprima o nome da
pessoa mais pesada */

int main(){
	setlocale(LC_ALL, "Portuguese");

	char nome[30], nome2[30];
	float peso, peso2;
	
	//Lê o nome e o peso da PRIMEIRA pessoa
	printf("Digite o nome da primeira pessoa: ");
	scanf("%s", &nome);
	printf("Qual o peso de %s? ", nome);
	scanf("%f", &peso);
	
	//Lê o nome e o peso da SEGUNDA pessoa
	printf("Digite o nome da segunda pessoa: ");
	scanf("%s", &nome2);
	printf("Qual o peso de %s? ", nome2);
	scanf("%f", &peso2);
	
	if ( peso > peso2 ) {
		printf("A pessoa mais pesada é: %s com %.2f quilos.", nome, peso);
	} else {
		printf("A pessoa mais pesada é: %s com %.2f quilos.", nome2, peso2);
	}
	
	return 0;	
}
