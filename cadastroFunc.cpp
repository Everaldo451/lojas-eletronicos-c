#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
   
    int matricula, telefone, dia, mes, ano;
    char nome[50], endereco[100], turno[20];
    float salario;

    int cadastrado = 0;  
    int opcao;

    do {
        printf("\n--- MENU FUNCION�RIO ---\n");
        printf("1 - Cadastrar funcion�rio - \n");
        printf("2 - Visualizar funcion�rio - \n");
        printf("3 - Voltar ao menu principal - \n");
        printf("Escolha uma op��o: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                printf("\n--- Cadastro do Funcion�rio ---\n");
                printf("Matr�cula: ");
                scanf("%d", &matricula);
                getchar();

                printf("Nome: ");
                gets(nome);

                printf("Endere�o: ");
                gets(endereco);

                printf("Telefone: ");
                scanf("%d", &telefone);

                printf("Data de nascimento (dd mm aaaa): ");
                scanf("%d %d %d", &dia, &mes, &ano);

                printf("Sal�rio: ");
                scanf("%f", &salario);
                getchar();

                printf("Turno de trabalho: ");
                gets(turno);

                cadastrado = 1; 
                printf("\nFuncion�rio cadastrado com sucesso!\n");
                break;

            case 2:
                if (cadastrado == 0) {
                    printf("\nNenhum funcion�rio cadastrado ainda.\n");
                } else {
                    printf("\n--- Dados do Funcion�rio ---\n");
                    printf("Matr�cula: %d\n", matricula);
                    printf("Nome: %s\n", nome);
                    printf("Endere�o: %s\n", endereco);
                    printf("Telefone: %d\n", telefone);
                    printf("Data de nascimento: %02d/%02d/%d\n", dia, mes, ano);
                    printf("Sal�rio: R$ %.2f\n", salario);
                    printf("Turno: %s\n", turno);
                }
                break;

            case 3:
                printf("\nVoltando ao menu principal...\n");
                break;

            default:
                printf("\nOp��o inv�lida! Tente novamente.\n");
        }

    } while (opcao != 3);

    return 0;
}

