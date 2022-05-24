#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, soma, subtracao, multiplicacao, divisao;
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
				divisao = n1 / n2;
				printf("Divisão: %.2f\n", divisao);
			break;
		}
		
		printf("Deseja realizar outra operação? (s) para sim ou (n) para não:");
		scanf("%s", &op2);
		
	}while(op2 == 's');
	
	
	return 0;
}
