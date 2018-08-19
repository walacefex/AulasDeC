#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1415

int main(int argc, char * argv[]){
	double raio, altura, volume;
	
	printf("Informe a altura do tonel: ");
	scanf("%lf", &altura);
	printf("Informe o raio do tonel: ");
	scanf("%lf", &raio);
	
	volume = PI * pow(raio,2) * altura;
//	volume = 3.1415 * raio ^ 2 * altura;
	
	
	printf("-------------- Resultado ------------------ \n");
	printf("\nO valor do volume eh de: %4.1lf \n" ,volume);
	printf("\n\n-----------------------------------------------\n");
	system("PAUSE");
	return 0;
	
}
