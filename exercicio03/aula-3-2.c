#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(int argc, char * argv[]){
	setlocale(LC_ALL,"Portuguese");
	float c, f, result,temp;
	char op;
	
	printf("Digite 'F' para calcluar fahrenheit ou 'C' para Celsius ");
	scanf("%c", &op);
	op = toupper(op);
	
		if(op == 'F'){
			printf("Digite a temperatura: ");
			scanf("%f", &temp);
			result = (9 * temp + 160) / 5;
			printf("\nA temperatura em Fahrenheit eh: %4.2f \n", result);
		}else if (op == 'C'){
			printf("Digite a temperatura: ");
			scanf("%f", &temp);
			result = (5* (temp-32))/9;
			printf("\nA temperatura em Celsius eh: %4.2f \n", result);
		}else{
			printf("\n------ Errou-------\n");
			printf("\n Você digitou a letra errada \n");
			printf("\n Opção invalida \n");
	    }
    
	

}
