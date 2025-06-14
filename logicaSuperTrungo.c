#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis para Carta 1
    char estado1[50], codigo1[10], cidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Variáveis para Carta 2
    char estado2[50], codigo2[10], cidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1\n");
    printf("Estado: ");
    fgets(estado1, 50, stdin);
    strtok(estado1, "\n");  // Remove o '\n'

    printf("Codigo da cidade: ");
    fgets(codigo1, 10, stdin);
    strtok(codigo1, "\n");

    printf("Nome da cidade: ");
    fgets(cidade1, 50, stdin);
    strtok(cidade1, "\n");

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (milhoes): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    getchar(); // Limpa buffer

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2\n");
    printf("Estado: ");
    fgets(estado2, 50, stdin);
    strtok(estado2, "\n");

    printf("Codigo da cidade: ");
    fgets(codigo2, 10, stdin);
    strtok(codigo2, "\n");

    printf("Nome da cidade: ");
    fgets(cidade2, 50, stdin);
    strtok(cidade2, "\n");

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (milhoes): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibicao dos dados
    printf("\n=== Dados das Cartas ===\n");

    printf("\nCarta 1 - %s (%s)\n", cidade1, estado1);
    printf("Codigo: %s\nPopulacao: %d\nArea: %.2f km²\nPIB: %.2f mi\nPontos Turisticos: %d\n",
        codigo1, populacao1, area1, pib1, pontosTuristicos1);

    printf("\nCarta 2 - %s (%s)\n", cidade2, estado2);
    printf("Codigo: %s\nPopulacao: %d\nArea: %.2f km²\nPIB: %.2f mi\nPontos Turisticos: %d\n",
        codigo2, populacao2, area2, pib2, pontosTuristicos2);

    // Comparar por populacao
    printf("\n=== Comparando Populacao ===\n");
    if (populacao1 > populacao2) {
        printf("%s tem maior populacao.\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("%s tem maior populacao.\n", cidade2);
    } else {
        printf("Empate na populacao.\n");
    }

    // Comparar por area
    printf("\n=== Comparando Area ===\n");
    if (area1 > area2) {
        printf("%s tem maior area.\n", cidade1);
    } else if (area2 > area1) {
        printf("%s tem maior area.\n", cidade2);
    } else {
        printf("Empate na area.\n");
    }

    // Comparar por PIB
    printf("\n=== Comparando PIB ===\n");
    if (pib1 > pib2) {
        printf("%s tem maior PIB.\n", cidade1);
    } else if (pib2 > pib1) {
        printf("%s tem maior PIB.\n", cidade2);
    } else {
        printf("Empate no PIB.\n");
    }

    // Comparar por pontos turisticos
    printf("\n=== Comparando Pontos Turisticos ===\n");
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("%s tem mais pontos turisticos.\n", cidade1);
    } else if (pontosTuristicos2 > pontosTuristicos1) {
        printf("%s tem mais pontos turisticos.\n", cidade2);
    } else {
        printf("Empate nos pontos turisticos.\n");
    }

    return 0;
}