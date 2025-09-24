#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    // dados do funcionário
    int matricula;
    char nome_funcionario[100], endereco_funcionario[100], telefone_funcionario[20];
    int dia_nasc, mes_nasc, ano_nasc;
    float salario;
    char turno[30];
    int funcionario_existe = 0;
    //Dados do item
    char codigo_barras[50], nome_produto[100], fabricante_produto[100];
    int dia_fab, mes_fab, ano_fab;
    double preco;
    int quantidade;
    int item_existe = 0;

    //Dados da venda
    int quantidade_vendida;
    double total_fatura;
    int venda_existe = 0;
    //
    int opcao_menu_principal;
    printf("Bem vindo ao app de gestão da loja de eletrônicos!\n");
    do {
        printf("\nDigite uma das seguintes opções:\n1-Controle de pessoal\n2-Controle de estoque\n3-Controle de vendas\n4-Encerrar programa\n");
        scanf("%d", &opcao_menu_principal);
        if (opcao_menu_principal>=1 && opcao_menu_principal<=3) {
            int opcao_menu_secundario;
            printf("\nDigite uma das seguintes opções:\n1-Cadastro\n2-Ver dados\n\n");
            scanf("%d", &opcao_menu_secundario);
            getchar();
            if (opcao_menu_secundario==1) {
                switch (opcao_menu_principal) {
                    case 1:
                        // Cadastro de funcionário
                        
	                    printf("\n--- Cadastro do Funcionário ---\n");
                        printf("Digite a matrícula: ");
                        scanf("%d", &matricula);
                        getchar();

                        printf("Digite o nome: ");
                        fgets(nome_funcionario, sizeof(nome_funcionario), stdin);
                        nome_funcionario[strcspn(nome_funcionario, "\n")] = '\0';

                        printf("Digite o endereço: ");
                        fgets(endereco_funcionario, sizeof(endereco_funcionario), stdin);
                        endereco_funcionario[strcspn(endereco_funcionario, "\n")] = '\0';

                        printf("Digite o telefone: ");
                        fgets(telefone_funcionario, sizeof(telefone_funcionario), stdin);
                        telefone_funcionario[strcspn(telefone_funcionario, "\n")] = '\0';

                        printf("Digite a data de nascimento (dia mes ano): ");
                        scanf("%d %d %d", &dia_nasc, &mes_nasc, &ano_nasc);

                        printf("Digite o salário: ");
                        scanf("%f", &salario);
                        getchar();

                        printf("Digite o turno de trabalho: ");
                        fgets(turno, sizeof(turno), stdin);
                        turno[strcspn(turno, "\n")] = '\0';

                        funcionario_existe=1;
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

                        printf("Digite o preço (ex: 99.90): ");
                        scanf("%lf", &preco);
                        getchar();

                        printf("Digite a quantidade em estoque: ");
	                    scanf("%d", &quantidade);
                        getchar();

                        printf("Digite a data de fabricação (dd mm aaaa): ");
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
                            printf("Cadastre um funcionário antes de realizar a venda.\n");
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

                            quantidade = quantidade - quantidade_vendida;
                            total_fatura = quantidade_vendida*preco;

                            printf("Venda cadastrada com sucesso!\n");
                            printf("Quantidade restante em estoque: %d\n", quantidade);

                            venda_existe=1;
                        }
                        break;
                    default:
                        break;
                }
            } else if (opcao_menu_secundario == 2){
               switch (opcao_menu_principal) {
                    case 1: // Visualização de funcionário
                        printf("\nDADOS DO FUNCIONÁRIO\n");
                        if (funcionario_existe == 1) {
                            printf("Matrícula: %d\n", matricula);
                            printf("Nome: %s\n", nome_funcionario);
                            printf("Endereço: %s\n", endereco_funcionario);
                            printf("Telefone: %s\n", telefone_funcionario);
                            printf("Data de Nascimento: %02d/%02d/%04d\n", dia_nasc, mes_nasc, ano_nasc);
                            printf("Salário: %.2f\n", salario);
                            printf("Turno: %s\n", turno);
                        } else {
                            printf("Nenhum funcionário cadastrado ainda.\n");
                        }
                        break;
                    case 2:
                        // Visualização de produto
                        if (item_existe) {
                            printf("\n--- DADOS DO PRODUTO ---\n");
                            printf("Codigo de barras: %s\n", codigo_barras);
                            printf("Nome: %s\n", nome_produto);
                            printf("Data de fabricacao: %02d/%02d/%04d\n", dia_fab, mes_fab, ano_fab);
                            printf("Preco: R$ %.2lf\n", preco);
                            printf("Fabricante: %s\n", fabricante_produto);
                            printf("Quantidade em estoque: %d\n\n", quantidade);
                        } else {
                        printf("Vazio: Nenhum produto cadastrado.\n\n");
                        }
                        break;
                    case 3:
                        // Visualização de venda
                        printf("\n--- DADOS DA VENDA ---\n");
                        if (venda_existe) {
                            printf("Nome do Vendedor: %s", nome_funcionario);
                            printf("Produto: %s\n", nome_produto);
                            printf("Quantidade Vendida: %d\n", quantidade_vendida);
                            printf("Total da Fatura: R$ %.2lf\n", total_fatura);
                        } else {
                            printf("Nenhuma venda cadastrada ainda.\n");
                        }
                        break;
                    default:
                        break;
                }
            }
        } else if (opcao_menu_principal != 4) {
            printf("Opção inválida!\n\n");
        }

    } while (opcao_menu_principal != 4);

    printf("\nPrograma encerrado.\n");
    return 0;
}
