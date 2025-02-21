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
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declarando variáveis da segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    
    // Lendo os dados da primeira carta
    printf("Carta 1:\n");
    printf("Digite a Letra do Estado: \n");
    scanf(" %c", &estado1);

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

    // Exibindo os dados da primeira carta
    printf("\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Lendo os dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Digite a Letra do Estado: \n");
    scanf(" %c", &estado2);

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

    // Exibindo os dados da segunda carta
    printf("\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
