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

    // Declarando a variáveis de Atributos de Comparação e de resutados
    int atributoDeComparacao1, atributoDeComparacao2;
    char nomeAtributo1[40], nomeAtributo2[40];
    double soma1, soma2;
    /*
    Atributos de Comparação:
        1 - População
        2 - Área
        3 - PIB
        4 - Número de Pontos Turísticos
        5 - Menor Densidade Demográfica
    */
    
    printf("*************************************\n");
    printf("*      S U P E R   T R U N F O      *\n");
    printf("*************************************\n");
    printf("Comparação de Cartas por 2 Atributos\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Selecione o primeiro atributo: ");
    scanf("%d", &atributoDeComparacao1);

    // Comparação do primeiro atributo
    switch (atributoDeComparacao1)
    {
    case 1:  // População
        printf("Você escolheu o atributo: População!\n");
        nomeAtributo1[0] = "População";
        break;
    case 2:  // Área
        printf("Você escolheu o atributo: Área!\n");
        break;
    case 3:  // PIB
        printf("Você escolheu o atributo: PIB!\n");
        break;
    case 4:  // Número de Pontos Turísticos
        printf("Você escolheu o atributo: Número de Pontos Turísticos!\n");
        break;
    case 5:  // Menor Densidade Demográfica
        printf("Você escolheu o atributo: Menor Densidade Demográfica!\n");
        break;
    default:
        printf("Opção Inválida!\n");
        break;
    }
    printf("\n");

    if (atributoDeComparacao1 >=1 && atributoDeComparacao1 <= 5) {
        if (atributoDeComparacao1 != 1) {
            printf("1. População\n");
        }
        if (atributoDeComparacao1 != 2) {
            printf("2. Área\n");
        }
        if (atributoDeComparacao1 != 3) {
            printf("3. PIB\n");
        }
        if (atributoDeComparacao1 != 4) {
            printf("4. Número de Pontos Turísticos\n");
        }
        if (atributoDeComparacao1 != 5) {
            printf("5. Densidade Demográfica\n");
        }
        printf("Selecione o segundo atributo: ");
        scanf("%d", &atributoDeComparacao2);

        if (atributoDeComparacao1 == atributoDeComparacao2) {
            printf("Você selecionou o mesmo atributo: ");
        } else {
            // Comparação do primeiro atributo
            switch (atributoDeComparacao2)
            {
            case 1:  // População
                printf("Você escolheu o atributo: População!\n");
                break;
            case 2:  // Área
                printf("Você escolheu o atributo: Área!\n");
            break;
            case 3:  // PIB
                printf("Você escolheu o atributo: PIB!\n");
                break;
            case 4:  // Número de Pontos Turísticos
                printf("Você escolheu o atributo: Número de Pontos Turísticos!\n");
                break;
            case 5:  // Menor Densidade Demográfica
                printf("Você escolheu o atributo: Menor Densidade Demográfica!\n");
                break;
            default:
                printf("Opção Inválida!\n");
                break;
            }
        }
    }
    
    if (
        (atributoDeComparacao1 >=1 && atributoDeComparacao1 <= 5) &&
        (atributoDeComparacao2 >= 1 && atributoDeComparacao2 <= 5) &&
        (atributoDeComparacao1 != atributoDeComparacao2)
    ) {
        // Comparação das cartas
        printf("\n");
        printf("Comparação de cartas:\n");
        printf("-------------------------------------\n");
        switch (atributoDeComparacao1)
        {
        case 1:  // População
            printf("Primeiro Atributo: População\n");
            break;
        case 2:  // Área
            printf("Primeiro Atributo: Área\n");
            break;
        case 3:  // PIB
            printf("Primeiro Atributo: PIB\n");
            break;
        case 4:  // Número de Pontos Turísticos
            printf("Primeiro Atributo: Número de Pontos Turísticos\n");
            break;
        case 5:  // Menor Densidade Demográfica
            printf("Primeiro Atributo: Menor Densidade Demográfica\n");
            break;
        }

        switch (atributoDeComparacao2)
        {
        case 1:  // População
            printf("Segundo Atributo: População\n");
            break;
        case 2:  // Área
            printf("Segundo Atributo: Área\n");
            break;
        case 3:  // PIB
            printf("Segundo Atributo: PIB\n");
            break;
        case 4:  // Número de Pontos Turísticos
            printf("Segundo Atributo: Número de Pontos Turísticos\n");
            break;
        case 5:  // Menor Densidade Demográfica
            printf("Segundo Atributo: Menor Densidade Demográfica\n");
            break;
        }
        printf("-------------------------------------\n");
        printf("Carta 1 - País: %s\n", pais1);

        switch (atributoDeComparacao1)
        {
        case 1:  // População
            printf("População: %d\n", populacao1);
            soma1 = (double) populacao1;
            break;
        case 2:  // Área
            printf("Área: %.2f\n", area1);
            soma1 = (double) area1;
            break;
        break;
        case 3:  // PIB
            printf("PIB: %.2f\n", pib1);
            soma1 = (double) pib1;
            break;
        case 4:  // Número de Pontos Turísticos
            printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
            soma1 = (double) pontosTuristicos1;
            break;
        case 5:  // Menor Densidade Demográfica
            printf("Menor Densidade Demográfica: %.2f\n", densidadeDemografica1);
            printf("Inverso da Densidade Demográfica: %.2f\n", (float) 1 / densidadeDemografica1);
            soma1 = (double) 1 / (double) densidadeDemografica1;
            break;
        default:
            printf("\n");
            printf("Opção Inválida!\n");
            break;
        }
        
        switch (atributoDeComparacao2)
        {
        case 1:  // População
            printf("População: %d\n", populacao1);
            soma1 += (double) populacao1;
            break;
        case 2:  // Área
            printf("Área: %.2f\n", area1);
            soma1 += (double) area1;
            break;
        break;
        case 3:  // PIB
            printf("PIB: %.2f\n", pib1);
            soma1 += (double) pib1;
            break;
        case 4:  // Número de Pontos Turísticos
            printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
            soma1 += (double) pontosTuristicos1;
            break;
        case 5:  // Menor Densidade Demográfica
            printf("Menor Densidade Demográfica: %.2f\n", densidadeDemografica1);
            printf("Inverso da Densidade Demográfica: %.2f\n", (float) 1 / densidadeDemografica1);
            soma1 += (double) 1 / (double) densidadeDemografica1;
            break;
        default:
            printf("\n");
            printf("Opção Inválida!\n");
            break;
        }

        printf("Soma dos Atributos: %.2lf\n", soma1);
        printf("-------------------------------------\n");
        printf("Carta 2 - País: %s\n", pais2);
        
        switch (atributoDeComparacao1)
        {
        case 1:  // População
            printf("População: %d\n", populacao2);
            soma2 = (double) populacao2;
            break;
        case 2:  // Área
            printf("Área: %.2f\n", area2);
            soma2 = (double) area2;
            break;
        break;
        case 3:  // PIB
            printf("PIB: %.2f\n", pib2);
            soma2 = (double) pib2;
            break;
        case 4:  // Número de Pontos Turísticos
            printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
            soma2 = (double) pontosTuristicos2;
            break;
        case 5:  // Menor Densidade Demográfica
            printf("Menor Densidade Demográfica: %.2f\n", densidadeDemografica2);
            printf("Inverso da Densidade Demográfica: %.2f\n", (float) 1 / densidadeDemografica2);
            soma2 = (double) 1 / (double) densidadeDemografica2;
            break;
        default:
            printf("\n");
            printf("Opção Inválida!\n");
            break;
        }
    
        switch (atributoDeComparacao2)
        {
        case 1:  // População
            printf("População: %d\n", populacao2);
            soma2 += (double) populacao2;
            break;
        case 2:  // Área
            printf("Área: %.2f\n", area2);
            soma2 += (double) area2;
            break;
        break;
        case 3:  // PIB
            printf("PIB: %.2f\n", pib2);
            soma2 += (double) pib2;
            break;
        case 4:  // Número de Pontos Turísticos
            printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
            soma2 += (double) pontosTuristicos2;
            break;
        case 5:  // Menor Densidade Demográfica
            printf("Menor Densidade Demográfica: %.2f\n", densidadeDemografica2);
            printf("Inverso da Densidade Demográfica: %.2f\n", (float) 1 / densidadeDemografica2);
            soma2 += (double) 1 / (double) densidadeDemografica2;
            break;
        default:
            printf("\n");
            printf("Opção Inválida!\n");
            break;
        }
        printf("Soma dos Atributos: %.2lf\n", soma2);
        printf("-------------------------------------\n");
        if (soma1 > soma2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
        } else if (soma1 < soma2) {
            printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
        } else {
            printf("Resultado: Empate!\n");
        }
        printf("-------------------------------------\n");
    }

    return 0;
}
