////exercicio 8 fazer uma tabuada 

#include <stdio.h> //funçao de entrada e saida
#include <locale.h> //funçao de caracter

int main(){    //inivio doprograma 
	setlocale (LC_ALL, "portuguese");
int numero, i;  //variaveis

printf("digite um numero para ver a tabuada: ");
scanf ("%d", &numero);
for(i=1; i<=10; i++){
	printf("%d x %d = %d\n", numero, i, numero*i);
}	
}