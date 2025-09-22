#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    //Dados do item
    char codigo_barras[50], nome_produto[100], fabricante_produto[100];
    int dia_fab, mes_fab, ano_fab;
    double preco;
    int quantidade;
    int item_existe = 0;
    //Dados do funcionário
    int funcionario_existe = 0;
    //Dados da venda
    int quantidade_vendida, quantidade_Estoque;
    //
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
                        printf("CADASTRO DE ITEM NO ESTOQUE\n");

                        printf("Digite o nome do produto: ");
                        fgets(nome_produto, sizeof(nome_produto), stdin);
                        nome_produto[strcspn(nome_produto, "\n")] = '\0';

                        printf("Digite o fabricante: ");
                        fgets(fabricante_produto, sizeof(fabricante_produto), stdin);
                        fabricante_produto[strcspn(fabricante_produto, "\n")] = '\0';
    
                        printf("Digite o codigo de barras: ");
                        fgets(codigo_barras, sizeof(codigo_barras), stdin);
                        codigo_barras[strcspn(codigo_barras, "\n")] = '\0';

                        printf("Digite o pre�o (ex: 99.90): ");
                        scanf("%lf", &preco);
                        getchar(); 

                        printf("Digite a quantidade em estoque: ");
	                    scanf("%d", &quantidade);
                        getchar(); 
    
                        printf("Digite a data de fabrica��o (dd mm aaaa): ");
                        scanf("%d %d %d", &dia_fab, &mes_fab, &ano_fab);
    
                        item_existe = 1;
    
                        if(item_existe == 1)
    	                    printf("\nO item '%s' foi cadastrado com sucesso!\n", nome_produto);
                        else
    	                    printf("\n?Nenhum item cadastrado!\n");
                        break;
                    case 3:
                        // Cadastro de venda
                        printf("CADASTRO DE VENDAS\n");

                        //Verificar se já há cadastros antes de seguir com o de vendas     
                        if (item_existe == 0) {
                            printf("Cadastre um item antes de realizar a venda.\n");                     
                        }
                        else if (funcionario_existe == 0) {
                            printf("Cadastre um funcion�rio antes de realizar a venda.\n");
                        }
                        else {
                            //Cadastro da venda  
                            printf("Digite a quantidade vendida: ");
                            scanf("%d", &quantidade_vendida);

                            // Verifica se quantidade vendida não ultrapassa o estoque
                            while (quantidade_vendida > quantidade) {
                                printf("Estoque insuficiente! Temos apenas %d unidades.\n", quantidade);
                                printf("Digite novamente a quantidade: ");
                                scanf("%d", &quantidade_vendida);
                            }    

                            quantidade_Estoque = quantidade - quantidade_vendida;
                            quantidade = quantidade_Estoque;

                            printf("Venda cadastrada com sucesso!\n");
                            printf("Quantidade restante em estoque: %d\n", quantidade);
                        }
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