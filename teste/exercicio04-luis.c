#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(int argc, char * argv[]){
	setlocale(LC_ALL, "Portuguese");
	float a,b;
	//char adicao, subtracao, multiplicacao, divisao;
	char c;
	printf("Digite o valor de a e de b\n");
	scanf("%f %f", &a, &b);
	
	printf("\n------------------------------\n");
	printf("\nEscolha um operador matem�tico \n");
	printf("\n------------------------------\n");
	fflush(stdin);
	printf("\nEscolha os operadores entre :+, -, * e / \n");
	scanf("%c", &c);
	
	
	if(c == '+'){
		printf("O valor de A + B � %f ", a+b);
}	else if(c == '-'){
		printf("O valor de A - B � %f ", a-b);
} 	else if(c == '*'){
		printf("O valor de A * B � %f ", a*b);
}	else if(c == '/'){
		if(b != 0){
		printf("O valor de A / B � %f", a/b);
		}else{
			printf("Divis�o por zero");
		}
    }else{
	printf("Operador Inv�lido");
}

return 0;
}

