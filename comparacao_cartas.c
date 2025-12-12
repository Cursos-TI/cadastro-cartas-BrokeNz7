#include <stdio.h>

// Nova Fase: Interatividade no Super Trunfo
// Nível Aventureiro - Menu interativo e comparação por atributo
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

  // Cálculos (serão usados na comparação)
  float densidade1, pib_per_capita1;
  float densidade2, pib_per_capita2;

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

  // Cálculos necessários
  densidade1 = (float)populacao1 / area1;
  densidade2 = (float)populacao2 / area2;
  pib_per_capita1 = pib1 / populacao1;
  pib_per_capita2 = pib2 / populacao2;

  // =============================================
  // MENU INTERATIVO - NÍVEL AVENTUREIRO
  // =============================================
  int opcao;
  int vencedor = 0; // 1 = Carta 1 vence, 2 = Carta 2 vence, 0 = empate

  printf("\n=== SUPER TRUNFO - ESCOLHA O ATRIBUTO PARA COMPARACAO ===\n");
  printf("1 - Populacao\n");
  printf("2 - Area\n");
  printf("3 - PIB\n");
  printf("4 - Pontos turisticos\n");
  printf("5 - Densidade demografica (menor vence)\n");
  printf("Digite sua opcao: ");
  scanf("%d", &opcao);

  printf("\n=== COMPARACAO DE CARTAS ===\n");

  switch (opcao) {
    case 1: // População
      printf("Atributo escolhido: Populacao\n\n");
      printf("Carta 1 - %s: %ld habitantes\n", nome1, populacao1);
      printf("Carta 2 - %s: %ld habitantes\n", nome2, populacao2);
      if (populacao1 > populacao2) vencedor = 1;
      else if (populacao2 > populacao1) vencedor = 2;
      break;

    case 2: // Área
      printf("Atributo escolhido: Area\n\n");
      printf("Carta 1 - %s: %.2f km2\n", nome1, area1);
      printf("Carta 2 - %s: %.2f km2\n", nome2, area2);
      if (area1 > area2) vencedor = 1;
      else if (area2 > area1) vencedor = 2;
      break;

    case 3: // PIB
      printf("Atributo escolhido: PIB\n\n");
      printf("Carta 1 - %s: %.2f\n", nome1, pib1);
      printf("Carta 2 - %s: %.2f\n", nome2, pib2);
      if (pib1 > pib2) vencedor = 1;
      else if (pib2 > pib1) vencedor = 2;
      break;

    case 4: // Pontos turísticos
      printf("Atributo escolhido: Pontos turisticos\n\n");
      printf("Carta 1 - %s: %d pontos\n", nome1, pontos1);
      printf("Carta 2 - %s: %d pontos\n", nome2, pontos2);
      if (pontos1 > pontos2) vencedor = 1;
      else if (pontos2 > pontos1) vencedor = 2;
      break;

    case 5: // Densidade demográfica (menor vence)
      printf("Atributo escolhido: Densidade demografica (menor vence)\n\n");
      printf("Carta 1 - %s: %.2f hab/km2\n", nome1, densidade1);
      printf("Carta 2 - %s: %.2f hab/km2\n", nome2, densidade2);
      if (densidade1 < densidade2) vencedor = 1;
      else if (densidade2 < densidade1) vencedor = 2;
      break;

    default:
      printf("Opcao invalida! Encerrando o jogo.\n");
      return 0;
  }

  // =============================================
  // RESULTADO DA COMPARAÇÃO
  // =============================================
  printf("\n=== RESULTADO ===\n");
  if (vencedor == 1) {
    printf("Carta 1 (%s) venceu!\n", nome1);
  } else if (vencedor == 2) {
    printf("Carta 2 (%s) venceu!\n", nome2);
  } else {
    printf("Empate!\n");
  }

  return 0;
}