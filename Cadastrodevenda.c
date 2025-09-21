#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL,"Portuguese");    
    
    //Váriaveis do cadastro das vendas        
    int quantidade_vendida, quantidade_Estoque;

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

        quantidade_Estoque = quantidade - quantidade_vendida;
        quantidade = quantidade_Estoque;

        printf("Venda cadastrada com sucesso!\n");
        printf("Quantidade restante em estoque: %d\n", quantidade);
    }
    
    printf("Pressione ENTER para sair...");
    getchar();
    getchar();

    return 0;
}
