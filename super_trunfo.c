     #include <stdio.h>
     #include <string.h>

// Definindo a estrutura para armazenar os dados de uma carta
typedef struct {
    char estado[20];
    char codigo[4];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

// Função para limpar o buffer de entrada
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    Carta carta1, carta2;
    
    // Leitura dos dados da primeira carta
    printf("\n=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (A-Z): ");
    scanf("%s", &carta1.estado);

    printf("Digite o codigo da carta: ");
    scanf("%s", &carta1.codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", &carta1.cidade);

    printf("Digite a populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a area (km): ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &carta1.pib);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Leitura dos dados da segunda carta
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Digite o codigo da carta: ");
    scanf("%s", &carta2.codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", &carta2.cidade);

    printf("Digite a populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a area (km): ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &carta2.pib);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Calculando densidade populacional e PIB per capita
    densidadePop1 = carta1.populacao / carta1.area;
    densidadePop2 = carta2.populacao / carta2.area;
    
    pibPerCapita1 = (carta1.pib * 1000000000) / carta1.populacao; // Convertendo PIB para reais
    pibPerCapita2 = (carta2.pib * 1000000000) / carta2.populacao;

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.pontosTuristicos);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.pontosTuristicos);

    return 0;
}
