#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char verdura[20], fruta[20];
	
	printf("Digite sua verdura favorita: ");
	scanf("%s", &verdura);
	
	printf("Digite sua fruta favorita: ");
	scanf("%s", &fruta);
	
	printf("Você gosta de %s e %s.", verdura, fruta);
	
	return 0;
}
