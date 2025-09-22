#include <stdio.h>

int main() {
    // Dados do produto já definidos
    char codigo_barras[] = "7891234567890";
    char nome[] = "Arroz Tipo 1";
    int dia = 10, mes = 9, ano = 2025;
    float preco = 25.90;
    char fabricante[] = "Alimentos Brasil LTDA";
    int quantidade = 150;
    int cadastrado = 1;

    if (cadastrado) {
        printf("\n--- DADOS DO PRODUTO ---\n");
        printf("Codigo de barras: %s\n", codigo_barras);
        printf("Nome: %s\n", nome);
        printf("Data de fabricacao: %02d/%02d/%04d\n", dia, mes, ano);
        printf("Preco: R$ %.2f\n", preco);
        printf("Fabricante: %s\n", fabricante);
        printf("Quantidade em estoque: %d\n", quantidade);
    } else {
        printf("Vazio: Nenhum produto cadastrado.\n");
    }

    return 0;
}

