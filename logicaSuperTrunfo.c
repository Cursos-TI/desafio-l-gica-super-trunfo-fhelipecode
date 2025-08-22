#include <stdio.h>
#include <string.h>

int main() {
    // Declaração das variáveis da carta 1
    char estado1[3];
    char codigo1[5];
    char nomeCidade1[50];
    unsigned long int populacao1;
    double area1;
    double pib1;
    int pontosTuristicos1;
    double densidadePopulacional1 = 0;
    double pibperCapita1 = 0;

    // Declaração das variáveis da carta 2
    char estado2[3];
    char codigo2[5];
    char nomeCidade2[50];
    unsigned long int populacao2;
    double area2;
    double pib2;
    int pontosTuristicos2;
    double densidadePopulacional2 = 0;
    double pibperCapita2 = 0;

    // ===== Entrada da carta 1 =====
    printf("Cadastro da Carta 1:\n");
    printf("Digite a letra do Estado: ");
    scanf("%2s", estado1);

    printf("Digite o código da carta: ");
    scanf("%4s", codigo1);

    getchar();

    printf("Digite o nome da Cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    if (nomeCidade1[strlen(nomeCidade1) - 1] == '\n') {
        nomeCidade1[strlen(nomeCidade1) - 1] = '\0';
    }

    printf("Digite a população da Cidade (sem pontos): ");
    scanf("%lu", &populacao1);

    printf("Digite a Área da cidade (em Km²): ");
    scanf("%lf", &area1);

    printf("Digite o PIB da Cidade (em bilhões): ");
    scanf("%lf", &pib1);

    printf("Digite o Número de pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // ===== Entrada da carta 2 =====
    printf("\nCadastro da Carta 2:\n");
    printf("Digite a letra do Estado: ");
    scanf("%2s", estado2);

    printf("Digite o código da carta: ");
    scanf("%4s", codigo2);

    getchar();

    printf("Digite o nome da Cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    if (nomeCidade2[strlen(nomeCidade2) - 1] == '\n') {
        nomeCidade2[strlen(nomeCidade2) - 1] = '\0';
    }

    printf("Digite a população da Cidade (sem pontos): ");
    scanf("%lu", &populacao2);

    printf("Digite a Área da cidade (em Km²): ");
    scanf("%lf", &area2);

    printf("Digite o PIB da Cidade (em bilhões): ");
    scanf("%lf", &pib2);

    printf("Digite o Número de pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // ===== Cálculos =====
    if (area1 != 0.0)
        densidadePopulacional1 = populacao1 / area1;
    if (populacao1 != 0)
        pibperCapita1 = (pib1 * 1000000000) / (double)populacao1;

    if (area2 != 0.0)
        densidadePopulacional2 = populacao2 / area2;
    if (populacao2 != 0)
        pibperCapita2 = (pib2 * 1000000000) / (double)populacao2;

    // ===== Comparação =====
    printf("\n=== Comparação de Cartas (Atributo: Densidade Populacional) ===\n\n");

    printf("Carta 1 - %s (%s): %.2lf hab/km²\n", nomeCidade1, estado1, densidadePopulacional1);
    printf("Carta 2 - %s (%s): %.2lf hab/km²\n\n", nomeCidade2, estado2, densidadePopulacional2);

    if (densidadePopulacional1 < densidadePopulacional2) {
        printf("Resultado: Carta 1 (%s) venceu! (menor densidade populacional)\n", nomeCidade1);
    } else if (densidadePopulacional2 < densidadePopulacional1) {
        printf("Resultado: Carta 2 (%s) venceu! (menor densidade populacional)\n", nomeCidade2);
    } else {
        printf("Resultado: Empate! Ambas têm a mesma densidade populacional.\n\n");
    }

    return 0;
}