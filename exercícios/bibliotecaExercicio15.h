#include <stdio.h>
#include <locale.h>

// PROTOTIPAÇÃO
int entradaDeDados ();

int mediaIdade(int ida);


	




void mediaIdadeGrupo (int idade) {
	setlocale (LC_ALL, "Portuguese");
	
	int somaIdade, somaQuantidade, mediaIdade;
	somaIdade = 0;
	somaQuantidade = 0;
	idade = 0;
	mediaIdade = 0;
	 
	somaIdade = somaIdade + idade;
	somaQuantidade = somaQuantidade + 1;
	mediaIdade = somaIdade/somaQuantidade;
	printf ("\nmedia das idades do grupo %d", mediaIdade);
	printf ("\nsoma das idades: %d", somaIdade);
	printf ("\nquantidade de pessoas no grupo %d", somaQuantidade);
}


int mediaIdade(int ida) {
	setlocale (LC_ALL, "Portuguese");
	int quantidade, somaIdade, media;
	quantidade= quantidade +1;
	somaIdade= somaIdade + ida;
}
