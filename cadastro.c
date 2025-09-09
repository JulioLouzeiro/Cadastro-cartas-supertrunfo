#include <stdio.h>

int main()
{

    // Carta 01
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    // Carta 02

    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    // entrada de dados da primeira carta 1

    printf("\n--Cadastro da Carta A:--\n");
    printf("Estado: \n");
    scanf(" %c", &estado1);

    printf("Código da Carta A:\n");
    scanf("%s", &codigo1);

    printf("Nome da cidade:\n");
    scanf("%s", &cidade1);

    printf("População:\n");
    scanf("%d", &populacao1);

    printf("Área:\n");
    scanf("%f", &area1);

    printf("PIB:\n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &pontosturisticos1);

    // Entrada de dados da segunda carta 2

    printf("\n||Cadastro da carta B||\n");
    printf("Estado:\n");
    scanf(" %c", &estado2);

    printf("Código da carta B\n");
    scanf("%s", &codigo2);

    printf("Nome da Cidade:\n");
    scanf("%s", &cidade2);

    printf("População:\n");
    scanf("%d", &populacao2);

    printf("Área:\n");
    scanf("%f", &area2);

    printf("PIB:\n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &pontosturisticos2);

    return 0;
}