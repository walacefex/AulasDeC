#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * argv[]){
	double a,b, troca;
	printf("Digite o valor de A: ");
	scanf("%lf", &a);
	printf("Digite o valor de B: ");
	scanf("%lf", &b);
	troca = a;
	a = b;
	b = troca;
	printf("--------------- Resultado --------------------\n\n");
	printf("O novo valor de A eh: %4.1lf \n", a);
	printf("O novo valor de B eh: %4.1lf \n", b);
	
	system("PAUSE");
	return 0;
}
