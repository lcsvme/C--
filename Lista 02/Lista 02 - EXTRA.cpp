#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	char nome[50], instituicao[50], sexo;
	float n1, n2, n3, media, media_aprovacao;
	
	//L� o nome da institui��o
	printf("Nome da Institui��o: ");
	scanf("%s", &instituicao);
	
	//L� a m�dia da institui��o
	printf("Qual a m�dia para a aprova��o? ");
	scanf("%f", &media_aprovacao);
	
	//L� o nome do aluno, matr�cula e o sexo
	printf("\nNome do Aluno(a): ");
	scanf("%s", &nome);
	printf("Sexo do Aluno(a): (M/F) ");
	scanf("%s", &sexo);
	
	//L� as notas das provas do aluno(a)
	printf("\nNota da primeira prova: ");
	scanf("%f", &n1);
	printf("Nota da segunda prova: ");
	scanf("%f", &n2);
	printf("Nota da terceira prova: ");
	scanf("%f", &n3);
	
	//Calcula a m�dia das provas do aluno(a)
	media = (n1 + n2 + n3) / 3;
	
	//Imprime o nome da institui��o e a m�dia de aprova��o
	printf("\nInstitui��o %s", instituicao);
	printf("\nA m�dia de aprova��o �: %.2f ", media_aprovacao);
	
	//Verifica se oluno(a) foi aprovado
	if (media > media_aprovacao) {
		//Verifica o sexo do aluno
		if (sexo == 'M' || sexo == 'm') {
			printf("\nO aluno %s foi aprovado na %s com uma m�dia de %.2f!", nome, instituicao, media);
		} else {
			printf("\nA aluna %s foi aprovada na %s com uma m�dia de %.2f!", nome, instituicao, media);
		}
	} else {
		//Imprime caso o aluno for reprovado
		if (sexo == 'M' || sexo == 'm') {
			printf("\nO aluno %s foi aprovado na %s com uma m�dia de %.2f!", nome, instituicao, media);
		} else {
			printf("\nA aluna %s foi aprovada na %s com uma m�dia de %.2f!", nome, instituicao, media);
		}
	}
	
	return 0;
}
