#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	char nome[50], instituicao[50], sexo;
	float n1, n2, n3, media, media_aprovacao;
	
	//Lê o nome da instituição
	printf("Nome da Instituição: ");
	scanf("%s", &instituicao);
	
	//Lê a média da instituição
	printf("Qual a média para a aprovação? ");
	scanf("%f", &media_aprovacao);
	
	//Lê o nome do aluno, matrícula e o sexo
	printf("\nNome do Aluno(a): ");
	scanf("%s", &nome);
	printf("Sexo do Aluno(a): (M/F) ");
	scanf("%s", &sexo);
	
	//Lê as notas das provas do aluno(a)
	printf("\nNota da primeira prova: ");
	scanf("%f", &n1);
	printf("Nota da segunda prova: ");
	scanf("%f", &n2);
	printf("Nota da terceira prova: ");
	scanf("%f", &n3);
	
	//Calcula a média das provas do aluno(a)
	media = (n1 + n2 + n3) / 3;
	
	//Imprime o nome da instituição e a média de aprovação
	printf("\nInstituição %s", instituicao);
	printf("\nA média de aprovação é: %.2f ", media_aprovacao);
	
	//Verifica se oluno(a) foi aprovado
	if (media > media_aprovacao) {
		//Verifica o sexo do aluno
		if (sexo == 'M' || sexo == 'm') {
			printf("\nO aluno %s foi aprovado na %s com uma média de %.2f!", nome, instituicao, media);
		} else {
			printf("\nA aluna %s foi aprovada na %s com uma média de %.2f!", nome, instituicao, media);
		}
	} else {
		//Imprime caso o aluno for reprovado
		if (sexo == 'M' || sexo == 'm') {
			printf("\nO aluno %s foi aprovado na %s com uma média de %.2f!", nome, instituicao, media);
		} else {
			printf("\nA aluna %s foi aprovada na %s com uma média de %.2f!", nome, instituicao, media);
		}
	}
	
	return 0;
}
