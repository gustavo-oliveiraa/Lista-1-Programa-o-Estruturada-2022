/* Regras: 
Menor que 1 -> Não nasceu
1 até 15 -> não vota
16 ou 17 -> opcional
18 até 64 -> obrigatório
65 ou mais -> opcional
41 -> ganha prêmio 1 $$$
82 -> ganha prêmio 2 $$$


*OBS: professor não consegui fazer, pesso desculpa, e amanha epero ficar de cara com o quao facil
devia ser e eu não encontrei uma maneira.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int idade;
	
	printf("Eleitoral.\n");
	printf("Informe a idade:");
	scanf("%d", &idade);
	
	if(idade < 1){
		printf("Nao nasceu.\n");
	}
		else{
			printf("Nasceu.\n");
		}
		
				if(idade >= 1){
					printf("Nao vota.\n");
				}
					else{
						printf("Vota.\n");
					}
							
						if(idade <= 15){
							printf("Nao vota.\n");
						}
							else{
								printf("Vota.\n");
							}
							
								if(idade == 16){
									printf("Voto opcional.\n");
								}
								
									if(idade == 17){
										printf("Voto opcional.\n");
									}
									
										if(idade >= 18){
											printf("Voto obrigatorio.\n");
										}
											else{
												printf("Voto nao obrigatorio.\n");
											}
											
													if(idade == 41){
														printf("Ganha premio 1.\n");
													}
											
												if(idade <= 64){
													printf("Voto obrigatorio.\n");
												}
													else{
														printf("Voto opcional.\n");
													}
													
														if(idade >= 65){
															printf("Voto opcional.\n");
														}
														
															
																if(idade == 82){
																	printf("Ganha premio 2.\n");
																}
	return 0;
}
