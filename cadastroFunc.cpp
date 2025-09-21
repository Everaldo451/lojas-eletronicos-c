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
        printf("\n--- MENU FUNCIONÁRIO ---\n");
        printf("1 - Cadastrar funcionário - \n");
        printf("2 - Visualizar funcionário - \n");
        printf("3 - Voltar ao menu principal - \n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                printf("\n--- Cadastro do Funcionário ---\n");
                printf("Matrícula: ");
                scanf("%d", &matricula);
                getchar();

                printf("Nome: ");
                gets(nome);

                printf("Endereço: ");
                gets(endereco);

                printf("Telefone: ");
                scanf("%d", &telefone);

                printf("Data de nascimento (dd mm aaaa): ");
                scanf("%d %d %d", &dia, &mes, &ano);

                printf("Salário: ");
                scanf("%f", &salario);
                getchar();

                printf("Turno de trabalho: ");
                gets(turno);

                cadastrado = 1; 
                printf("\nFuncionário cadastrado com sucesso!\n");
                break;

            case 2:
                if (cadastrado == 0) {
                    printf("\nNenhum funcionário cadastrado ainda.\n");
                } else {
                    printf("\n--- Dados do Funcionário ---\n");
                    printf("Matrícula: %d\n", matricula);
                    printf("Nome: %s\n", nome);
                    printf("Endereço: %s\n", endereco);
                    printf("Telefone: %d\n", telefone);
                    printf("Data de nascimento: %02d/%02d/%d\n", dia, mes, ano);
                    printf("Salário: R$ %.2f\n", salario);
                    printf("Turno: %s\n", turno);
                }
                break;

            case 3:
                printf("\nVoltando ao menu principal...\n");
                break;

            default:
                printf("\nOpção inválida! Tente novamente.\n");
        }

    } while (opcao != 3);

    return 0;
}

