//exercicio 15 Desenvolva um algoritmo que leia o nome, a idade e o sexo de várias pessoas. 
//O programa vai perguntar se o usuário quer ou não continuar. No final, mostre:
//a) O nome da pessoa mais velha
//b) O nome da mulher mais jovem
//c) A média de idade do grupo
//d) Quantos homens tem mais de 30 anos
//e) Quantas mulheres tem menos de 18 anos

#include <stdio.h>
#include <locale.h>
#include "bibliotecaExercicio15.h"

int main (){
	setlocale (LC_ALL, "Portuguese");
	int continuar;
	int a, x, idade, sexo, altura, salario, somaIdade, somaQuantidade, mediaIdade;
	char nome;
	continuar = 1;
	
	do {
			//printf ("digite seu nome: ");
			//scanf ("%s", &nome);
			printf ("digite sua idade: ");
			scanf ("%d", &idade);
			printf ("digite sua altura: ");
			scanf ("%d", &altura);
			printf ("digite [1] para masculino ou [2] para feminino: ");
			scanf ("%d", &sexo);
			printf ("digite seu salario: ");
			scanf ("%d", &salario);
			a= mediaIdade (idade);
		
		
		
		printf ("\ndigite [1] para continuar ou [2] para parar: ");
		scanf ("%d", &continuar);
		
	} while (continuar != 2);
	mediaIdade= somaSalario/quantidade
	printf ("\nmedia das idades do grupo %d", mediaIdade);
	printf ("\nsoma das idades: %d", somaIdade);
	printf ("\nquantidade de pessoas no grupo %d", somaQuantidade);
}

int mediaIdade(int ida) {
	setlocale (LC_ALL, "Portuguese");
	int quantidade, somaIdade, media;
	quantidade= quantidade +1;
	somaIdade= somaIdade + idade
}