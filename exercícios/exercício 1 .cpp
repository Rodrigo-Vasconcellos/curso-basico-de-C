//exercicio 1 descubra se o numero é positivo.

#include <stdio.h>  //funçao entrada e saida
#include <locale.H> //funçao de caracter
int main() {
	setlocale(LC_ALL, "Portuguese");
	int x;
	printf("digite um numero e descubra se ele é positivo: ");
	scanf("%d", &x);
	
	if (x >= 0) {
		printf("numero positivo");	
	}
	else {
		printf("numero negativo");
	}
}