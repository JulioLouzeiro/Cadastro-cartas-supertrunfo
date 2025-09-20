#include <stdio.h>

int main()
{

    // --------Carta 01--------
    char estado1[3];                              // recebe a letra referente ao estado
    char codigo1[4];                              // recebe o codigo da carta
    char cidade1[50];                             // recebe o nome da cidade
    int populacao1;                               // recebe o numero da populacao
    float area1, pib1, densidade1, pibpercapita1; // recebe o valor da area, pib, densidade e pib per capita
    int pontosturisticos1;                        // recebe o numero de pontos turisticos

    // ---------Carta 02--------

    char estado2[3];                              // recebe a letra referente ao estado
    char codigo2[4];                              // recebe o codigo da carta
    char cidade2[50];                             // recebe o nome da cidade
    int populacao2;                               // recebe o numero da populacao
    float area2, pib2, densidade2, pibpercapita2; // recebe o valor da area, pib, densidade e pib per capita
    int pontosturisticos2;                        // recebe o numero de pontos turisticos

    //----------------- entrada de dados da primeira carta 1-----------------

    printf("\n--Cadastro da Carta A:--\n"); // cabeçalho do cadastro da carta 1

    printf("Estado: \n");   // entrada do estado
    scanf(" %s", &estado1); //

    printf("Código da Carta A:\n"); // entrada do codigo da carta
    scanf(" %s", &codigo1);
    printf("Nome da cidade:\n"); // entrada do nome da cidade
    scanf(" %s", &cidade1);

    printf("População:\n"); // entrada da população
    scanf(" %d", &populacao1);

    printf("Área km²:\n"); // entrada da área
    scanf(" %f", &area1);

    printf("PIB Bilhões de reais:\n"); // entrada do pib
    scanf(" %f", &pib1);

    printf("Número de Pontos Turísticos:\n"); // entrada do numero de pontos turisticos
    scanf(" %d", &pontosturisticos1);

    // ------------Entrada de dados da segunda carta 2

    printf("\n||Cadastro da carta B||\n"); // cabeçalho do cadastro da carta 2

    printf("Estado:\n"); // entrada do estado
    scanf(" %s", &estado2);

    printf("Código da carta B\n"); // entrada do codigo da carta
    scanf(" %s", &codigo2);

    printf("Nome da Cidade:\n"); // entrada do nome da cidade
    scanf(" %s", &cidade2);

    printf("População:\n"); // entrada da população
    scanf("  %d", &populacao2);

    printf("Área:\n"); // entrada da área
    scanf(" %f", &area2);

    printf("PIB:\n"); // entrada do pib
    scanf(" %f", &pib2);

    printf("Número de Pontos Turísticos:\n"); // entrada do numero de pontos turisticos
    scanf(" %d", &pontosturisticos2);

    // Cálculos da Carta 1 e Carta 2
    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    // saida da carta 1
    printf("\n--Carta A--\n");                                      // cabeçalho da carta 1
    printf("Estado: %c\n", estado1);                                // estado da carta
    printf("Código: %s\n", codigo1);                                // codigo da carta
    printf("Nome da Cidade: %s\n", cidade1);                        // nome da cidade
    printf("População: %d\n", populacao1);                          // população
    printf("Área: %.2f km²\n", area1);                              // área da cidade
    printf("PIB: %.2f bilhões de reais\n", pib1);                   // pib da cidade
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1); // numero de pontos turisticos
    
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);   // densidade populacional
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);          // pib per capita

    // saida da carta 2
    printf("\n--Carta B--\n");                                      // cabeçalho da carta 2
    printf("Estado: %c\n", estado2);                                // estado da carta
    printf("Código: %s\n", codigo2);                                // codigo da carta
    printf("Nome da Cidade: %s\n", cidade2);                        // nome da cidade
    printf("População: %d\n", populacao2);                          // população
    printf("Área: %.2f km²\n", area2);                              // área da cidade
    printf("PIB: %.2f bilhões de reais\n", pib2);                   // pib da cidade
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2); // numero de pontos turisticos
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);   // densidade populacional
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);          // pib per capita

    return 0;
}