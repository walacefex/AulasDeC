#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");	
	  float salario, gratificacao, imposto, descesconto, novosalario;
	  
	  printf("Digite o s�l�rio base do funcion�rio: ");
      scanf ("%f", &salario);
      gratificacao = salario * 0.05;
      imposto = salario * 0.07;
      descesconto = salario - imposto;
      novosalario = descesconto + gratificacao;
   	 printf ("\nO sal�rio do funcion�rio a receber �: %4.2f ", novosalario);
     
     
     return 0;
}
