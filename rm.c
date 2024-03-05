#include <stdio.h>
#include<string.h>

void cabecalho() {
	system("cls || clear"); // Limpa o terminal.
	printf("\n============= \n");
	printf("\n=== Senai === \n");
	printf("\n============= \n");
	fflush(stdin); // Limpa o cache de input.
}

int main() {
	
	char login [200], loginCadastrado[200] = "Fabi";
	char senha [200], senhaCadastrada[200] = "333";
	
	cabecalho();
	printf("Digite o login: ");
	scanf("%s",&login);
	
	cabecalho();
	printf("Digite a senha: ");
	scanf("%s",&senha);
	
	
	cabecalho();
	if (strcmp(login, loginCadastrado) == 0 && strcmp(senha, senhaCadastrada) == 0){
	printf("Seja bem vindo!");
	}else {
		printf("Seu login não foi aceito!");
	}
	return 0;
}
	
	
	



