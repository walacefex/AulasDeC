#include <stdio.h>
#include <stdlib.h>


int main(){
	float num1, num2, soma;
	
	
	printf("Digite o primeiro n�mero: ");
	scanf("%f", &num1);
	printf("Digite o segundo n�mero: ");
	scanf("%f", &num2);
	soma = num1 + num2;
	
	if(soma > 15){
		printf("\n\n  %5.2f", soma);
	}
	else{
		printf("\n nota menor que ");
	}
	getch();
return 0;
	
}
