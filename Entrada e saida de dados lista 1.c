#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char Rs[100], Nome[100], Ender[100], Comp[100], Bairro[100], Est[10], Cidade[30], op, Email[30], opEmail[5], placa1[10], placa2[10], placa3[10],  modelo1[20], modelo2[20], modelo3[20], AssResp[30], cor1[15], cor2[15], cor3[15]; 
	int Num, Cep, DDD1, Tel1, DDD2, Tel2, CPF, CNPJ, InscE, InscM, CNAE, DataN, ContResp, TelCom, Data, NumVeic, ano1, ano2, ano3;
	
	
	printf("Digite a Raz�o Social:");
	scanf("%[^\n]s", &Rs);
	fflush(stdin);
		
	printf("Digite o Nome Completo:");
	scanf("%[^\n]s", &Nome);
	fflush(stdin);
	
		
	printf("Digite o endere�o:");
	scanf("%[^\n]s", &Ender);
	fflush(stdin);
	
		
	printf("Digite o N�mero:");
	scanf("%d", &Num);
	fflush(stdin);
	
		
	printf("Digite o Complemento:");
	scanf("%[^\n]s", &Comp);
	fflush(stdin);
	
		
	printf("Digite o Bairro:");
	scanf("%[^\n]s", &Bairro);
	fflush(stdin);
	
	printf("Digite o CEP:");
	scanf("%d", &Cep);
	fflush(stdin);
	
	printf("Digite o Estado:");
	scanf("%[^\n]s", &Est);
	fflush(stdin);
	
	printf("Digite a Cidade:");
	scanf("%[^\n]s", &Cidade);
	fflush(stdin);
	
	printf("Digite o DDD, do telefone residencial ou comercial:");
	scanf("%d", &DDD1);
	fflush(stdin);
	
	printf("Digite o Telefone Residencial ou Comercial:");
	scanf("%d", &Tel1);
	fflush(stdin);
	
	printf("Digite o DDD, do telefone celular:");
	scanf("%d", &DDD2);
	fflush(stdin);
	
	printf("Digite o Telefone Celular:");
	scanf("%d", &Tel2);
	fflush(stdin);
	
	printf("Digite seu CPF:");
	scanf("%d", &CPF);
	fflush(stdin);
	
	
	
	printf("Voc� � uma pessoa Jur�dica? Digite (s) - sim ou (n) - n�o:");
	scanf("%[^\n]s", &op);
	fflush(stdin);
	
	switch(op){
		case 's':
			printf("Digite seu CNPJ:");
			scanf("%d", &CNPJ);
			fflush(stdin);
			printf("Digite seu Insc. Estadual:");
			scanf("%d", &InscE);
			fflush(stdin);
			printf("Digite seu Insc. Municipal:");
			scanf("%d", &InscM);
			fflush(stdin);
			printf("Digite seu CNAE:");
			scanf("%d", &CNAE);
			fflush(stdin);
			
			printf("Digite sua Data de Nascimento:");
			scanf("%d", &DataN);
			fflush(stdin);
			
			printf("Digite seu E-mail:");
			scanf("%[^\n]s", &Email);
			fflush(stdin);
			
			printf("Deseja receber os pr�ximos boletos por E-mail? (s) - sim ou (n) - n�o");
			scanf("%[^\n]s", &opEmail);
			fflush(stdin);
			
			printf("Digite o Contato do Respons�vel:");
			scanf("%d", &ContResp);
			fflush(stdin);
			
			printf("Digite o Telefone Comercial:");
			scanf("%d", &TelCom);
			fflush(stdin);
			
			printf("Digite a Data de hoje:");
			scanf("%d", &Data);
			fflush(stdin);
			
			printf("Assinatura do Respons�vel:");
			scanf("%[^\n]s", &AssResp);
			fflush(stdin);			
			
			printf("Quantos ve�culos possui? min - (0) e max - (3):");
			scanf("%d", &NumVeic);
			fflush(stdin);
			
			switch(NumVeic){
				
				case 1: 
				
				printf("Digite a placa do ve�culo:");
				scanf("%[^\n]s", &placa1);
				fflush(stdin);
				
				printf("Digite o modelo do ve�culo:");
				scanf("%[^\n]s", &modelo1);
				fflush(stdin);
				
				printf("Digite o ano do ve�culo:");
				scanf("%[^\n]s", &ano1);
				fflush(stdin);
				
				printf("Digite a cor do ve�culo:");
				scanf("%[^\n]s", &cor1);
				fflush(stdin);
				
				break;
				
				case 2: 
				
				printf("Digite a placa do ve�culo:");
				scanf("%[^\n]s", &placa1);
				fflush(stdin);
				
				printf("Digite o modelo do ve�culo:");
				scanf("%[^\n]s", &modelo1);
				fflush(stdin);
				
				printf("Digite o ano do ve�culo:");
				scanf("%[^\n]s", &ano1);
				fflush(stdin);
				
				printf("Digite a cor do ve�culo:");
				scanf("%[^\n]s", &cor1);
				fflush(stdin);
				
				printf("Digite a placa do ve�culo:");
				scanf("%[^\n]s", &placa2);
				fflush(stdin);
				
				printf("Digite o modelo do ve�culo:");
				scanf("%[^\n]s", &modelo2);
				fflush(stdin);
				
				printf("Digite o ano do ve�culo:");
				scanf("%[^\n]s", &ano2);
				fflush(stdin);
				
				printf("Digite a cor do ve�culo:");
				scanf("%[^\n]s", &cor2);
				fflush(stdin);
				
				break;
				
				case 3:
				
				printf("Digite a placa do ve�culo:");
				scanf("%[^\n]s", &placa1);
				fflush(stdin);
				
				printf("Digite o modelo do ve�culo:");
				scanf("%[^\n]s", &modelo1);
				fflush(stdin);
				
				printf("Digite o ano do ve�culo:");
				scanf("%[^\n]s", &ano1);
				fflush(stdin);
				
				printf("Digite a cor do ve�culo:");
				scanf("%[^\n]s", &cor1);
				fflush(stdin);
				
				printf("Digite a placa do ve�culo:");
				scanf("%[^\n]s", &placa2);
				fflush(stdin);
				
				printf("Digite o modelo do ve�culo:");
				scanf("%[^\n]s", &modelo2);
				fflush(stdin);
				
				printf("Digite o ano do ve�culo:");
				scanf("%[^\n]s", &ano2);
				fflush(stdin);
				
				printf("Digite a cor do ve�culo:");
				scanf("%[^\n]s", &cor2);
				fflush(stdin);
				
				printf("Digite a placa do ve�culo:");
				scanf("%[^\n]s", &placa3);
				fflush(stdin);
				
				printf("Digite o modelo do ve�culo:");
				scanf("%[^\n]s", &modelo3);
				fflush(stdin);
				
				printf("Digite o ano do ve�culo:");
				scanf("%[^\n]s", &ano3);
				fflush(stdin);
				
				printf("Digite a cor do ve�culo:");
				scanf("%[^\n]s", &cor3);
				fflush(stdin);
				
				break;
				
				default:
					
					printf("N�mero incorreto.");
					
			}
			
		break;
			
		
		case 'n':
		
			printf("Digite sua Data de Nascimento:");
			scanf("%d", &DataN);
			fflush(stdin);
			
			printf("Digite seu E-mail:");
			scanf("%[^\n]s", &Email);
			fflush(stdin);
			
			printf("Deseja receber os pr�ximos boletos por E-mail? (s) - sim ou (n) - n�o:");
			scanf("%[^\n]s", &opEmail);
			fflush(stdin);
			
			printf("Digite o Telefone Comercial:");
			scanf("%d", &TelCom);
			fflush(stdin);
			
			printf("Digte a Data de hoje:");
			scanf("%d", &Data);
			fflush(stdin);
			
			printf("Assinatura do Respons�vel:");
			scanf("%[^\n]s", &AssResp);
			fflush(stdin);
			
			
			
			printf("Quantos ve�culos possui? min - (0) e max - (3):");
			scanf("%d", &NumVeic);
			fflush(stdin);
			
			switch(NumVeic){
	
				case 1: 
				
				printf("Digite a placa do ve�culo:");
				scanf("%[^\n]s", &placa1);
				fflush(stdin);
				
				printf("Digite o modelo do ve�culo:");
				scanf("%[^\n]s", &modelo1);
				fflush(stdin);
				
				printf("Digite o ano do ve�culo:");
				scanf("%d", &ano1);
				fflush(stdin);
				
				printf("Digite a cor do ve�culo:");
				scanf("%[^\n]s", &cor1);
				fflush(stdin);
				
				break;
				
				case 2: 
				
				printf("Digite a placa do ve�culo:");
				scanf("%[^\n]s", &placa1);
				fflush(stdin);
				
				printf("Digite o modelo do ve�culo:");
				scanf("%[^\n]s", &modelo1);
				fflush(stdin);
				
				printf("Digite o ano do ve�culo:");
				scanf("%d", &ano1);
				fflush(stdin);
				
				printf("Digite a cor do ve�culo:");
				scanf("%[^\n]s", &cor1);
				fflush(stdin);
				
				printf("Digite a placa do ve�culo:");
				scanf("%[^\n]s", &placa2);
				fflush(stdin);
				
				printf("Digite o modelo do ve�culo:");
				scanf("%[^\n]s", &modelo2);
				fflush(stdin);
				
				printf("Digite o ano do ve�culo:");
				scanf("%d", &ano2);
				fflush(stdin);
				
				printf("Digite a cor do ve�culo:");
				scanf("%[^\n]s", &cor2);
				fflush(stdin);
				
				break;
				
				case 3:
				
				printf("Digite a placa do ve�culo:");
				scanf("%[^\n]s", &placa1);
				fflush(stdin);
				
				printf("Digite o modelo do ve�culo:");
				scanf("%[^\n]s", &modelo1);
				fflush(stdin);
				
				printf("Digite o ano do ve�culo:");
				scanf("%d", &ano1);
				fflush(stdin);
				
				printf("Digite a cor do ve�culo:");
				scanf("%[^\n]s", &cor1);
				fflush(stdin);
				
				printf("Digite a placa do ve�culo:");
				scanf("%[^\n]s", &placa2);
				fflush(stdin);
				
				printf("Digite o modelo do ve�culo:");
				scanf("%[^\n]s", &modelo2);
				fflush(stdin);
				
				printf("Digite o ano do ve�culo:");
				scanf("%d", &ano2);
				fflush(stdin);
				
				printf("Digite a cor do ve�culo:");
				scanf("%[^\n]s", &cor2);
				fflush(stdin);
				
				printf("Digite a placa do ve�culo:");
				scanf("%[^\n]s", &placa3);
				fflush(stdin);
				
				printf("Digite o modelo do ve�culo:");
				scanf("%[^\n]s", &modelo3);
				fflush(stdin);
				
				printf("Digite o ano do ve�culo:");
				scanf("%d", &ano3);
				fflush(stdin);
				
				printf("Digite a cor do ve�culo:");
				scanf("%[^\n]s", &cor3);
				fflush(stdin);
				
				break;
				
				default:
					
					printf("N�mero incorreto.");
					
			}
			
			break;
			
			default:
				
				printf("Op��o inv�lida.");
			
			}
			
	fflush(stdin);
			
	printf("Raz�o Social e Nome Completo:\n");
	printf("%s\n", Rs);
	printf("%s\n", Nome);
	
	printf("Endere�o:\n");
	printf("%s\n", Ender);
	
	printf("N�mero: \t Complemento: \t \t \t  Bairro:\n");
	printf("%d \t\t %s \t \t %s\n", Num, Comp, Bairro);
	
	printf("CEP: \t Estado: \t Cidade: \n");
	printf("%d \t %s \t %s\n", Cep, Est, Cidade);
	
	printf("DDD \t Telefone Residencial ou Comercial: \t DDD \t Telefone Celular:\n");
	printf("%d \t %d \t \t \t %d \t \t \t %d\n", DDD1, Tel1, DDD2, Tel2);
	
	printf("CPF: \t \t \t \t CNPJ:\n");
	printf("%d \t \t \t \t %d\n", CPF, CNPJ);
	
	printf("Insc. Estadual: \t \t \t \t Insc. Municipal:\n");
	printf("%d \t \t \t \t %d\n", InscE, InscM);
	
	printf("CNAE: \t \t \t Data de Nasc.: \t \t \t Deseja receber os pr�ximos boleto por e-mail?\n")/
	printf("%d \t \t \t %d \t \t \t %s\n", CNAE, DataN, opEmail);
	
	printf("E-mail:\n");
	printf("%s", Email);
	
	printf("Contato do Respons�vel (em caso de Pessoa Jur�dica) \t \t \t Telefone Comercial:\n");
	printf("%d \t \t \t \t %d \n", ContResp, TelCom);
	
	printf("Data: \t \t \t \t %s\nAssinatura do Respons�vel", AssResp);
	printf("%d\n", Data);
	
	
	
	
	
	
		
	
	
	return 0;
}
