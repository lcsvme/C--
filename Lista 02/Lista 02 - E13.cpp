#include <stdio.h>
#include <locale.h>
/* Elabore um algoritmo que leia dois números e imprima qual é maior, qual é menor, ou se
são iguais */

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2;
	int maior, menor, igual;
	
	//Lê o primeiro número  
	printf("Digite o primeiro número: ");
	scanf("%i", &n1);
	//Lê o segundo número
	printf("Digite o segundo número: ");
	scanf("%i", &n2);
	
	//Comparação dos números
	if (n1 > n2) {
		//N1 é MAIOR
	 	maior = n1;
	 	menor = n2;
		  printf("O número maior é %i.\n", maior);
	      printf("O número menor é %i.\n", menor);
	} else if (n1 < n2) {
		//N2 é MAIOR
		maior = n2;
	    menor = n1;
	      printf("O número maior é %i.\n", maior);
	      printf("O número menor é %i.\n", menor);
	} else {
		//Os números são IGUAIS
	  	igual = n1, n2;
	  	  printf("Os números são iguais.\n", igual);
	  }
	
	return 0;
	}
