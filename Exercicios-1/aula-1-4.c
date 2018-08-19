#include <stdio.h>
#include <stdlib.h>

int main (int arcg, char * argv[]){
	double n1,n2, media;
	
	printf("Digite a nota 1: ");
	scanf("%lf",&n1);
	printf("Digite a nota 2: ");
	scanf("%lf", &n2);
	 media = (n1 + n2)/2.0;
	 
	 printf("\nA sua media eh de : %4.1lf\n\n", media);
	 system ("PAUSE");
	 return 0;
}
