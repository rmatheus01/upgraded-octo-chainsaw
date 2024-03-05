#include <stdio.h>
#include  <locale.h>

void cabecalho() {
	system("cls || clear");
	printf("=== Senai === \n");
	fflush(stdin); // No onlineGDB -> setbuf(stdin, 0);
}

int somar(int n1, int n2) {
	int soma;
	soma = n1 + n2;
	return soma;
}

int main() {
	setlocale(LC_ALL, "portuguese");
	int primeiroNumero, segundoNumero, soma;
	
	cabecalho();
	printf("Digite o primeiro número: ");
	scanf("%i",primeiroNumero);
	
	cabecalho();
	printf("Digite o segundo número: ");
	scanf("%i",segundoNumero);
	
	soma = somar(primeiroNumero, segundoNumero);
	
	printf("\nSoma: %i \n",soma);
	
	return 0;
}
