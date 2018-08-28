#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char * argv[]){
	char nome;
	float vcusto, vvenda;
	printf("Digite o nome do prododuto: ");
	scanf("%c", &nome);
	printf("\nDigite o valor de custo do produto: ");
	scanf("%f", &vcusto);
	
	vvenda = vcusto + (vcusto * 30/100);
	
	printf("\nO valor de venda do produto eh: %4.2f \n", vvenda);
	
	system("PAUSE");
	return 0;
}
