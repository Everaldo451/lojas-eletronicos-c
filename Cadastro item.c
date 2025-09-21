#include <string.h>
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    
    char codigo_barras[50] = "0000000000", nome_produto[100], fabricante_produto[100];
    int dia_fab, mes_fab, ano_fab;
    double preco;
    int quantidade;

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
    

    return 0;
}


