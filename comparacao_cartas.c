#include <stdio.h>

// Nova Fase: Comparando Cartas do Super Trunfo
// Nível Novato - Comparação de um atributo
// Aluno: Vinícius Silva (BrokeNz7)

int main() {
  // Variáveis Carta 1
  char codigo1[4], nome1[50];
  long int populacao1;
  float area1, pib1;
  int pontos1;

  // Variáveis Carta 2
  char codigo2[4], nome2[50];
  long int populacao2;
  float area2, pib2;
  int pontos2;

  // =============================================
  // CADASTRO DAS CARTAS (reaproveitado do desafio anterior)
  // =============================================
  printf("=== CADASTRO DA PRIMEIRA CARTA ===\n");
  printf("Codigo da carta (ex: A01): ");
  scanf("%s", codigo1);
  printf("Nome do Pais: ");
  scanf(" %[^\n]", nome1);
  printf("Populacao: ");
  scanf("%ld", &populacao1);
  printf("Area (km2): ");
  scanf("%f", &area1);
  printf("PIB: ");
  scanf("%f", &pib1);
  printf("Pontos turisticos: ");
  scanf("%d", &pontos1);

  printf("\n=== CADASTRO DA SEGUNDA CARTA ===\n");
  printf("Codigo da carta (ex: A02): ");
  scanf("%s", codigo2);
  printf("Nome do Pais: ");
  scanf(" %[^\n]", nome2);
  printf("Populacao: ");
  scanf("%ld", &populacao2);
  printf("Area (km2): ");
  scanf("%f", &area2);
  printf("PIB: ");
  scanf("%f", &pib2);
  printf("Pontos turisticos: ");
  scanf("%d", &pontos2);

  // =============================================
  // CÁLCULOS (Densidade e PIB per capita)
  // =============================================
  float densidade1 = (float)populacao1 / area1;
  float pib_per_capita1 = pib1 / populacao1;
  float densidade2 = (float)populacao2 / area2;
  float pib_per_capita2 = pib2 / populacao2;

  // Exibição básica das cartas
  printf("\n=== CARTAS CADASTRADAS ===\n");
  printf("\nCarta 1: %s - %s\n", codigo1, nome1);
  printf("Populacao: %ld | Area: %.2f km2 | PIB: %.2f | Pontos: %d\n", populacao1, area1, pib1, pontos1);
  printf("Densidade: %.2f | PIB per capita: %.2f\n\n", densidade1, pib_per_capita1);

  printf("Carta 2: %s - %s\n", codigo2, nome2);
  printf("Populacao: %ld | Area: %.2f km2 | PIB: %.2f | Pontos: %d\n", populacao2, area2, pib2, pontos2);
  printf("Densidade: %.2f | PIB per capita: %.2f\n", densidade2, pib_per_capita2);

  // =============================================
  // NÍVEL NOVATO DA NOVA FASE: COMPARAÇÃO DE UM ATRIBUTO
  // Atributo escolhido: POPULAÇÃO (maior ganha)
  // =============================================
  printf("\n=== COMPARAÇÃO DE CARTAS (Atributo: Populacao) ===\n\n");

  printf("Carta 1 - %s: %ld habitantes\n", nome1, populacao1);
  printf("Carta 2 - %s: %ld habitantes\n", nome2, populacao2);

  if (populacao1 > populacao2) {
    printf("\nResultado: Carta 1 (%s) venceu!\n", nome1);
  } else if (populacao2 > populacao1) {
    printf("\nResultado: Carta 2 (%s) venceu!\n", nome2);
  } else {
    printf("\nResultado: Empate!\n");
  }

  return 0;
}