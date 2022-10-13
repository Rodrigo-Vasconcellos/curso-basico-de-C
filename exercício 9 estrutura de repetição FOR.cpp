//exercicio 9 fazer um odometro
#include <stdio.h> //funçao de entrada e saida
#include <locale.h> //funçao de caracter

int main(){    //inivio doprograma 
	setlocale(LC_ALL, "portuguese");
	int a, b, c, d, e;
	
	for (a=0; a<=9; a++){
		for(b=0; b<=9; b++){
			for(c=0; c<=9; c++){
				for(d=0; d<=9; d++){
					for(e=0; e<=9; e++){
						printf("%d%d%d%d%d\n",a,b,c,d,e);	
					}
				}
			}	
		}
	}

}
