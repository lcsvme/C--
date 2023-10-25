#include <stdio.h>
#include <locale.h>
/* Solicite ao usu�rio a m�dia para aprova��o em um curso e em seguida solicite ao usu�rio o nome, sexo e as 03 notas do aluno e ao
final imprima a frase: "O aluno XXXXX foi aprovado com media YY" considerando o g�nero
do(a) aluno(a) e se foi aprovado(a) ou reprovado(a) */

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[30], sexo;
	float n1, n2, n3, media_aprovacao;
	
	//L� a m�dia do curso
	printf("M�dia de aprova��o do curso? ");
	scanf("%f", &media_aprovacao);
	
	//L� o nome do aluno
	printf("Nome do aluno(a)? ");
	scanf("%s", &nome);
	
	//L� o sexo do aluno
	printf("Sexo do aluno(a) (M/F)? ");
	scanf("%s", &sexo);
	
	//L� as notas das provas do aluno(a)
	printf("\nNota da primeira prova? " );
	scanf("%f", &n1);
	printf("Nota da segunda prova? " );
	scanf("%f", &n2);
	printf("Nota da terceira prova? " );
	scanf("%f", &n3);
	
	//Calcula a m�dia do aluno(a)
	float media = (n1 + n2 + n3) / 3;
	
	//Verifica se o aluno(a) foi aprovado(a)
	if ( media >= media_aprovacao ) {
		//Verifica o sexo do aluno(a)
		if (sexo == 'M' || sexo == 'm') {
			//Imprime a frase de aprova��o para aluno masculino
			printf("\nO aluno %s foi aprovado com uma m�dia de %.2f. \nA m�dia necess�ria para ser aprovado era %.2f.", nome, media, media_aprovacao);
		} else {
			//Imprime a frase de aprova��o para aluna feminina
			printf("\nA aluna %s foi aprovada com uma m�dia de %.2f. \nA m�dia necess�ria para ser aprovada era %.2f.", nome, media, media_aprovacao);
		} 
	} else {
		//Verifica o sexo do aluno(a)
		if (sexo == 'M' || sexo == 'm') {
			//Imprime a frase de reprova��o para aluno masculino
			printf("\nO aluno %s foi reprovado com uma m�dia de %.2f. \nA m�dia necess�ria para ser aprovado era %.2f.", nome, media, media_aprovacao);
		} else {
			//Imprime a frase de reprova��o para aluna feminina
			printf("\nA aluna %s foi reprovada com uma m�dia de %.2f. \nA m�dia necess�ria para ser aprovada era %.2f.", nome, media, media_aprovacao);
		} 
	}
	
	return 0;
}
