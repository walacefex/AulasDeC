#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char * argv[]){
	
	float a, b, c, r1, r2, r3, r4, r5;
	
	printf("Digite o valor de 'A': ");
	scanf("%f", &a);
	printf("Digite o valor de 'B': ");
	scanf("%f", &b);
	printf("Digite o valor de 'C': ");
	scanf("%f", &c);
	r1 = (a / b + 1);
	r2 = (a - b) / (a + b);
	r3 = (a � b / c) / (a + b / c);
	r4 = a � (b / (b + c));
	r5 = ((b + c) * a) / (a + b);
	printf ("O valor da express�o A �: %4.2f", r1)
	printf ("O valor da express�o B �: %4.2f", r2)
	printf ("O valor da express�o C �: %4.2f", r3)
	printf ("O valor da express�o D �: %4.2f", r4)
	printf ("O valor da express�o E �: %4.2f", r5)


}		
