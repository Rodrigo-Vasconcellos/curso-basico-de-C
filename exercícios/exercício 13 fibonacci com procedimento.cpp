//Desenvolva um aplicativo que recebe um único valor inteiro como parâmetro, indicando quantos 
//termos da sequência serão mostrados na tela. O seu procedimento deve receber 
//esse valor e mostrar a quantidade de elementos solicitados.
//Ex: 
//Fibonacci(5) vai gerar 1 >> 1 >> 2 >> 3 >> 5 >> FIM
//Fibonacci(9) vai gerar 1 >> 1 >> 2 >> 3 >> 5 >> 8 >> 13 >> 21 >> 34 >> FIM

#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "portuguese");
	int a, b, c, soma, quantidadeDeTermos, i;
	
	a = 1;
	b = 0;
	c = 0;
	soma = 0;
	printf ("digite um valor inteiro para delimitar quantos termos da sequancia de fibonacci vai aparecer na tela: ");
	scanf ("%d", &quantidadeDeTermos);
	for (i=1; i<=quantidadeDeTermos; i++){
		soma = a+b;
		c = soma;
		a = b;
		b = soma;
		printf ("%d >>", c);	
	}
	printf ("fim");
}


	
