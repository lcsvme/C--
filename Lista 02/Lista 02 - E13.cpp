#include <stdio.h>
#include <locale.h>
/* Elabore um algoritmo que leia dois n�meros e imprima qual � maior, qual � menor, ou se
s�o iguais */

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2;
	int maior, menor, igual;
	
	//L� o primeiro n�mero  
	printf("Digite o primeiro n�mero: ");
	scanf("%i", &n1);
	//L� o segundo n�mero
	printf("Digite o segundo n�mero: ");
	scanf("%i", &n2);
	
	//Compara��o dos n�meros
	if (n1 > n2) {
		//N1 � MAIOR
	 	maior = n1;
	 	menor = n2;
		  printf("O n�mero maior � %i.\n", maior);
	      printf("O n�mero menor � %i.\n", menor);
	} else if (n1 < n2) {
		//N2 � MAIOR
		maior = n2;
	    menor = n1;
	      printf("O n�mero maior � %i.\n", maior);
	      printf("O n�mero menor � %i.\n", menor);
	} else {
		//Os n�meros s�o IGUAIS
	  	igual = n1, n2;
	  	  printf("Os n�meros s�o iguais.\n", igual);
	  }
	
	return 0;
	}
