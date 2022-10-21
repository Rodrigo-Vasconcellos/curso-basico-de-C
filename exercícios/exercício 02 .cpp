exercicio 2 descubra se voce pode votar?

#include <stdio.h>  //funçao entrada e saida
#include <locale.H> //funçao de caracter
int main() {
	setlocale(LC_ALL, "Portuguese");

	int idade;
	printf ("digite sua idade");
	scanf ("%d", &idade);
	if (idade >= 18){
		printf("obrigatorio votar");
	}
	else if(idade >= 16 and idade < 18){
		printf("vote se quiser");
	}
	else {
		printf("no pode votar");
	}
}