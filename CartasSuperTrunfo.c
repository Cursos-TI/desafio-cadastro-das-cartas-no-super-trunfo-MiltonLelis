#include <stdio.h>

/*
Desafio Super Trunfo em C: desenvolvendo a lógica do jogo - Nível Novato 
*/

int main() {
    // Lê 2 cartas e em seguida imprime os valores das referidas cartas
    // Declarando variáveis da primeira carta
    char estado1[3];
    char codigo1[4];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    double superPoder1;

    // Declarando variáveis da segunda carta
    char estado2[3];
    char codigo2[4];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    double superPoder2;

    // Declarando variável de Atributo de Comparação
    int atributoDeComparacao;
    atributoDeComparacao = 1; // População
    /*
    Atributos de Comparação:
        1 - População
        2 - Área
        3 - PIB
        4 - Número de Pontos Turísticos
        5 - Menor Densidade Populacional
        6 - PIB Per Capita
        7 - Super Poder
    */
    
    // Lendo os dados da primeira carta
    printf("Carta 1:\n");
    printf("Digite o Estado (UF): \n");
    scanf("%s", estado1);

    printf("Digite o Código da Carta: \n");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a População: \n");
    scanf("%d", &populacao1);

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
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2lf\n\n", superPoder1);

    // Lendo os dados da segunda carta
    printf("Carta 2:\n");
    printf("Digite o Estado (UF): \n");
    scanf("%s", estado2);

    printf("Digite o Código da Carta: \n");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a População: \n");
    scanf("%d", &populacao2);

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
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2lf\n\n", superPoder2);

    if (atributoDeComparacao == 1) { // População
        printf("Comparação de cartas (Atributo: População):\n\n");
        printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);
        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
    }

    if (atributoDeComparacao == 2) { // Área
        printf("Comparação de cartas (Atributo: Área):\n\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, area1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, area2);
        if (area1 > area2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
    }

    if (atributoDeComparacao == 3) { // PIB
        printf("Comparação de cartas (Atributo: PIB):\n\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, pib1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, pib2);
        if (pib1 > pib2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
    }

    if (atributoDeComparacao == 4) { // Número de Pontos Turísticos
        printf("Comparação de cartas (Atributo: Número de Pontos Turísticos):\n\n");
        printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, pontosTuristicos1);
        printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, pontosTuristicos2);
        if (pontosTuristicos1 > pontosTuristicos2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
    }

    if (atributoDeComparacao == 5) { // Menor Densidade Populacional
        printf("Comparação de cartas (Atributo: Menor Densidade Populacional):\n\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, densidadePopulacional1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, densidadePopulacional2);
        if (densidadePopulacional1 < densidadePopulacional2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
    }

    if (atributoDeComparacao == 6) { // PIB Per Capita
        printf("Comparação de cartas (Atributo: PIB Per Capita):\n\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, pibPerCapita1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, pibPerCapita2);
        if (pibPerCapita1 > pibPerCapita2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
    }

    if (atributoDeComparacao == 7) { // Super Poder
        printf("Comparação de cartas (Atributo: Super Poder):\n\n");
        printf("Carta 1 - %s (%s): %.2lf\n", cidade1, estado1, superPoder1);
        printf("Carta 2 - %s (%s): %.2lf\n", cidade2, estado2, superPoder2);
        if (superPoder1 > superPoder2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
    }

    return 0;
}
