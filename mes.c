// ALGORITMO BÁSICO : CONTADOR DE CARNEIRO
#include <stdio.h>
#include <locale.h>
//á¸¾ODIFICAÃ‡ÃƒO
int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	int carneiro=0;
	char dormir;
	

	
	
	do{
		fflush(stdin);
		 
		/*	LIMPEZA DE BUFFER :  QUANDO DIGITAMOS O CARACTER (B), A MEMÓRIA TEMPORÁRIA ARMAZENA
			(B) E A TECLA ENTER, POIS PRESSINAMOS DUAS. SEM A LIMPEZA ELE IRÁ PROCESSAR O ENTER DIGITADO 
			 E SOLICITARÁ UM NOVO CARACTERE.  
		*/	
		
		printf("JÁ DORMIU? ");
		scanf("%c",&dormir);	
		carneiro = carneiro+1;
		
	}while(dormir!='s');
	
	printf("\nCONTEI %i CARNEIROS",carneiro-1);//PARA N CONTABILIZAR O SIM.*/
	
	

}

