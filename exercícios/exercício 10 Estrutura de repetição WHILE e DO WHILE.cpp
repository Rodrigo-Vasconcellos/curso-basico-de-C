//exercicio 10 jogo de adivinhaçao 
#include <stdio.h> //funçao de entrada e saida
#include <locale.h> //funçao de caracter

int main(){    //inivio doprograma 
	setlocale(LC_ALL, "portuguese");
	int opcao, palpite, opcao2;
	while (1){
		printf("quer jogar[sim=1], [nao=2]: ");
		scanf("%d", &opcao);
		if (opcao == 1){
			printf("jogo de adivinhaçao\n\n\n");
			do{
				printf("\npalpita: ");
				scanf("%d", &palpite);
				if (palpite == 6 ){
				printf("vitoria");
				}
				else {
					printf("erro");		
				}		
			}while (palpite!=6);
			printf ("\nquer continuar [sim=1], [nao=2]: ");
			scanf("%d", &opcao2);
			if (opcao2 == 2){
			return(0);
			}
		}
		else if (opcao == 2){
		return(0);
		}
	}
}
