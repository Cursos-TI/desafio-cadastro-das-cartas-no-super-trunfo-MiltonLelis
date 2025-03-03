#include <stdio.h>

/*
Desafio Super Trunfo - Países
Tema 1 - Cadastro das Cartas
Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
Siga os comentários para implementar cada parte do desafio.
*/

int main() {
    // Lê 2 cartas e em seguida imprime os valores das referidas cartas
    // Declarando variáveis da primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[30];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    double superPoder1;

    // Declarando variáveis da segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[30];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    double superPoder2;
    
    // Lendo os dados da primeira carta
    printf("Carta 1:\n");
    printf("Digite a Letra do Estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta: \n");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a População: \n");
    scanf("%lu", &populacao1);

    printf("Digite a Área(em Km2): \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    // Calculando a Densidade Populacional da primeira carta
    densidadePopulacional1 = (float) populacao1 / area1;
    // Calculando o PIB per Capita da primeira carta
    pibPerCapita1 = pib1 * (float) 1000000000 / (float) populacao1;
    // Calculando o super poder da primeira carta
    superPoder1 = (double) populacao1 + (double) area1 + (double) pib1 + (double) pontosTuristicos1 + (double) pibPerCapita1 + ( (double) 1 / (double) densidadePopulacional1);

    // Exibindo os dados da primeira carta
    printf("\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2lf\n", superPoder1);

    // Lendo os dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Digite a Letra do Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta: \n");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a População: \n");
    scanf("%lu", &populacao2);

    printf("Digite a Área(em Km2): \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    // Calculando a Densidade Populacional da segunda carta
    densidadePopulacional2 = (float) populacao2 / area2;
    // Calculando o PIB per Capita da segunda carta
    pibPerCapita2 = pib2 * (float) 1000000000 / (float) populacao2;
    // Calculando o super poder da segunda carta
    superPoder2 = (double) populacao2 + (double) area2 + (double) pib2 + (double) pontosTuristicos2 + (double) pibPerCapita2 + ( (double) 1 / (double) densidadePopulacional2);
    
    // Exibindo os dados da segunda carta
    printf("\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2lf\n", superPoder2);

    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", (populacao1 > populacao2));
    printf("Área: Carta 1 venceu (%d)\n", (area1 > area2));
    printf("PIB: Carta 1 venceu (%d)\n", (pib1 > pib2));
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2));
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", (densidadePopulacional2 > densidadePopulacional1));
    printf("PIB per Capita: Carta 1 venceu (%d)\n", (pibPerCapita1 > pibPerCapita2));
    printf("Super Poder: Carta 1 venceu (%d)\n", (superPoder1 > superPoder2));

    return 0;
}
