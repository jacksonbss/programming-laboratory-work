#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <locale.h>

/* cadastrar aluno, excluir aluno, alterar aluno, buscar aluno, listar todos os aluno, 
listar aluno de determinada disciplina, listar alunos aprovados e sair.  */
int fim = 0;
struct date

	{
		int dia;
		int mes;
		int ano;	
	};

struct disciplina
	{
		char nome[50];
		char professor[50];
		double notas[3];
	};

struct aluno
	{
		int matricula;
		char nome[50];
		char endereco[100];
		struct date dataNascimento;
		struct disciplina disciplinas;
	}tipoAluno[20];

void cadastrarAluno()
	{
		printf("Digite a matricula do Aluno:\n");
		scanf("%d", &tipoAluno[fim].matricula);
		setbuf(stdin, NULL);
		printf("Digite o nome do Aluno:\n");
		scanf("%[^\n]s", tipoAluno[fim].nome);
		setbuf(stdin, NULL);
		printf("Digite o endereço do Aluno:\n");
		scanf("%[^\n]s", tipoAluno[fim].endereco);
		setbuf(stdin, NULL);
		printf("Digite a data de nascimento do funcionario: (dd/mm/aa)\n");
		scanf("%d %d %d", &tipoAluno[fim].dataNascimento.dia, &tipoAluno[fim].dataNascimento.mes, &tipoAluno[fim].dataNascimento.ano);
		setbuf(stdin, NULL);
		printf("Digite informações sobre a disciplina: \nNOME PROFESSOR NOTAS: N1 N2 N3\n");
		fflush(stdin); 
   		fgets(tipoAluno[fim].disciplinas.nome, 50, stdin);
   		fgets(tipoAluno[fim].disciplinas.professor, 50, stdin);
   		//scanf("%f", &tipoAluno[fim].disciplinas.notas);
		//gets(&tipoAluno[fim].disciplinas.nome, &tipoAluno[fim].disciplinas.professor, &tipoAluno[fim].disciplinas.notas);
		fim++;
	};

int main(void)
	{
		setlocale(LC_ALL, "Portuguese");

		int menu;

		while (menu != 8)
	{
		printf("\nMENU\n\nDigite um dos numeros abaixo de acordo com sua opção:\n");
		printf("1. Cadastrar Aluno.\n2. Excluir Aluno.\n3. Alterar Aluno.\n4. Buscar Aluno.\n5. Listar todos os alunos.\n6. Listar Aluno de determinada disciplina.\n7. Listar alunos aprovados.\n8. Sair\n");
		scanf("%d", &menu);
		
		if (menu == 1)
		{
			if(fim <= 20)
			{
				cadastrarAluno();
			}else
			{
				printf("Impossivel cadastrar. Vetor cheio.");
			}	
		}
		else if (menu == 2)
		{
			
		}
		else if (menu == 3)
		{
			
		}
		else if (menu == 4)
		{
			
		}
		else if (menu == 5)
		{
				
		}
		else if (menu == 6)
		{
				
		}
		else if (menu == 7)
		{
				
		}
		else if (menu == 8)
		{
			break;	
		}
	}

		return 0;
	}
