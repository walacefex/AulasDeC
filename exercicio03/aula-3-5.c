#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main (){
	setlocale(LC_ALL,"Portuguese");
	float salario, aumento, novosalario;
	
	  printf ("Digite o valor do sal�rio: ");
      scanf ("%f", &salario);
      printf ("\nDigite o valor do aumento em porcentagem: ");
      scanf("%f", &aumento);
     	 aumento = salario * (aumento / 100);
     	 novosalario = aumento + salario;
      printf ("\nO valor do aumento � de:%4.2f \n", aumento);
      printf ("\nO valor do novo sal�rio � de:%4.2f \n", novosalario);
      
      return 0;
}
