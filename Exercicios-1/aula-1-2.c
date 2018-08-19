#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	char nome[30], endereco[30], telefone[15];
	printf("Digite o seu nome:\n");
	scanf("%s", &nome);
	printf("Digite o seu endereco: \n");
	scanf("%s", &endereco);
	printf("Digite o seu telefone: \n");
	scanf("%s", &telefone);
	printf("\n\n O seu Nome: %s\n",nome);
	printf("\n\n O seu Endereco: %s\n",endereco);
	printf("\n\n O seu Telefone: %s\n",telefone);
	system("PAUSE");
	return 0;
}
