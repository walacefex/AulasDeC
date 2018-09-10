#include <stdio.h>
#include <stdlib.h>


int main (){
	float num1, num2, sub;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &num1);
	printf("Digite o numero dois: ");
	scanf("%f", &num2);
	
	sub = num1 - num2;
	if(sub < 0){
		printf("\n\n O resultado eh negativo : %5.2f", sub);
	}else{
		printf("O valor nao eh menor que zero");
	}
	
	getch();
	return 0;
}
