#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float x;

	  printf("Digite um n�mero real: ");
	  scanf("%f", &x);
	
	  if (x > 10) {
	    printf("O n�mero informado � maior que 10.\n");
	  } else {
	    printf("O n�mero informado � menor ou igual a 10.\n");
	  }

  return 0;
}
	
