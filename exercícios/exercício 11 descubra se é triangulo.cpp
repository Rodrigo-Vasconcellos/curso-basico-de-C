//  [DESAFIO] Crie um programa que leia o tamanho de três segmentos de reta. 
// Analise seus comprimentos e diga se é possível formar um triângulo com essas 
// retas. Matematicamente, para três segmentos formarem um triângulo, o comprimento 
// de cada lado deve ser menor que a soma dos outros dois.
// acrescentando o recurso de mostrar que tipo 
// de triângulo será formado: 
// - EQUILÁTERO: todos os lados iguais
// - ISÓSCELES: dois lados iguais
// - ESCALENO: todos os lados diferentes
 
 # include <stdio.h>
 # include <locale.h>
 
 int main (){
 	setlocale (LC_ALL, "portuguese");
 	int a, b, c;
 	
 	printf ("descubra se vai formar um triangulo\n");
 	printf ("digite o 1° seguimento de reta: ");
 	scanf ("%d", &a);
 	printf ("digite o 2° seguimento de reta: ");
 	scanf ("%d", &b);
 	printf ("digite o 3° seguimento de reta: ");
 	scanf ("%d", &c);
 	
 	if (a < b+c && b < c+a && c < a+b) {
 		printf ("\nforma triangulo");
 		if (a == b && b == c) {
	  		printf ("\ntriangulo equilatero");
	  	}
	  	if (a == b && a != c || a == c && a != b || b == c && b != a){
	  		printf ("\ntriangulo isosceles");
	  	}
	  	if (a != b && a != c && b != c){
	  		printf ("\ntriangulo escaleno");
	  	}
 	 }
 	 else {
 	 	printf ("\nnão forma triangulo");
	  }
	  
 }
 
 