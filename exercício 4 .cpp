//exercicio 4 menu da cafeteria

#include <stdio.h>  //funçao entrada e saida
#include <locale.H> //funçao de caracter
int main() {
	setlocale(LC_ALL, "Portuguese");
	printf("menu \n 1. cha \n 2.cafe \n 3. refrigereante \n escolha outra opiçao ");
	int opcao;
	scanf ("%d", &opcao);
	switch (opcao)
	{
		case 1:
			printf("5 reais");
			break;
		case 2:
			printf("10 reais");
			break;
		case 3:
			printf("15 reais");
			break;	
		default:
		printf("gratis");	
	}
}