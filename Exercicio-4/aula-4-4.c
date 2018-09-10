#include <stdio.h>
#include <stdlib.h>


int main (){
	float num1, num2, mult;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &num1);
	printf("Digite o numero dois: ");
	scanf("%f", &num2);
	
	mult= num1 * num2;
	if(mult >50 && mult < 100){
		printf("\n\n O resultado eh : %5.2f", mult);
	}
	
	getch();
	return 0;
}
