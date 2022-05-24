/*
Nome: Gustavo Maxwel de Sousa Oliveira
Matr�cula: UC21101257
Mat�ria: Programa��o estruturada
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, soma=0, subtracao=0, multiplicacao=0, divisao=0;
	char op, op2;
	
	do{
		printf("----------CALCULADORA----------\n");
		printf("Digite um n�mero que deseja realizar alguma opera��o:");
		scanf("%f", &n1);
		
		printf("Escolha qual fun��o deseja realizar nessa opera��o +, -, *, /: ");
		scanf("%s", &op);
		
		switch(op){
			case '+':
				printf("Digite o segundo n�mero para realizar a soma:");
				scanf("%f", &n2);
				soma = n1 + n2;
				printf("Soma: %.2f\n", soma);
			break;
			case '-':
				printf("Digite o segundo n�mero para realizar a subtra��o:");
				scanf("%f", &n2);
				subtracao = n1 - n2;
				printf("Subtra��o: %.2f\n", subtracao);
			break;
			case '*':
				printf("Digite o segundo n�mero para realizar a multiplica��o:");
				scanf("%f", &n2);
				multiplicacao = n1 * n2;
				printf("Multiplica��o: %.2f\n", multiplicacao);
			break;
			case '/':
				printf("Digite o segundo n�mero para realizar a divis�o:");
				scanf("%f", &n2);
				if(n2 == 0){
					printf("Erro\n");
				}else{
					divisao = n1 / n2;
					printf("Divis�o: %.2f\n", divisao);
				}
				break;
			
			default:
				printf("Op��o inexistente!\n");
				
		}
		
		printf("Deseja realizar outra opera��o? (s) para sim ou (n) para n�o:");
		scanf("%s", &op2);
		
	}while(op2 == 's');
	
	
	return 0;
}
