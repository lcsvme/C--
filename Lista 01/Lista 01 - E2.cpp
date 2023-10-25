#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float x;

	  printf("Digite um número real: ");
	  scanf("%f", &x);
	
	  if (x > 10) {
	    printf("O número informado é maior que 10.\n");
	  } else {
	    printf("O número informado é menor ou igual a 10.\n");
	  }

  return 0;
}
	
