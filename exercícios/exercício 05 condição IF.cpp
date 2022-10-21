// exercicio 5 Desenvolva um programa que leia o nome de um funcionário, seu salário,
// quantos anos ele trabalha na empresa e mostre seu novo salário,
// reajustado de acordo com a tabela a seguir: 
//- Até 3 anos de empresa: aumento de 3%
//- entre 3 e 10 anos: aumento de 12.5%
//- 10 anos ou mais: aumento de 20%

#include <stdio.h> //funçao entrada e saida
#include <locale.h> //funçao de caracter
int main () {
	setlocale(LC_ALL, "portuguese");
	
	float n2, n3, n4, n5, n6;
	char n1;
	
	printf ("escreva seu nome: ");
	scanf("%7c", &n1);
	printf ("escreva seu salario: ");
	scanf("%f", &n2);
	printf ("escreva quantos anos voce trabalha na empresa: ");
	scanf("%f", &n3);
	if (n3 <= 3) {
		n4 = n2*1.03;
		printf("novo salario = %.2f\n", n4);
	}
	if (n3 > 3 && n3 < 10) {
		n5 = n2*1.125;
		printf("novo salario = %.2f\n", n5);
	}
	if (n3 >= 10) {
		n6 = n2*1.2;
		printf("novo salario = %.2f\n", n6);
	}
}
