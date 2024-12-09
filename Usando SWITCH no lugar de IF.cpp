#include <stdio.h> //biblioteca de comunicação com os usuários
#include <stdlib.h> //biblioteca de espaço de memória
#include <locale.h> //biblioteca de alocação de texto por região
int main()
	{
	int opcao=0; // Definindo as variaveis
	int laco=1; // "x" pode ser laco ou qualquer coisa que voce desejar por no nome
	
	for(laco=1;laco=1;)
	{

		system("cls");
		
		setlocale(LC_ALL, "Portuguese"); // Definição do idioma
		printf("### Cartório da EBAC ### \n \n"); // Inicio do menu
		printf("Escolha a opção desejada do menu: \n\n"); // Infromadndo a etapa a seguir
		printf("\t1 - Registrar Nomes\n"); // primeira opção
		printf("\t2 - Consultar Nomes\n"); // segunda opção
		printf("\t3 - Deletar Nomes\n\n"); // terceira opção e fim do menu
		printf("Opção:");
	
		scanf("%d", &opcao); // armazenando a escolha do usuário 
	
		system("cls");
		switch (opcao)
		{
	
			case 1:
			printf("Voce escolheu o registro de nomes!\n" );
			system("pause");
			break;
		
			case 2:
			printf("Voce escolheu consultar os nomes!\n");
			system("pause");
			break;
			
			case 3:
			printf("Voce escolheu deletar o nome!\n");
			system("pause");
			break;
		
			default:
			printf("Voce escolheu uma opçao não catalogada anteriormente, favor verifique sua escolha e tente novamente\n");
			system("pause");
			break;
		}
	
	}
}
 // Fim da seleção, após adicionar as possibilidades não constatadas nas opções anteriores
