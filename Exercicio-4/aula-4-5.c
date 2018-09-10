#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	double num1, num2, resultado;
	char operacao;
	printf("Digite o primeiro numero");
	scanf("%lf", &num1);
	printf("digite o segundo numero");
	scanf("%lf", &num2);
	
	
	printf("------------------------------------------------------------------------");
	printf("\n\nDigite a operação (+,-,*,/) : ");
	scanf("%s", &operacao);
	if(operacao == '+'){
		resultado = num1 + num2;
		printf("\n\n O resultado da operacao eh: %6.2lf \n\n",resultado);	
	}else if(operacao == '-'){
		resultado = num1 - num2;
	}else if( operacao == '*'){
		resultado = num1 * num2;
		printf("\n\n O resultado da operacao eh: %6.2lf \n\n",resultado);	
				
	}else
	if(operacao == '/'){
		if(num2 != 0.00){
			resultado = num1 / num2;
			printf("\n\n O resultado da operacao eh: %6.2lf \n\n",resultado);	
		}else{
					printf("\n\n Divisao por zero \n\n");	
		}
		
	}else{
					printf("\n\n Operação inválida \n\n");	
		}
	
	system("PAUSE");
	
	return 0;
	

}
