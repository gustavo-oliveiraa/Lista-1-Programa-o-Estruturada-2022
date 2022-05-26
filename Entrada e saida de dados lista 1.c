#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char Rs[100], Nome[100], Ender[100], Comp[100], Bairro[100], Est[10], City[30], op, Email[30], opEmail[5], placa1[10], placa2[10], placa3[10],  modelo1[20], modelo2[20], modelo3[20], AssResp[30], cor1[15], cor2[15], cor3[15]; 
	char Cep[20], Tel1[20], Tel2[20], CPF[20], CNPJ[20], InscE[25], InscM[25], CNAE[25], DataN[20], ContResp[20], TelCom[20], DataH[20];
	int Num = 0, DDD1 = 0, DDD2 = 0, NumVeic = 0, ano1 = 0, ano2 = 0, ano3 = 0;
		
	printf("Digite a Razão Social:");
	scanf("%[^\n]s", &Rs);
	fflush(stdin);	
	printf("Digite o Nome Completo:");
	scanf("%[^\n]s", &Nome);
	fflush(stdin);		
	printf("Digite o endereço:");
	scanf("%[^\n]s", &Ender);
	fflush(stdin);		
	printf("Digite o Número:");
	scanf("%d", &Num);
	fflush(stdin);		
	printf("Digite o Complemento:");
	scanf("%[^\n]s", &Comp);
	fflush(stdin);	
	printf("Digite o Bairro:");
	scanf("%[^\n]s", &Bairro);
	fflush(stdin);	
	printf("Digite o CEP:");
	scanf("%s", &Cep);
	fflush(stdin);	
	printf("Digite o Estado:");
	scanf("%[^\n]s", &Est);
	fflush(stdin);	
	printf("Digite a Cidade:");
	scanf("%[^\n]s", &City);
	fflush(stdin);	
	printf("Digite o DDD, do telefone residencial ou comercial:");
	scanf("%d", &DDD1);
	fflush(stdin);	
	printf("Digite o Telefone Residencial ou Comercial:");
	scanf("%s", &Tel1);
	fflush(stdin);	
	printf("Digite o DDD, do telefone celular:");
	scanf("%d", &DDD2);
	fflush(stdin);	
	printf("Digite o Telefone Celular:");
	scanf("%s", &Tel2);
	fflush(stdin);	
	printf("Digite seu CPF:");
	scanf("%s", &CPF);
	fflush(stdin);
		
	printf("Você é uma pessoa Jurídica? Digite (s) - sim ou (n) - não:");
	scanf("%s", &op);
	fflush(stdin);
	
	switch(op){
		case 's':
			printf("Digite seu CNPJ:");
			scanf("%[^\n]s", &CNPJ);
			fflush(stdin);
			printf("Digite seu Insc. Estadual:");
			scanf("%[^\n]s", &InscE);
			fflush(stdin);
			printf("Digite seu Insc. Municipal:");
			scanf("%[^\n]s", &InscM);
			fflush(stdin);
			printf("Digite seu CNAE:");
			scanf("%[^\n]s", &CNAE);
			fflush(stdin);			
			printf("Digite sua Data de Nascimento:");
			scanf("%s", &DataN);
			fflush(stdin);			
			printf("Digite seu E-mail:");
			scanf("%s", &Email);
			fflush(stdin);			
			printf("Deseja receber os próximos boletos por E-mail? (s) - sim ou (n) - não:");
			scanf("%s", &opEmail);
			fflush(stdin);			
			printf("Digite o Contato do Responsável:");
			scanf("%s", &ContResp);
			fflush(stdin);			
			printf("Digite o Telefone Comercial:");
			scanf("%s", &TelCom);
			fflush(stdin);			
			printf("Digite a Data de hoje:");
			scanf("%s", &DataH);
			fflush(stdin);			
			printf("Assinatura do Responsável:");
			scanf("%[^\n]s", &AssResp);
			fflush(stdin);			
			
			printf("Quantos veículos gostaria de registrar min - (1) e max - (3):");
			scanf("%d", &NumVeic);
			fflush(stdin);
			
			switch(NumVeic){
				
				case 1: 
				
				printf("Digite a placa do veículo 1:");
				scanf("%s", &placa1);
				fflush(stdin);
				printf("Digite o modelo do veículo 1:");
				scanf("%[^\n]s", &modelo1);
				fflush(stdin);				
				printf("Digite o ano do veículo 1:");
				scanf("%d", &ano1);
				fflush(stdin);				
				printf("Digite a cor do veículo 1:");
				scanf("%[^\n]s", &cor1);
				fflush(stdin);
				
				break;
				
				case 2: 
				
				printf("Digite a placa do veículo 1:");
				scanf("%s", &placa1);
				fflush(stdin);
				printf("Digite o modelo do veículo 1:");
				scanf("%[^\n]s", &modelo1);
				fflush(stdin);				
				printf("Digite o ano do veículo 1:");
				scanf("%d", &ano1);
				fflush(stdin);				
				printf("Digite a cor do veículo 1:");
				scanf("%[^\n]s", &cor1);
				fflush(stdin);
							
				printf("Digite a placa do veículo 2:");
				scanf("%s", &placa2);
				fflush(stdin);				
				printf("Digite o modelo do veículo 2:");
				scanf("%[^\n]s", &modelo2);
				fflush(stdin);
				printf("Digite o ano do veículo 2:");
				scanf("%d", &ano2);
				fflush(stdin);	
				printf("Digite a cor do veículo 2:");
				scanf("%[^\n]s", &cor2);
				fflush(stdin);
				
				break;
				
				case 3:
				
				printf("Digite a placa do veículo 1:");
				scanf("%s", &placa1);
				fflush(stdin);
				printf("Digite o modelo do veículo 1:");
				scanf("%[^\n]s", &modelo1);
				fflush(stdin);				
				printf("Digite o ano do veículo 1:");
				scanf("%d", &ano1);
				fflush(stdin);				
				printf("Digite a cor do veículo 1:");
				scanf("%[^\n]s", &cor1);
				fflush(stdin);
								
				printf("Digite a placa do veículo 2:");
				scanf("%s", &placa2);
				fflush(stdin);				
				printf("Digite o modelo do veículo 2:");
				scanf("%[^\n]s", &modelo2);
				fflush(stdin);				
				printf("Digite o ano do veículo 2:");
				scanf("%d", &ano2);
				fflush(stdin);				
				printf("Digite a cor do veículo 2:");
				scanf("%[^\n]s", &cor2);
				fflush(stdin);
								
				printf("Digite a placa do veículo 3:");
				scanf("%s", &placa3);
				fflush(stdin);				
				printf("Digite o modelo do veículo 3:");
				scanf("%[^\n]s", &modelo3);
				fflush(stdin);				
				printf("Digite o ano do veículo 3:");
				scanf("%d", &ano3);
				fflush(stdin);				
				printf("Digite a cor do veículo 3:");
				scanf("%[^\n]s", &cor3);
				fflush(stdin);
				
				break;
				
				default:
					
					printf("Número incorreto.");
					
			}
			
		break;
					
		case 'n':
		
			printf("Digite sua Data de Nascimento:");
			scanf("%s", &DataN);
			fflush(stdin);			
			printf("Digite seu E-mail:");
			scanf("%s", &Email);
			fflush(stdin);			
			printf("Deseja receber os próximos boletos por E-mail? (s) - sim ou (n) - não:");
			scanf("%s", &opEmail);
			fflush(stdin);			
			printf("Digite o Telefone Comercial:");
			scanf("%s", &TelCom);
			fflush(stdin);			
			printf("Digte a Data de hoje:");
			scanf("%s", &DataH);
			fflush(stdin);			
			printf("Assinatura do Responsável:");
			scanf("%[^\n]s", &AssResp);
			fflush(stdin);
			
			printf("Quantos veículos gostaria de registrar min - (1) e max - (3):");
			scanf("%d", &NumVeic);
			fflush(stdin);
			
			switch(NumVeic){
	
				case 1: 
				
				printf("Digite a placa do veículo 1:");
				scanf("%s", &placa1);
				fflush(stdin);
				printf("Digite o modelo do veículo 1:");
				scanf("%[^\n]s", &modelo1);
				fflush(stdin);				
				printf("Digite o ano do veículo 1:");
				scanf("%d", &ano1);
				fflush(stdin);				
				printf("Digite a cor do veículo 1:");
				scanf("%[^\n]s", &cor1);
				fflush(stdin);
				
				break;
				
				case 2: 
				
				printf("Digite a placa do veículo 1:");
				scanf("%s", &placa1);
				fflush(stdin);				
				printf("Digite o modelo do veículo 1:");
				scanf("%[^\n]s", &modelo1);
				fflush(stdin);				
				printf("Digite o ano do veículo 1:");
				scanf("%d", &ano1);
				fflush(stdin);
				printf("Digite a cor do veículo 1:");
				scanf("%[^\n]s", &cor1);
				fflush(stdin);
				
				printf("Digite a placa do veículo 2:");
				scanf("%s", &placa2);
				fflush(stdin);				
				printf("Digite o modelo do veículo 2:");
				scanf("%[^\n]s", &modelo2);
				fflush(stdin);				
				printf("Digite o ano do veículo 2:");
				scanf("%d", &ano2);
				fflush(stdin);				
				printf("Digite a cor do veículo 2:");
				scanf("%[^\n]s", &cor2);
				fflush(stdin);
				
				break;
				
				case 3:
				
				printf("Digite a placa do veículo 1:");
				scanf("%%s", &placa1);
				fflush(stdin);				
				printf("Digite o modelo do veículo 1:");
				scanf("%[^\n]s", &modelo1);
				fflush(stdin);				
				printf("Digite o ano do veículo 1:");
				scanf("%d", &ano1);
				fflush(stdin);				
				printf("Digite a cor do veículo 1:");
				scanf("%[^\n]s", &cor1);
				fflush(stdin);
				
				printf("Digite a placa do veículo 2:");
				scanf("%s", &placa2);
				fflush(stdin);				
				printf("Digite o modelo do veículo 2:");
				scanf("%[^\n]s", &modelo2);
				fflush(stdin);				
				printf("Digite o ano do veículo 2:");
				scanf("%d", &ano2);
				fflush(stdin);				
				printf("Digite a cor do veículo 2:");
				scanf("%[^\n]s", &cor2);
				fflush(stdin);
								
				printf("Digite a placa do veículo 3:");
				scanf("%s", &placa3);
				fflush(stdin);				
				printf("Digite o modelo do veículo 3:");
				scanf("%[^\n]s", &modelo3);
				fflush(stdin);				
				printf("Digite o ano do veículo 3:");
				scanf("%d", &ano3);
				fflush(stdin);				
				printf("Digite a cor do veículo 3:");
				scanf("%[^\n]s", &cor3);
				fflush(stdin);
				
				break;
				
				default:
					
					printf("Número incorreto.");
					
			}
			
			break;
			
			default:
				
				printf("Opção inválida.");
			
			}
			
	fflush(stdin);
	
	system("cls");
			
	printf("Razão Social e Nome Completo:\n");
	printf("%s\n", Rs);
	printf("%s\n", Nome);
	
	printf("Endereço:\n");
	printf("%s\n", Ender);
	
	printf("Número: \t Complemento: \t \t \t \t  Bairro:\n");
	printf("%d \t\t %s \t\t\t %s\n", Num, Comp, Bairro);
	
	printf("CEP: \t \t \t Estado: \t \t \t Cidade: \n");
	printf("%s \t \t  %s \t \t \t %s\n", Cep, Est, City);
	
	printf("DDD \t Telefone Residencial ou Comercial: \t DDD \t Telefone Celular:\n");
	printf("%d \t \t %s \t \t \t  %d \t %s\n", DDD1, Tel1, DDD2, Tel2);
	
	printf("CPF: \t \t \t \t \t CNPJ:\n");
	printf("%s \t \t \t \t %s\n", CPF, CNPJ);
	
	printf("Insc. Estadual: \t \t \t \t Insc. Municipal:\n");
	printf("%s \t \t \t \t \t \t %s\n", InscE, InscM);
	
	printf("CNAE: \t \t \t Data de Nasc: \t \t \t Deseja receber os próximos boleto por e-mail?\n")/
	printf("%s \t \t \t %s \t \t \t \t\t  %s\n", CNAE, DataN, opEmail);
	
	printf("E-mail:\n");
	printf("%s\n", Email);
	
	printf("Contato do Responsável (em caso de Pessoa Jurídica) \t \t \t Telefone Comercial:\n");
	printf("%s \t \t \t \t\t\t\t\t\t %s \n", ContResp, TelCom);
	
	printf("Data: \t \t \t \t \t \t \t \t \t %s\n", AssResp);
	printf("%s \t \t \t \t \t \t \t Assinatura do Responsável\n\n", DataH);
	
	printf("DADOS DOS VEÍCULOS\n");
	
	if(NumVeic == 1){
		
		printf("Placa: \t \t \t Modelo: \t \t \t Ano: \t \t \t \t Cor: \n");
		printf("%s \t \t \t %s \t \t \t \t %d \t \t \t \t %s\n", placa1, modelo1, ano1, cor1);
	}else if(NumVeic == 2){
		
		printf("Placa: \t \t \t Modelo: \t \t \t Ano: \t \t \t \t Cor: \n");
		printf("%s \t \t \t %s \t \t \t \t %d \t \t \t \t %s\n", placa1, modelo1, ano1, cor1);
		printf("%s \t \t \t %s \t \t \t \t %d \t \t \t \t %s\n", placa2, modelo2, ano2, cor2);
	}else if(NumVeic == 3){
	
		printf("Placa: \t \t \t Modelo: \t \t \t Ano: \t \t \t \t Cor: \n");
		printf("%s \t \t \t %s \t \t \t \t %d \t \t \t \t %s\n", placa1, modelo1, ano1, cor1);
		printf("%s \t \t \t %s \t \t \t \t %d \t \t \t \t %s\n", placa2, modelo2, ano2, cor2);
		printf("%s \t \t \t %s \t \t \t \t %d \t \t \t \t %s\n", placa3, modelo3, ano3, cor3);
	}
			
	return 0;
}
