#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct {
	float peso;
	int idade;
	float altura;
}Pessoa;

void ImprimePessoa(Pessoa P){
	printf ("Idade: %d\nPeso: %f\nAltura:%f\n", P.idade, P.peso, P.altura);
}

void SetPessoa(Pessoa *P, int idade, float peso, float altura){
	(*P).idade = idade;
	P->peso = peso;
	P->altura;
}

int main() {
	Pessoa Joao;
	SetPessoa(&Joao, 15, 70.5, 1.75);
	ImprimePessoa(Joao);
	
	return 0;
}
