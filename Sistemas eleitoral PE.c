/*
Nome: Gustavo Maxwel de Sousa Oliveira
Matrícula: UC21101257
Matéria: Programação estruturada

- Idade menor que 0 não nasceu
- 0 até 15 não vota
- 16 ou 17 opcional
- 18 até 64 obrigatório
- 65 ou mais opcional
- Exatamente 41 ganha prêmio 1 (não deverá apresentar obrigatório)
- Exatamente 82 ganha prêmio 2 (não deverá apresentar opcional)
*/
#include <stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int idade = 0;
	
	printf("-----------SISTEMAS ELEITORAL-----------\n");
	
	printf("Digite a idade, para a votação eleitoral:");
	scanf("%d", & idade);	
	
	if(idade <= 0){
		printf("Idade menor que 0 ainda não nasceu.");
	}else{
		if(idade <= 15){
			printf("Não vota.");
		}else{
			if(idade < 18){
				printf("Voto opcional.");
			}else{
				if(idade < 65){
					if(idade == 41){
						printf("Ganha Prêmio 1.");
					}else{
						printf("Obrigatório.");
					}
				}else{
					if(idade == 82){
						printf("Ganha Prêmio 2.");
					}else{
						printf("Opcional.");
					}
				}
			}
		}
	}
		
	return 0;
	
}
