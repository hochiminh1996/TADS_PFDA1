// ALGORITMO B�SICO : CONTADOR DE CARNEIRO
#include <stdio.h>
#include <locale.h>
//ḾODIFICAÇÃO
int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	int carneiro=0;
	char dormir;
	

	
	
	do{
		fflush(stdin);
		 
		/*	LIMPEZA DE BUFFER :  QUANDO DIGITAMOS O CARACTER (B), A MEM�RIA TEMPOR�RIA ARMAZENA
			(B) E A TECLA ENTER, POIS PRESSINAMOS DUAS. SEM A LIMPEZA ELE IR� PROCESSAR O ENTER DIGITADO 
			 E SOLICITAR� UM NOVO CARACTERE.  
		*/	
		
		printf("J� DORMIU? ");
		scanf("%c",&dormir);	
		carneiro = carneiro+1;
		
	}while(dormir!='s');
	
	printf("\nCONTEI %i CARNEIROS",carneiro-1);//PARA N CONTABILIZAR O SIM.*/
	
	

}

