#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");	
	  float salario, gratificacao, imposto, descesconto, novosalario;
	  
	  printf("Digite o sálário base do funcionário: ");
      scanf ("%f", &salario);
      gratificacao = salario * 0.05;
      imposto = salario * 0.07;
      descesconto = salario - imposto;
      novosalario = descesconto + gratificacao;
   	 printf ("\nO salário do funcionário a receber é: %4.2f ", novosalario);
     
     
     return 0;
}
