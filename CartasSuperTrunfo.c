#include <stdio.h>

int main() {
    // === Declaração das variáveis da Carta 1 ===
    char estado1, codigo1[4], nome1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1, superPoder1;

    // === Declaração das variáveis da Carta 2 ===
    char estado2, codigo2[4], nome2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2;

    // === Leitura dos dados da Carta 1 ===
    printf("Informe os dados da Carta 1:\n");
    printf("Estado (A-H): "); scanf(" %c", &estado1);
    printf("Código (ex: A01): "); scanf("%s", codigo1);
    printf("Nome da Cidade: "); scanf(" %[^\n]", nome1);
    printf("População: "); scanf("%lu", &populacao1);
    printf("Área (km²): "); scanf("%f", &area1);
    printf("PIB (em bilhões): "); scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: "); scanf("%d", &pontosTuristicos1);

    // === Leitura dos dados da Carta 2 ===
    printf("\nInforme os dados da Carta 2:\n");
    printf("Estado (A-H): "); scanf(" %c", &estado2);
    printf("Código (ex: B02): "); scanf("%s", codigo2);
    printf("Nome da Cidade: "); scanf(" %[^\n]", nome2);
    printf("População: "); scanf("%lu", &populacao2);
    printf("Área (km²): "); scanf("%f", &area2);
    printf("PIB (em bilhões): "); scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: "); scanf("%d", &pontosTuristicos2);

    // === Cálculo da Carta 1 ===
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1; // PIB convertido para reais
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0) + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);

    // === Cálculo da Carta 2 ===
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0) + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    // === Exibição dos dados da Carta 1 ===
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // === Exibição dos dados da Carta 2 ===
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // === Comparação entre cartas ===
    printf("\n=== Comparação de Atributos ===\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // menor é melhor
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
