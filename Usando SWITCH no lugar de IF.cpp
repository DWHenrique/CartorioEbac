#include <stdio.h> //biblioteca de comunica��o com os usu�rios
#include <stdlib.h> //biblioteca de espa�o de mem�ria
#include <locale.h> //biblioteca de aloca��o de texto por regi�o
int main()
	{
	int opcao=0; // Definindo as variaveis
	int laco=1; // "x" pode ser laco ou qualquer coisa que voce desejar por no nome
	
	for(laco=1;laco=1;)
	{

		system("cls");
		
		setlocale(LC_ALL, "Portuguese"); // Defini��o do idioma
		printf("### Cart�rio da EBAC ### \n \n"); // Inicio do menu
		printf("Escolha a op��o desejada do menu: \n\n"); // Infromadndo a etapa a seguir
		printf("\t1 - Registrar Nomes\n"); // primeira op��o
		printf("\t2 - Consultar Nomes\n"); // segunda op��o
		printf("\t3 - Deletar Nomes\n\n"); // terceira op��o e fim do menu
		printf("Op��o:");
	
		scanf("%d", &opcao); // armazenando a escolha do usu�rio 
	
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
			printf("Voce escolheu uma op�ao n�o catalogada anteriormente, favor verifique sua escolha e tente novamente\n");
			system("pause");
			break;
		}
	
	}
}
 // Fim da sele��o, ap�s adicionar as possibilidades n�o constatadas nas op��es anteriores
