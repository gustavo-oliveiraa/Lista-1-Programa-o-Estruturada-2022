/*
Nome: Gustavo Maxwel de Sousa Oliveira
Matrícula: UC21101257
Matéria: Programação estruturada
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
		printf("Digite um número que deseja realizar alguma operação:");
		scanf("%f", &n1);
		
		printf("Escolha qual função deseja realizar nessa operação +, -, *, /: ");
		scanf("%s", &op);
		
		switch(op){
			case '+':
				printf("Digite o segundo número para realizar a soma:");
				scanf("%f", &n2);
				soma = n1 + n2;
				printf("Soma: %.2f\n", soma);
			break;
			case '-':
				printf("Digite o segundo número para realizar a subtração:");
				scanf("%f", &n2);
				subtracao = n1 - n2;
				printf("Subtração: %.2f\n", subtracao);
			break;
			case '*':
				printf("Digite o segundo número para realizar a multiplicação:");
				scanf("%f", &n2);
				multiplicacao = n1 * n2;
				printf("Multiplicação: %.2f\n", multiplicacao);
			break;
			case '/':
				printf("Digite o segundo número para realizar a divisão:");
				scanf("%f", &n2);
				if(n2 == 0){
					printf("Erro\n");
				}else{
					divisao = n1 / n2;
					printf("Divisão: %.2f\n", divisao);
				}
				break;
			
			default:
				printf("Opção inexistente!\n");
				
		}
		
		printf("Deseja realizar outra operação? (s) para sim ou (n) para não:");
		scanf("%s", &op2);
		
	}while(op2 == 's');
	
	
	return 0;
}
