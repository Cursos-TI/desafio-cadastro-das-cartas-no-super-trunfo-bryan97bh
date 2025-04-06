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
    // Declaração das variáveis para a carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
// Leitura dos dados da Carta 1
printf("Cadastro da Carta 1:\n");

printf("Digite o estado (A a H): ");
scanf(" %c", &estado1);

printf("Digite o código da carta (ex: A01): ");
scanf("%s", codigo1);

printf("Digite o nome da cidade: ");
scanf(" %[^\n]", nomeCidade1);  // lê até a nova linha

printf("Digite a população da cidade: ");
scanf("%d", &populacao1);

printf("Digite a área da cidade (em km²): ");
scanf("%f", &area1);

printf("Digite o PIB da cidade (em bilhões de reais): ");
scanf("%f", &pib1);

printf("Digite o número de pontos turísticos: ");
scanf("%d", &pontosTuristicos1);
// Leitura dos dados da Carta 2
printf("\nCadastro da Carta 2:\n");

printf("Digite o estado (A a H): ");
scanf(" %c", &estado2);

printf("Digite o código da carta (ex: B02): ");
scanf("%s", codigo2);

printf("Digite o nome da cidade: ");
scanf(" %[^\n]", nomeCidade2);

printf("Digite a população da cidade: ");
scanf("%d", &populacao2);

printf("Digite a área da cidade (em km²): ");
scanf("%f", &area2);

printf("Digite o PIB da cidade (em bilhões de reais): ");
scanf("%f", &pib2);

printf("Digite o número de pontos turísticos: ");
scanf("%d", &pontosTuristicos2);

    return 0;
}
