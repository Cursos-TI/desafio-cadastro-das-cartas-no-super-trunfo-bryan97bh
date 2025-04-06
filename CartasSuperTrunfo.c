#include <stdio.h>

// Desafio Super Trunfo - Paises
// Cadastro, Calculos e Comparacao de Cartas

int main() {
    // Variaveis para a carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1, superPoder1;

    // Variaveis para a carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2;

    // Entrada Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado1);
    printf("Codigo (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area (em km): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado2);
    printf("Codigo (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area (em km): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calculos
    densidade1 = (area1 > 0) ? populacao1 / area1 : 0;
    pibPerCapita1 = (populacao1 > 0) ? (pib1 * 1000000000.0) / populacao1 : 0;
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0) + pontosTuristicos1 + pibPerCapita1 + ((densidade1 > 0) ? (1.0 / densidade1) : 0);

    densidade2 = (area2 > 0) ? populacao2 / area2 : 0;
    pibPerCapita2 = (populacao2 > 0) ? (pib2 * 1000000000.0) / populacao2 : 0;
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0) + pontosTuristicos2 + pibPerCapita2 + ((densidade2 > 0) ? (1.0 / densidade2) : 0);

    // Exibicao Carta 1
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos turisticos: %d\n", pontosTuristicos1);
    printf("Densidade: %.2f hab/km\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Exibicao Carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos turisticos: %d\n", pontosTuristicos2);
    printf("Densidade: %.2f hab/km\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparacao clara
    printf("\n--- Comparacao de Cartas ---\n");

    printf("Populacao: %s venceu\n", (populacao1 > populacao2) ? "Carta 1" : (populacao2 > populacao1) ? "Carta 2" : "Empate");
    printf("Area: %s venceu\n", (area1 > area2) ? "Carta 1" : (area2 > area1) ? "Carta 2" : "Empate");
    printf("PIB: %s venceu\n", (pib1 > pib2) ? "Carta 1" : (pib2 > pib1) ? "Carta 2" : "Empate");
    printf("Pontos turisticos: %s venceu\n", (pontosTuristicos1 > pontosTuristicos2) ? "Carta 1" : (pontosTuristicos2 > pontosTuristicos1) ? "Carta 2" : "Empate");
    printf("Densidade populacional: %s venceu (menor vence)\n", (densidade1 < densidade2) ? "Carta 1" : (densidade2 < densidade1) ? "Carta 2" : "Empate");
    printf("PIB per capita: %s venceu\n", (pibPerCapita1 > pibPerCapita2) ? "Carta 1" : (pibPerCapita2 > pibPerCapita1) ? "Carta 2" : "Empate");
    printf("Super Poder: %s venceu\n", (superPoder1 > superPoder2) ? "Carta 1" : (superPoder2 > superPoder1) ? "Carta 2" : "Empate");

    return 0;
}
