#include <stdio.h>
#include <locale.h>
/* O sistema de avalia��o de determinada disciplina � composto por tr�s provas. A primeira
prova tem peso 2, a segunda tem peso 3 e a terceira tem peso 5. Considerando que a
m�dia para aprova��o � 6.0, fa�a um algoritmo para calcular a m�dia final de um aluno
desta disciplina e dizer se o aluno foi aprovado ou n�o */

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3, media;
	
	//L� as notas do aluno
	printf("Digite a nota da primeira prova: ");
	scanf("%f", &n1);
	
	printf("Digite a nota da segunda prova: ");
	scanf("%f", &n2);
	
	printf("Digite a nota da terceira prova:");
	scanf("%f", &n3);
	
	//Calcula a m�dia do aluno
	media = (n1 * 2 + n2 * 3 + n3 * 5) / 10;
	
	//Verifica se o aluno foi aprovado
	if ( media >= 6.0 ) {
		printf("\n\nO aluno foi APROVADO com a m�dia de %.2f. \nA m�dia necess�ria para o aluno ser aprovado era de 6.0.", media);
	} else {
		printf("O aluno foi REPROVADO com a m�dia de %.2f. \nA m�dia necess�ria para o aluno ser aprovado era de 6.0. ", media);
	}
	
	return 0;
}
