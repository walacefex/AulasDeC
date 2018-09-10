#include <stdio.h>
#include <stdlib.h>


int main(){
float salario, novosalario, resultado;
	
	printf("Digite o salario: ");	
	scanf("%f", &salario);

if (salario = 500){

   resultado = (salario * (15 / 100));
   printf(" Seu salario reajustado em 15% eh: %f ", resultado);
}
else if(salario > 500 && salario <= 1000){
	 resultado = salario *(10/100) ;
      printf(" Seu salario reajustado em 10% eh: %f ", resultado); 
}else
	if(salario >1000){
		  resultado= a*(5/100) ;
	printf(" Seu salario reajustado em 5% eh: %f ", resultado) 
}
  
    return 0;
}
