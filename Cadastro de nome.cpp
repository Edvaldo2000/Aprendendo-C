/* Programa Cadastro*/
/* Leitura e escrita de uma estrutura*/
#include<stdio.h>
   int main(void)
   {
   	struct cad_Aluno
   	{
   		char nome[40];
   		float Nonta1;
   		float Nota2;
   		float Nota3;
   		float Nota4;
   	};
   	struct cad_Aluno Aluno;
   	printf("\nCadastro de aluno\n\n");
   	printf(" Informe o nome : ");
   	fflush(stdin);fgets(Aluno.Nome,40,stdin);
   	printf(" Informe a 1a. nota : ");scanf(" %f",&Aluno.Nota1);
   	printf(" Informe a 2a. nota : ")scanf(" %f",&Aluno.Nota2);
   	printf(" Informe a 3a. nota : ")scanf(" %f",&Aluno.Nota3);
   	printf(" Informe a 4a. nota : ")scanf(" %f",&Aluno.Nota4);
   	printf("\n";)
   	printf("Nome : %s\n",Aluno.Nome);
   	printf("Nota1 : %6.2f\n",Aluno.Nota1);
   	printf("Nota2 : %6.2f\n",Aluno.Nota2);
   	printf("Nota3 : %6.2f\n",Aluno.Nota3);
   	printf("Nota4 : %6.2f\n,"Aluno.Nota4);
   	printf("\n\n\n");
   	return 0;
   }
