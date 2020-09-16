// ALGORITMO BÁSICO : CALC USANDO SWITCH E DO WHILW

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>


int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int i;
	float n1,n2, calculo;
	char op;
	
	do {
		n1 = n2 = calculo = 0;
		
		printf(">>>>>>CALCULADORA<<<<<<\n");
		printf("[1] - Adição\n");	
		printf("[2] - Subtração\n");	
		printf("[3] - Multiplicação\n");
		printf("[4] - Divisão\n");		
		printf("[0] - Sair\n");	
		
		printf("DIGITE UMA OPÇÃO : ");
		op = getche();
		
		/*
		if((op == '1') || (op == '2') || (op == '3') || (op == '4')){
			
			printf("\n\nCÁLCULO\n\n");
		}else if(op=='0') {
			printf("\n\nSAINDO...\n\n");
		}else{
			printf("\n\nOPÇÃO INVÁLIDA...\n\n");
		}*/
		switch(op){			
			case '1' : system("cls");
			printf("OPERAÇÃO SOMA\n");
			
			printf("DIGITE O 1º VALOR :");
			scanf("%f",&n1);
			printf("DIGITE O 2º VALOR :");
			scanf("%f",&n2);
			calculo = n1 + n2;
			
			break;
			
			case '2' : system("cls");
			printf("OPERAÇÃO SUBTRAÇÃO\n");
			printf("DIGITE O 1º VALOR :");
			scanf("%f",&n1);
			printf("DIGITE O 2º VALOR :");
			scanf("%f",&n2);
			calculo = n1 - n2;

			break;
			
			case '3' : system("cls");
			printf("OPERAÇÃO MULTIPLICAÇÃO\n");
			printf("DIGITE O 1º VALOR :");
			scanf("%f",&n1);
			printf("DIGITE O 2º VALOR :");
			scanf("%f",&n2);
			calculo = n1 * n2;

			break;
			
			case '4' : system("cls"); 
			printf("OPERAÇÃO DIVISÃO\n");
			printf("DIGITE O 1º VALOR :");
			scanf("%f",&n1);
			printf("DIGITE O 2º VALOR :");
			scanf("%f",&n2);
			calculo = n1 / n2;

			break;
	
			case '0' : printf("\n\nSAINDO...\n\n");
			break;
			
			default : printf("\n\nOPÇÃO INVÁLIDA\n\n");
			
		}
		if(calculo==0){//EVITAR QUE O RESULTADO SEJA EXIBIDO SEM VALOR
			system("pause");
			system("cls");	
		}else{//EXIBIR APENAS SE HOUVER ALGUM VALOR NA VARIÁVEL CÁLCULO;
			printf("\nRESULTADO : %.2f\n",calculo);
			system("pause");
			system("cls");
		}
	}
	while(op!='0');
	
}