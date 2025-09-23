case 3: // Visualização de venda
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