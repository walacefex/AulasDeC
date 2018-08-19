#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
	double volume,comprimento, largura,altura;
	
	
	printf("Digite o valor do comprimento: ");
	scanf("%lf", &comprimento);
	printf("Digite o valor da largura: ");
	scanf("%lf", &largura);
	printf("Digite o valor da altura: ");
	scanf("%lf", &altura);
	
	volume = comprimento * altura * largura;
	
	printf("----------------- Resultado ----------------\n\n");
	
	printf("O valor do volume eh: %4.1lf \n", volume);
	system("PAUSE");
	return 0;
}
