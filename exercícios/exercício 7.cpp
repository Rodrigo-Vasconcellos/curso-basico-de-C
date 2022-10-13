// exercicio 7  Crie um algoritmo que leia o nome e as duas notas de um aluno, calcule a sua 
// média e mostre na tela. No final, analise a média e mostre se o aluno teve ou 
// não um bom aproveitamento (se ficou acima da média 7.0).

#include <stdio.h> //funçao de entrada e saida
#include <locale.h> //funçao de caracter

int main () {
	setlocale(LC_ALL, "portuguese");
	
	char nome;
	float n1, n2, media;
	printf("digite seu nome: ");
	scanf("%10c", &nome);
	printf("\ndigite 1° nota: ");
	scanf("%f", &n1);
	printf("\ndigite 2° nota: ");
	scanf("%f", &n2);
	media = (n1+n2)/2;
	if (media >= 7.0) {
		printf("\naprovado!!!\n sua media : %.2f", media);
	}
	else{
		printf("\nreprovado!!!\n sua media : %.2f", media);
	}	
}

