#include <stdio.h>	// biblioteca de omunicação de usurio
#include <stdlib.h> // biblioteca de alocação de espaço em memoria
#include <locale.h> // biblioteca de alocaçoes de texto por regiões
#include <string.h> // blioteca responavel por cuidar da string

int registro() // função responsavl por cadastra usuario
		{
			// inicio da criação de variaveis/string
			char arquivo[40];
			char cpf[40];
			char nome[40];
			char sobrenome[40];
			char cargo[40];
			//finl da criação
		
			printf("Digite CPF a ser cadastrado:");// coletando informações do usuario
			scanf("%s", cpf);// %s refere-se a string
						
			strcpy(arquivo, cpf); // responsavel por copiar os valores das string
		
			FILE *file;					//  cria um arquivo de banco de dados
			file = fopen(arquivo, "w"); // cria um arquivo de banco de dados/ o w significa função de escrever
			fprintf(file, cpf);			// salvo o valor da variavel
			fclose(file);				// fecho o arquivo
		
			file = fopen(arquivo, "a");//  cria um arquivo de banco de dados
			fprintf(file, ",");// salvo o valor da variavel
			fclose(file);// fecho o arquivo
		
			printf("Digite o nome a ser cadastrado:");// coletando informações do usuario
			scanf("%s", nome);;// %s refere-se a string
		
			file = fopen(arquivo, "a");// cria um arquivo de banco de dados
			fprintf(file, nome);// salvo o valor da variavel
			fclose(file);// fecho o arquivo
		
			file = fopen(arquivo, "a");// cria um arquivo de banco de dados
			fprintf(file, ",");// salvo o valor da variavel
			fclose(file);// fecho o arquivo
		
			printf("Digite o sosbrenome do a ser cadastrado:");// coletando informações do usuario
			scanf("%s", sobrenome);// %s refere-se a string
			file = fopen(arquivo, "a");// cria um arquivo de banco de dados
			fprintf(file, sobrenome);//salvo o valor da variavel
			fclose(file);// fecho o arquivo
		
			file = fopen(arquivo, "a");// cria um arquivo de banco de dados
			fprintf(file, ",");//salvo o valor da variavel
			fclose(file);// fecho o arquivo
		
			printf("Digite o cargo a ser cadastrado:");// coletando informações do usuario
		
			scanf("%s", cargo);// %s refere-se a string
		
			file = fopen(arquivo, "a");// cria um arquivo de banco de dados
			fprintf(file, cargo);//salvo o valor da variavel
			fclose(file);// fecho o arquivo
		
			system("pause");//pausa a tela 
		}

int consulta()
		{
		setlocale(LC_ALL, "portuguese"); // definindo a idioma
		
		// inicio de uma criação
		
		char cpf[40];
		char conteudo[200];
		//fim 
		
		printf("digite cpf a ser consultado:");// coletando informações do usuario
		scanf("%s",cpf);// %s refere-se a string
		
		FILE *file;
		file =fopen(cpf,"r");// cria um arquivo de banco de dados
		
		if(file == NULL)// if é usado como comando 
			{
				
				printf("arquivo não localizado!\n");// coletando informações do usuario
			}
			while(fgets(conteudo,200,file) !=NULL) // NULL é valor não definido/while significa enquanto
					{
						printf("Essas são as informações do usuario!");// coletando informações do usuario
						printf("%s",conteudo);//coletando informações do usuario
						printf("\n\n\n");// coletando informações do usuario
					}
		system("pause");//pausa a tela 
		
		}

int deletar()
		{
			//inicio de uma  função
			char cpf[40];
			//fim 
			
			printf("qual CPF vai ser deletedado:\n");// coletando informações do usuario
			scanf("%s",cpf);// %s refere-se a string
			
			remove(cpf);// responsavel por deletar arquivo
			
			FILE *file;
			file = fopen(cpf,"r");// letra r significa ler
			
			if(file ==NULL)
				{
				  printf("Usuario não encontrado!\n\n");// coletando informações do usuario
				  system("pause");//pausa a tela 
				}
			
			
		}

int main()
	{
	
		int opcao = 0; // definindo as variaveis
	
		int x = 1;
	
		for (x = 1; x = 1;)
		{
	
			system("cls");// responsavel por limpar a tela
	
			setlocale(LC_ALL, "portuguese"); // definindo a idioma
	
			printf("### Livro de Dados Ebac ###\n\n"); // inicio do menu
	
			printf("EScolha menu Desejado:\n\n");
			printf("\t1 - Registrar nomes\n\n");
			printf("\t2 - consultar nomes\n\n");
			printf("\t3 - deletar nomes\n\n");
			printf("\t4 - sair do sistema\n\n");
			printf("opcão"); // final do menu
	
			scanf("%d", &opcao); // armazenando a escolha do usuario
	
			system("cls");// responsalver por limpar a tela 
	
			switch (opcao)// inicio da seleção
			{
	
			case 1:
				registro();// chamada funções
				break;
	
			case 2:
				consulta();
				break;
	
			case 3:
				deletar();
				break;
			
			case 4:
			printf("obrigado por utilizar o sistema!\n");
			return 0;
			break;
			
			default:
	
			printf("Essa opção não esta disponivel!\n");
			system("pause");
			break; 
			// fim da seleção
			
			}
		}
	}

