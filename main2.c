#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct {
	char titulo[50];
	int classificacao;
	char diretor[50];
	char genero[50];
	char duracao[50];
}Filme;

void ImprimeLista(Filme F){
	printf ("______FILME______\n\n");
	printf ("Titulo --> %s\nGenero --> %s\nDiretor --> %s\nClassificacao --> %d\nDuracao --> %s\n\n", F.titulo, F.genero, F.diretor, F.classificacao, F.duracao);
}

Filme SetFilme(char titulo[50], char diretor[50], char genero[50], char duracao[50], int classificacao){
	Filme f;
	int i = 0;
	for (i=0; i < 50; i++) {
		f.titulo[i] = titulo[i];
		f.diretor[i] = diretor[i];
		f.genero[i] = genero[i];
		f.duracao[i] = duracao[i]; 	
	}	
	f.classificacao = classificacao;
	return f;
}

int main() {
	Filme Branquelas;
	Branquelas = SetFilme("As Braquelas", "Alguem", "Comedia", "Pouco tempo", 16 );
	ImprimeLista(Branquelas);
	return 0;
}
