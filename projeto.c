#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int opcao_menu_principal;
    printf("Bem vindo ao app de gestão da loja de eletrônicos!\n\n");
    do {
        printf("Digite uma das seguintes opções:\n1-Controle de pessoal\n2-Controle de estoque\n3-Controle de vendas\n4-Encerrar programa\n\n");
        scanf("%d", &opcao_menu_principal);
        if (opcao_menu_principal>=1 && opcao_menu_principal<=3) {
            int opcao_menu_secundario;
            printf("Digite uma das seguintes opções:\n1-Cadastro\n2-Ver dados\n\n");
            scanf("%d", &opcao_menu_secundario);
            if (opcao_menu_secundario==1) {
                switch (opcao_menu_principal) {
                    case 1:
                        // Cadastro de funcionário
                        break;
                    case 2:
                        // Cadastro de produto
                        break;
                    case 3:
                        // Cadastro de venda
                        break;
                    default:
                        break;
                }
            } else {
                switch (opcao_menu_principal) {
                    case 1:
                        // Visualização de funcionário
                        break;
                    case 2:
                        // Visualização de produto
                        break;
                    case 3:
                        // Visualização de venda
                        break;
                    default:
                        break;
                }
            }
        } else if (opcao_menu_principal!=4) {
            printf("Opção inválida!\n\n");
        }
    } while (opcao_menu_principal!=4);
}