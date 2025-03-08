#include <stdio.h>

/*
Desafio Super Trunfo em C: desenvolvendo a lógica do jogo - Nível Novato 
*/

int main() {
    // Lê 2 cartas e em seguida imprime os valores das referidas cartas
    // Declarando variáveis da primeira carta
    char codigo1[] = "A01";
    char pais1[] = "Brasil";
    int populacao1 = 210147125;
    double area1 = 8515767.05;
    float pib1 = 2190;
    int pontosTuristicos1 = 1500;
    float densidadeDemografica1 = (float) populacao1 / (float) area1;

    // Declarando variáveis da segunda carta
    char codigo2[] = "B02";
    char pais2[] = "Argentina";
    int populacao2 = 44938712;
    double area2 = 2766889.0;
    float pib2 = 646.1;
    int pontosTuristicos2 = 900;
    float densidadeDemografica2 =  (float) populacao2 / (float) area2;

    // Declarando variável de Atributo de Comparação
    int atributoDeComparacao;
    /*
    Atributos de Comparação:
        1 - Nome do País (apenas exibição)
        2 - População
        3 - Área
        4 - PIB
        5 - Número de Pontos Turísticos
        6 - Menor Densidade Demográfica
    */
    
    printf("*********************************\n");
    printf("*    S U P E R   T R U N F O    *\n");
    printf("*********************************\n");
    printf("Comparação de Cartas por Atributo\n");
    printf("1. Nome do País (apenas exibição)\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Número de Pontos Turísticos\n");
    printf("6. Densidade Demográfica\n");
    printf("Selecione uma opção: ");
    scanf("%d", &atributoDeComparacao);

    switch (atributoDeComparacao)
    {
    case 1:
        // Exibindo os dados da primeira carta
        printf("\n");
        printf("Carta 1:\n");
        printf("Código: %s\n", codigo1);
        printf("Nome do País: %s\n", pais1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2lf km²\n", area1);
        printf("PIB: %.2f bilhões de dólares\n", pib1);
        printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
        printf("Densidade Demográfica: %.2f hab/km²\n", densidadeDemografica1);

        // Exibindo os dados da segunda carta
        printf("\n");
        printf("Carta 2:\n");
        printf("Código: %s\n", codigo2);
        printf("Nome do País: %s\n", pais2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2lf km²\n", area2);
        printf("PIB: %.2f bilhões de dólares\n", pib2);
        printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
        printf("Densidade Demográfica: %.2f hab/km²\n", densidadeDemografica2);
        break;
    case 2:  // População
        printf("\n");
        printf("Comparação de cartas (Atributo: População):\n\n");
        printf("Carta 1 - %s: %d\n", pais1, populacao1);
        printf("Carta 2 - %s: %d\n", pais2, populacao2);
        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
        } else if (populacao1 < populacao2) {
            printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;
    case 3:  // Área
        printf("\n");
        printf("Comparação de cartas (Atributo: Área):\n\n");
        printf("Carta 1 - %s: %.2f\n", pais1, area1);
        printf("Carta 2 - %s: %.2f\n", pais2, area2);
        if (area1 > area2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
        } else if (area1 < area2) {
            printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
        } else {
            printf("Resultado: Empate!\n");
        }
    break;
    case 4:  // PIB
        printf("\n");
        printf("Comparação de cartas (Atributo: PIB):\n\n");
        printf("Carta 1 - %s: %.2f\n", pais1, pib1);
        printf("Carta 2 - %s: %.2f\n", pais2, pib2);
        if (pib1 > pib2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
        } else if (pib1 < pib2) {
            printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;
    case 5:  // Número de Pontos Turísticos
        printf("\n");
        printf("Comparação de cartas (Atributo: Número de Pontos Turísticos):\n\n");
        printf("Carta 1 - %s: %d\n", pais1, pontosTuristicos1);
        printf("Carta 2 - %s: %d\n", pais2, pontosTuristicos2);
        if (pontosTuristicos1 > pontosTuristicos2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
        } else if (pontosTuristicos1 < pontosTuristicos2) {
            printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;
    case 6:  // Menor Densidade Demográfica
        printf("\n");
        printf("Comparação de cartas (Atributo: Menor Densidade Demográfica):\n\n");
        printf("Carta 1 - %s: %.2f\n", pais1, densidadeDemografica1);
        printf("Carta 2 - %s: %.2f\n", pais2, densidadeDemografica2);
        if (densidadeDemografica1 < densidadeDemografica2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
        } else if (densidadeDemografica1 > densidadeDemografica2) {
            printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;
    default:
        printf("\n");
        printf("Opção Inválida!\n");
        break;
    }

    return 0;
}
