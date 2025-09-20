#include <stdio.h>

int main()
{

    // --------Carta 01--------
    char estado1[2];
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1, pib1, densidade1, pibpercapita1;
    int pontosturisticos1;

    // ---------Carta 02--------

    char estado2[2];
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2, pib2, densidade2, pibpercapita2;
    int pontosturisticos2;

    //----------------- entrada de dados da primeira carta 1-----------------

    printf("\n--Cadastro da Carta A:--\n");

    printf("Estado: \n");
    scanf(" %s", &estado1);

    printf("Código da Carta A:\n");
    scanf(" %s", &codigo1);
    printf("Nome da cidade:\n");
    scanf(" %s", &cidade1);

    printf("População:\n");
    scanf(" %d", &populacao1);

    printf("Área km²:\n");
    scanf(" %f", &area1);

    printf("PIB Bilhões de reais:\n");
    scanf(" %f", &pib1);

    printf("Número de Pontos Turísticos:\n");
    scanf(" %d", &pontosturisticos1);

    // ------------Entrada de dados da segunda carta 2

    printf("\n||Cadastro da carta B||\n");
    printf("Estado:\n");
    scanf(" %s", &estado2);
    printf("Código da carta B\n");
    scanf(" %s", &codigo2);

    printf("Nome da Cidade:\n");
    scanf(" %s", &cidade2);

    printf("População:\n");
    scanf("  %d", &populacao2);

    printf("Área:\n");
    scanf(" %f", &area2);

    printf("PIB:\n");
    scanf(" %f", &pib2);

    printf("Número de Pontos Turísticos:\n");
    scanf(" %d", &pontosturisticos2);

    // Cálculos da Carta 1
    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;
    // calculo da carta 2
    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    // saida da carta 1
    printf("\n--Carta A--\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

    // saida da carta 2
    printf("\n--Carta B--\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);
 
    return 0;
}