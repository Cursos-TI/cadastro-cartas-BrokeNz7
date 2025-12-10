
#include <stdio.h>

// Desafio Super Trunfo - Países
// Aluno: Vinícius Silva (BrokeNz7)

  // =============================================
  // NÍVEL NOVATO – CADASTRO DAS CARTAS
  // =============================================
  
int main() {
  // Área para definição das variáveis para armazenar as propriedades dos países
  char codigo1[4], nome1[50];
  long int populacao1, pib1;
  float area1;
  int pontos1;

  char codigo2[4], nome2[50];
  long int populacao2, pib2;
  float area2;
  int pontos2;

  // Área para entrada de dados
  printf("=== CADASTRO DA PRIMEIRA CARTA ===\n");
  printf("Codigo da carta (ex: A01): ");
  scanf("%s", codigo1);
  printf("Nome do País: ");
  scanf(" %[^\n]", nome1);
  printf("Populacao: ");
  scanf("%ld", &populacao1);
  printf("Area (km²): ");
  scanf("%f", &area1);
  printf("PIB: ");
  scanf("%ld", &pib1);
  printf("Pontos turisticos: ");
  scanf("%d", &pontos1);

  printf("\n=== CADASTRO DA SEGUNDA CARTA ===\n");
  printf("Codigo da carta (ex: B01): ");
  scanf("%s", codigo2);
  printf("Nome do País: ");
  scanf(" %[^\n]", nome2);
  printf("Populacao: ");
  scanf("%ld", &populacao2);
  printf("Area (km²): ");
  scanf("%f", &area2);
  printf("PIB: ");
  scanf("%ld", &pib2);
  printf("Pontos turisticos: ");
  scanf("%d", &pontos2);

  // Área para exibição dos dados da cidade
  printf("\n=== CARTAS CADASTRADAS ===\n");

  printf("\nCarta 1: %s\n", codigo1);
  printf("País: %s\n", nome1);
  printf("Populacao: %ld habitantes\n", populacao1);
  printf("Area: %.2f km²\n", area1);
  printf("PIB: R$ %ld\n", pib1);
  printf("Pontos turisticos: %d\n", pontos1);

  printf("\nCarta 2: %s\n", codigo2);
  printf("País: %s\n", nome2);
  printf("Populacao: %ld habitantes\n", populacao2);
  printf("Area: %.2f km²\n", area2);
  printf("PIB: R$ %ld\n", pib2);
  printf("Pontos turisticos: %d\n", pontos2);

  // =============================================
  // NÍVEL AVENTUREIRO – CÁLCULOS AUTOMÁTICOS
  // =============================================

  float densidade1 = (float)populacao1 / area1;
  float pib_per_capita1 = (float)pib1 / populacao1;

  float densidade2 = (float)populacao2 / area2;
  float pib_per_capita2 = (float)pib2 / populacao2;

  printf("\n=== RESULTADOS DO NÍVEL AVENTUREIRO ===\n");

  printf("\nCarta 1 – %s\n", codigo1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per capita: R$ %.2f\n", pib_per_capita1);

  printf("\nCarta 2 – %s\n", codigo2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per capita: R$ %.2f\n", pib_per_capita2);

  // =============================================
  // NÍVEL MESTRE – COMPARAÇÃO DE CARTAS
  // =============================================

  int vitorias1 = 0, vitorias2 = 0;

  printf("\n=== COMPARAÇÃO DAS CARTAS (NÍVEL MESTRE) ===\n");

  // População
  if (populacao1 > populacao2) { printf("População: Carta 1 vence\n"); vitorias1++; }
  else if (populacao2 > populacao1) { printf("População: Carta 2 vence\n"); vitorias2++; }
  else printf("População: Empate\n");

  // Área
  if (area1 > area2) { printf("Área: Carta 1 vence\n"); vitorias1++; }
  else if (area2 > area1) { printf("Área: Carta 2 vence\n"); vitorias2++; }
  else printf("Área: Empate\n");

  // PIB
  if (pib1 > pib2) { printf("PIB: Carta 1 vence\n"); vitorias1++; }
  else if (pib2 > pib1) { printf("PIB: Carta 2 vence\n"); vitorias2++; }
  else printf("PIB: Empate\n");

  // Pontos turísticos
  if (pontos1 > pontos2) { printf("Pontos turísticos: Carta 1 vence\n"); vitorias1++; }
  else if (pontos2 > pontos1) { printf("Pontos turísticos: Carta 2 vence\n"); vitorias2++; }
  else printf("Pontos turísticos: Empate\n");

  // Densidade (MENOR vence)
  if (densidade1 < densidade2) { printf("Densidade: Carta 1 vence (menor densidade)\n"); vitorias1++; }
  else if (densidade2 < densidade1) { printf("Densidade: Carta 2 vence (menor densidade)\n"); vitorias2++; }
  else printf("Densidade: Empate\n");

  // Super Poder (soma de tudo)
  long int super1 = populacao1 + area1 + pib1 + pontos1;
  long int super2 = populacao2 + area2 + pib2 + pontos2;

  printf("\nSuper Poder Carta 1: %ld\n", super1);
  printf("Super Poder Carta 2: %ld\n", super2);

  // Resultado final
  printf("\n=== RESULTADO FINAL ===\n");
  if (vitorias1 > vitorias2) printf("CARTA 1 (%s) VENCEU O JOGO! (%d x %d)\n", nome1, vitorias1, vitorias2);
  else if (vitorias2 > vitorias1) printf("CARTA 2 (%s) VENCEU O JOGO! (%d x %d)\n", nome2, vitorias2, vitorias1);
  else printf("EMPATE TÉCNICO! (%d x %d)\n", vitorias1, vitorias2);

  return 0;


}