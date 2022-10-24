// exercicio 14 Desenvolva um aplicativo que leia o salário e o sexo de vários funcionários. 
//No final, mostre o total de salários pagos aos homens e o total pago às 
//mulheres. O programa vai perguntar ao usuário se ele quer continuar ou não 
//sempre que ler os dados de um funcionário.

#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");	
	int continuar, salario, sexo, quantidadeTotal, quantidadeMasculino, quantidadeFeminino, salarioTotal, mediaTotal, salarioMasculino, salarioFeminino, mediaMasculino, mediaFeminino;
	char nome;
	salarioTotal = 0;
	quantidadeTotal =0;
	salarioMasculino = 0;
	quantidadeMasculino = 0;
	salarioFeminino = 0;
	quantidadeFeminino = 0;
	
	 while (continuar != 2) {
		printf ("digite seu nome: ");
		scanf ("%s", &nome);
		printf ("qual seu sexo, digite (1) masculino) ou (2) feminino: ");
		scanf ("%d", &sexo);
		printf ("digite seu salariio: ");
		scanf ("%d", &salario);
		printf ("digite (1) para continuar ou digite (2 )para sair: ");
		scanf ("%d", &continuar);
		printf ("\n");	
		quantidadeTotal = quantidadeTotal + 1;
		salarioTotal = salarioTotal + salario;
		if (sexo == 1){
			quantidadeMasculino = quantidadeMasculino + 1;
			salarioMasculino = salarioMasculino + salario;
		} 
		else{
			quantidadeFeminino = quantidadeFeminino + 1;
			salarioFeminino = salarioFeminino + salario;
		}
	}
	mediaTotal = salarioTotal/quantidadeTotal;
	mediaMasculino = salarioMasculino/quantidadeMasculino;
	mediaFeminino = salarioFeminino/quantidadeFeminino;
	
	printf ("quantidade total de pessoas cadastreadas %d\n", quantidadeTotal);
	printf ("quantidade total de salario pago: %d\n", salarioTotal);
	printf ("media de salario da empresa: %d\n", mediaTotal);
	
	printf ("quantidade total de homens cadastreadas %d\n", quantidadeMasculino);
	printf ("quantidade total de salario pago para homens: %d\n", salarioMasculino);
	printf ("media de salario dos homens da empresa: %d\n", mediaMasculino);
	
	printf ("quantidade total de mulheres cadastreadas %d\n", quantidadeFeminino);
	printf ("quantidade total de salario pago para mulheres: %d\n", salarioFeminino);
	printf ("media de salario das mulheres da empresa: %d\n", mediaFeminino);
}
