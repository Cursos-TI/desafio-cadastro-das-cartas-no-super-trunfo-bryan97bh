#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
// Declaração das variáveis para a carta 1
char estado1;
char codigo1[4];
char nomeCidade1[50];
int populacao1;
float area1;
float pib1;
int pontosTuristicos1;
float densidade1;
float pibPerCapita1;
// Declaração das variáveis para a carta 2
char estado2;
char codigo2[4];
char nomeCidade2[50];
int populacao2;
float area2;
float pib2;
int pontosTuristicos2;
float densidade2;
float pibPerCapita2;
    
// Leitura dos dados da Carta 1
printf("Cadastro da Carta 1:\n");

printf("Digite o estado (A a H): ");
scanf(" %c", &estado1);

printf("Digite o codigo da carta (ex: A01): ");
scanf("%s", codigo1);

printf("Digite o nome da cidade: ");
scanf(" %[^\n]", nomeCidade1);  // lê até a nova linha

printf("Digite a populacao da cidade: ");
scanf("%d", &populacao1);

printf("Digite a area da cidade (em km): ");
scanf("%f", &area1);

printf("Digite o PIB da cidade (em bilhoes de reais): ");
scanf("%f", &pib1);

printf("Digite o numero de pontos turisticos: ");
scanf("%d", &pontosTuristicos1);
// Leitura dos dados da Carta 2
printf("\nCadastro da Carta 2:\n");

printf("Digite o estado (A a H): ");
scanf(" %c", &estado2);

printf("Digite o codigo da carta (ex: B02): ");
scanf("%s", codigo2);

printf("Digite o nome da cidade: ");
scanf(" %[^\n]", nomeCidade2);

printf("Digite a populacao da cidade: ");
scanf("%d", &populacao2);

printf("Digite a area da cidade (em km): ");
scanf("%f", &area2);

printf("Digite o PIB da cidade (em bilhoes de reais): ");
scanf("%f", &pib2);

printf("Digite o numero de pontos turisticos: ");
scanf("%d", &pontosTuristicos2);

// Cálculos para a Carta 1
densidade1 = populacao1 / area1;
pibPerCapita1 = (pib1 * 1000000000) / populacao1; // Convertendo PIB de bilhões para reais

// Cálculos para a Carta 2
densidade2 = populacao2 / area2;
pibPerCapita2 = (pib2 * 1000000000) / populacao2; // Convertendo PIB de bilhões para reais

// Exibição dos dados da Carta 1
printf("\nCarta 1:\n");
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Nome da Cidade: %s\n", nomeCidade1);
printf("Populacao: %d\n", populacao1);
printf("Area: %.2f km\n", area1);
printf("PIB: %.2f bilhoes de reais\n", pib1);
printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

// Exibição dos dados da Carta 2
printf("\nCarta 2:\n");
printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Nome da Cidade: %s\n", nomeCidade2);
printf("Populacao: %d\n", populacao2);
printf("Area: %.2f km\n", area2);
printf("PIB: %.2f bilhoes de reais\n", pib2);
printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

return 0;
}
