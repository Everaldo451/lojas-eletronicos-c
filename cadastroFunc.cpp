int main() {
	setlocale(LC_ALL, "Portuguese");
	
    int matricula, telefone, dia, mes, ano;
    float salario;
    char nome[50], endereco[100], turno[20];
    
	printf("\n--- Cadastro do Funcionário ---\n");
    printf("Digite a matrícula: ");
    scanf("%d", &matricula);
    getchar();

    printf("Digite o nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite o endereço: ");
    fgets(endereco, sizeof(endereco), stdin);

    printf("Digite o telefone: ");
    scanf("%d", &telefone);

    printf("Digite a data de nascimento (dia mes ano): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    printf("Digite o salário: ");
    scanf("%f", &salario);
    getchar();

    printf("Digite o turno de trabalho: ");
    fgets(turno, sizeof(turno), stdin);

    return 0;
}
