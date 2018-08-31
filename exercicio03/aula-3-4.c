#include <stdio.h>
#include <stdlib.h>


int main (){
	float salario, novosalario;
	
	printf("Digite o seu salario:");
	scanf("%f", &salario);
	
	novosalario = (salario * 25 / 100);
	
	printf("O novo salario será: %4.2f", novosalario + salario);
	
	return 0;
}
