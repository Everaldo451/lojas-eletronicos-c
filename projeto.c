#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int opcao_menu_principal;
    printf("Bem vindo ao app de gestão da loja de eletrônicos!\n\n");
    do {
        printf("Digite uma das seguintes opções:\n1 - Controle de pessoal\n2-Controle de estoque\n3-Controle de vendas\n4-Encerrar programa\n\n");
        scanf("%d", &opcao_menu_principal);
        switch (opcao_menu_principal) {
            case 1:
                //Código do funcionário
                break;
            case 2:
                //Código de estoque
                break;
            case 3:
                //Código de venda
                break;
            case 4:
                //Aqui é vazio
                break;
            default:
                printf("Opção inválida!\n\n");
                break;
        }
    } while (opcao_menu_principal!=4);
}