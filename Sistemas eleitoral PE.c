/*
Nome: Gustavo Maxwel de Sousa Oliveira
Matr�cula: UC21101257
Mat�ria: Programa��o estruturada

- Idade menor que 0 n�o nasceu
- 0 at� 15 n�o vota
- 16 ou 17 opcional
- 18 at� 64 obrigat�rio
- 65 ou mais opcional
- Exatamente 41 ganha pr�mio 1 (n�o dever� apresentar obrigat�rio)
- Exatamente 82 ganha pr�mio 2 (n�o dever� apresentar opcional)
*/
#include <stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int idade = 0;
	
	printf("-----------SISTEMAS ELEITORAL-----------\n");
	
	printf("Digite a idade, para a vota��o eleitoral:");
	scanf("%d", & idade);	
	
	if(idade <= 0){
		printf("Idade menor que 0 ainda n�o nasceu.");
	}else{
		if(idade <= 15){
			printf("N�o vota.");
		}else{
			if(idade < 18){
				printf("Voto opcional.");
			}else{
				if(idade < 65){
					if(idade == 41){
						printf("Ganha Pr�mio 1.");
					}else{
						printf("Obrigat�rio.");
					}
				}else{
					if(idade == 82){
						printf("Ganha Pr�mio 2.");
					}else{
						printf("Opcional.");
					}
				}
			}
		}
	}
		
	return 0;
	
}
