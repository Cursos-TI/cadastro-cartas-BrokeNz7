#include <stdio.h>

// Nova Fase: Interatividade no Super Trunfo
// Nível Mestre - Comparação com dois atributos + soma + menus dinâmicos
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

  // Cálculos (usados na comparação)
  float densidade1, densidade2;
  float pib_per_capita1, pib_per_capita2;

  // =============================================
  // CADASTRO DAS CARTAS (reaproveitado)
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
  // NÍVEL MESTRE – COMPARAÇÃO COM DOIS ATRIBUTOS
  // =============================================
  int atributo1, atributo2;
  int vitorias1 = 0, vitorias2 = 0;

  printf("\n=== SUPER TRUNFO - ESCOLHA DOIS ATRIBUTOS PARA COMPARACAO ===\n");

  // Primeiro atributo
  printf("\nEscolha o primeiro atributo:\n");
  printf("1 - Populacao\n");
  printf("2 - Area\n");
  printf("3 - PIB\n");
  printf("4 - Pontos turisticos\n");
  printf("5 - Densidade demografica (menor vence)\n");
  printf("Opcao: ");
  scanf("%d", &atributo1);

  // Segundo atributo (não pode ser o mesmo)
  printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
  printf("1 - Populacao\n");
  printf("2 - Area\n");
  printf("3 - PIB\n");
  printf("4 - Pontos turisticos\n");
  printf("5 - Densidade demografica (menor vence)\n");
  printf("Opcao: ");
  scanf("%d", &atributo2);

  // Verifica se são iguais
  if (atributo1 == atributo2) {
    printf("\nErro: Os dois atributos nao podem ser iguais!\n");
    return 1;
  }

  // Compara o primeiro atributo
  printf("\n=== COMPARACAO 1 ===\n");
  if (atributo1 == 1) { // População
    printf("Populacao: Carta 1: %ld | Carta 2: %ld\n", populacao1, populacao2);
    if (populacao1 > populacao2) vitorias1++;
    else if (populacao2 > populacao1) vitorias2++;
  } else if (atributo1 == 2) { // Área
    printf("Area: Carta 1: %.2f | Carta 2: %.2f\n", area1, area2);
    if (area1 > area2) vitorias1++;
    else if (area2 > area1) vitorias2++;
  } else if (atributo1 == 3) { // PIB
    printf("PIB: Carta 1: %.2f | Carta 2: %.2f\n", pib1, pib2);
    if (pib1 > pib2) vitorias1++;
    else if (pib2 > pib1) vitorias2++;
  } else if (atributo1 == 4) { // Pontos turísticos
    printf("Pontos turisticos: Carta 1: %d | Carta 2: %d\n", pontos1, pontos2);
    if (pontos1 > pontos2) vitorias1++;
    else if (pontos2 > pontos1) vitorias2++;
  } else if (atributo1 == 5) { // Densidade (menor vence)
    printf("Densidade demografica: Carta 1: %.2f | Carta 2: %.2f\n", densidade1, densidade2);
    if (densidade1 < densidade2) vitorias1++;
    else if (densidade2 < densidade1) vitorias2++;
  }

  // Compara o segundo atributo
  printf("\n=== COMPARACAO 2 ===\n");
  if (atributo2 == 1) {
    printf("Populacao: Carta 1: %ld | Carta 2: %ld\n", populacao1, populacao2);
    if (populacao1 > populacao2) vitorias1++;
    else if (populacao2 > populacao1) vitorias2++;
  } else if (atributo2 == 2) {
    printf("Area: Carta 1: %.2f | Carta 2: %.2f\n", area1, area2);
    if (area1 > area2) vitorias1++;
    else if (area2 > area1) vitorias2++;
  } else if (atributo2 == 3) {
    printf("PIB: Carta 1: %.2f | Carta 2: %.2f\n", pib1, pib2);
    if (pib1 > pib2) vitorias1++;
    else if (pib2 > pib1) vitorias2++;
  } else if (atributo2 == 4) {
    printf("Pontos turisticos: Carta 1: %d | Carta 2: %d\n", pontos1, pontos2);
    if (pontos1 > pontos2) vitorias1++;
    else if (pontos2 > pontos1) vitorias2++;
  } else if (atributo2 == 5) {
    printf("Densidade demografica: Carta 1: %.2f | Carta 2: %.2f\n", densidade1, densidade2);
    if (densidade1 < densidade2) vitorias1++;
    else if (densidade2 < densidade1) vitorias2++;
  }

  // Soma dos dois atributos
  float soma1 = (atributo1 == 1 ? populacao1 : (atributo1 == 2 ? area1 : (atributo1 == 3 ? pib1 : (atributo1 == 4 ? pontos1 : densidade1)))) +
                (atributo2 == 1 ? populacao1 : (atributo2 == 2 ? area1 : (atributo2 == 3 ? pib1 : (atributo2 == 4 ? pontos1 : densidade1))));

  float soma2 = (atributo1 == 1 ? populacao2 : (atributo1 == 2 ? area2 : (atributo1 == 3 ? pib2 : (atributo1 == 4 ? pontos2 : densidade2)))) +
                (atributo2 == 1 ? populacao2 : (atributo2 == 2 ? area2 : (atributo2 == 3 ? pib2 : (atributo2 == 4 ? pontos2 : densidade2))));

  printf("\n=== SOMA DOS ATRIBUTOS ESCOLHIDOS ===\n");
  printf("Carta 1: %.2f\n", soma1);
  printf("Carta 2: %.2f\n", soma2);

  // Resultado final
  printf("\n=== RESULTADO FINAL ===\n");
  if (soma1 > soma2) {
    printf("Carta 1 (%s) VENCEU O JOGO!\n", nome1);
  } else if (soma2 > soma1) {
    printf("Carta 2 (%s) VENCEU O JOGO!\n", nome2);
  } else {
    printf("EMPATE TÉCNICO!\n");
  }

  return 0;
}