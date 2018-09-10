#include <stdio.h>
#include <stdlib.h>


int main(){
	float nota1, nota2, media;
	
	
	printf("Digite a nota 1: ");
	scanf("%f", &nota1);
	printf("Digite a nota 2: ");
	scanf("%f", &nota2);
	media = (nota1 + nota2)/2;
	printf("\n\n A media do aluno e: %5.2f", media );
	if(media < 7){
		printf("\n\n  Aluno reprovado");
	}else{
		printf("\n\n Aluno Aprovado");	
		
	}
	getch();
return 0;
	
}
