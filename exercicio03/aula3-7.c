#include <stdio.h>
#include<stdlib.h>
#include<locale.h>


const KM_LITRO = 12;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float tempo, velocidademedia, distancia, consumo;
	printf("Digite o tempo gasto na viagem: ");
	scanf("%f", &tempo);
	printf("\n Digite a velocidade média em KM/H: ");
	scanf("%f", &velocidademedia);

		distancia = tempo * velocidademedia;
		consumo = distancia / KM_LITRO;
 
	printf("\n A distancia percorida foi de: %7.2f Km/h", distancia);
	printf("\n O consumo foi de: %7.2f litros", consumo);
 
	return 0;
}

