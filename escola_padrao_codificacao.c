/*
	ALGORITMO BÁSICO : TURMA
	AUTOR : FELIPPE M.
	DESCRIÇÃO : ESTE ALGORITMO (BÁSICO) VISA CALCULAR A NOTA DE N ALUNOS DE UMA ESCOLA X.
*/

#include <stdio.h>// lib de comandos de i/o
#include <stdlib.h>//lib padrão
#include <locale.h>//idioma
#include <conio.h>//getch() = pause
#define N 4//CONSTANTE

typedef struct{//DEFINIÇÃO DE UM TIPO DE VARIÁVEL COMPOSTA HETEROGÊNEA.
	char nome[30];
	float media,frequencia;
	
}aluno;

aluno turma[N];
//TURMA É UM 'VETOR' DO TIPO 'ALUNO'

int aluno_media(int n){
	float nota = 0, soma = 0, media=0,frequencia;
	int cont=1,cont2=1,i,j;
	// I,J,CONT,CONT2 SÃO CONTADORES
	
	
	//ENTRADA DE VALORES : NOME, NOTA, FREQUENCIA
	for(i=0;i<n;i++){
		soma = 0;
		media = 0;
		cont = 1;
	
		fflush(stdin);//limpa os caracteres digitados anteriormente
		printf("DIGITE O NOME DO ALUNO %i : ",cont2);
		fgets(turma[i].nome,100,stdin);//PEGA UM NOME COM ESPAÇOS E DEFINI A QUANTIDADE DE CARACTERES 
		//fgets(armazenamento, tamanho, entrada)
		fflush(stdin);//limpa os caracteres digitados anteriormente
		
		printf("FREQUÊNCIA DO ALUNO : ");
		scanf("%f",&turma[i].frequencia);
		
		
		for(j=0;j<4;j++){
			
			printf("NOTA %i : ",cont); // cont serve apenas para enumerar as notas
			scanf("%f",&nota);
			soma = soma + nota;
			media = soma / 4;
			
			cont++;
		}
		
		system("clear || cls");
		turma[i].media = media; // NOTA ATRIBUIDA AO CONTEÚDO DAS VARIÁVEIS HETEROGÊNEAS
		
		cont2++;
		//printf("\nMÉDIA : %.2f\n\n",media);
	
	}
	//EXIBIÇÃO DO RESULTADO GERAL
	printf("\nRESULTADO GERAL\n");
	
	for(i=0,cont = 1;i<n;i++){//INICIA TAMBÉM O VALOR DA VARIÁVEL CONT, QUE SERVE APENAS PARA ENUMERAR
		if(turma[i].media>=6 && turma[i].frequencia>=75){
			printf("\n***ALUNO APROVADO***\n");
			printf("Nº%i\tNOME : %s\tMédia : %.2f\t Frequência : %f\n",cont,turma[i].nome,turma[i].media,turma[i].frequencia);
		}else{
			printf("\n***ALUNO REPROVADO***\n");
			printf("Nº%i\tNOME : %s\tMédia : %.2f\t Frequência : %f\n",cont,turma[i].nome,turma[i].media,turma[i].frequencia);
			if(turma[i].media<6 && turma[i].frequencia<75){
				printf("REPROVADO POR NOTA E FREQUÊNCIA\n");
			}else
			if(turma[i].media<6){
				printf("REPROVADO POR NOTA\n");
			}else{
				printf("REPROVADO POR FREQUÊNCIA\n");
			}
		}
		cont++;	
 	}
 	getch();
}

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int quantidade;
	
	printf("COLÉGIO PEDRO II\n\n");
	printf("QUANTIDADE DE ALUNOS : ");
	scanf("%i",&quantidade);
	
	printf("\n");
	
	aluno_media(quantidade);
}
