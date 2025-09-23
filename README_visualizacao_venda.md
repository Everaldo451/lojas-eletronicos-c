# Parte do Trabalho – Visualização da Venda

Este arquivo contém apenas a minha parte do trabalho: **Visualização dos dados da venda**.

## Onde colocar
Este trecho deve ser adicionado dentro do `switch (opcao_menu_principal)` → `case 3`, na seção de **visualização** (`opcao_menu_secundario == 2`).

## Código
```c
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
```

## Variáveis necessárias
Para que funcione corretamente, o código precisa ter estas variáveis já declaradas no programa principal:

```c
int venda_existe;              // indica se existe venda cadastrada
int quantidade_vendida;        // quantidade vendida
double total_fatura;           // valor total (quantidade * preço)
char nome_funcionario[100];    // nome do vendedor
char nome_produto[100];        // nome do produto
```

---
Assim, o líder do grupo pode integrar facilmente esta parte ao código principal.
