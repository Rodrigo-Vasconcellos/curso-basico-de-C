//Crie um algoritmo que leia a idade de 10 pessoas, mostrando no final:
//a) Qual é a média de idade do grupo
//b) Quantas pessoas tem mais de 18 anos
//c) Quantas pessoas tem menos de 5 anos
//d) Qual foi a maior idade lida

#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "portuguese");
	int i, idade, soma, media, maiorIdade, maior18, menor5;
	
	maior18 = 0;
	menor5 = 0;
	maiorIdade = 0;
	while (i < 10) {
		i = i + 1;
		printf ("%d ° idade: ", i);
		scanf ("%d", &idade);
		soma = soma + idade;
		if (maiorIdade < idade) {
			maiorIdade = idade;
		}
		if (18 < idade) {
			maior18 = maior18 + 1;
		}	
		if (idade < 5) {
			menor5 = menor5 + 1;
		}
	}
	media = soma / 10;
	printf ("\nmedia das idades é: %d", media);
	printf ("\nmaior idade é: %d", maiorIdade);
	printf ("\nquantidade de pessoas que tem mais de 18 anos: %d", maior18);
	printf ("\nquantidade de pessoas que tem menos de 5 anos: %d", menor5);
}