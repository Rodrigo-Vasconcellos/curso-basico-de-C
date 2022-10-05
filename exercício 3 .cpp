// exercicio 3 controle de temperatura.

#include <stdio.h>  //funçao entrada e saida
#include <locale.H> //funçao de caracter
int main() {
	setlocale(LC_ALL, "Portuguese");
	int temperatura;
	printf("digite a temperatura do dia: ");
	scanf("%d", &temperatura);
	if (temperatura > 90){
		printf("luz vermelha");
	}
	else if(temperatura < 20){
		printf("luz verde");
	}
	
	
}