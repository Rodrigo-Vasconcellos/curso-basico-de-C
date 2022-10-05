// exercicio 6 Escreva um programa que pergunte a velocidade de um carro. Caso ultrapasse 
// 80Km/h, exiba uma mensagem dizendo que o usuário foi multado. Nesse caso, exiba 
// o valor da multa, cobrando R$5 por cada Km acima da velocidade permitida.

#include <stdio.h> //funçao de entrada e saida
#include <locale.h> //funçao de caracter

int main () {
	setlocale(LC_ALL, "portuguese");
	
	float multa;
	int velocidade;
	printf("digite a velocidade do carro: ");
	scanf("%d", &velocidade);
	if (velocidade > 80) {
		multa = (velocidade - 80)*5;
		printf("\nvoce foi multado !!!\n %.2f", multa);
		printf(" reais\n");
	}
	else {
		printf("\n\nmuito bem !!!\n vc esta dentro da lei!!!\n\n");
	}
	
	
}

