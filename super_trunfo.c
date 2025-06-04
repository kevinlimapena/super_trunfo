#include <stdio.h>

int main()
{
    // CARTA 1
    int populacao1;

    char estado1[10];

    char carta1[10];

    char nomeCity1[500];

    float area1, PIB1, pontos1;

    printf("Carta 1 \n");

    printf("insira: o Estado: ");

    scanf("%s", &estado1);

    printf("insira: o Codigo da Carta: ");

    scanf("%s", &carta1);

    printf("insira: o Nome da Cidade: ");

    scanf("%s", &nomeCity1);

    printf("insira a Populacao: ");
    scanf("%d", &populacao1);

    printf("insira: a Área: ");

    scanf("%f", &area1);

    printf("insira: o PIB: ");

    scanf("%f", &PIB1);

    printf("insira: o Numero de Pontos Turisticos: ");

    scanf("%f", &pontos1);

    // CARTA 2
    int populacao2;

    char estado2[10];

    char carta2[10];

    char nomeCity2[500];

    float area2, PIB2, pontos2;

    printf("Carta 2 \n");

    printf("insira: o Estado: ");

    scanf("%s", &estado2);

    printf("insira: o Codigo da Carta: ");

    scanf("%s", &carta2);

    printf("insira: o Nome da Cidade: ");

    scanf("%s", &nomeCity2);

    printf("insira a Populacao: ");
    scanf("%d", &populacao2);

    printf("insira: a Área: ");

    scanf("%f", &area2);

    printf("insira: o PIB: ");

    scanf("%f", &PIB2);

    printf("insira: o Numero de Pontos Turisticos: ");

    scanf("%f", &pontos2);

    // Exibir Cartas

    printf("Carta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Codigo: %s \n", carta1);
    printf("Cidade: %s \n", nomeCity1);
    printf("Populacao:%d \n", populacao1);
    printf("Área:%f \n", area1);
    printf("PIB:%f \n", PIB1);
    printf("Numero de Pontos Turisticos: %f \n", pontos1);

    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Codigo: %s \n", carta2);
    printf("Cidade: %s \n", nomeCity2);
    printf("Populacao:%d \n", populacao2);
    printf("Área:%f \n", area2);
    printf("PIB:%f \n", PIB2);
    printf("Numero de Pontos Turisticos: %f \n", pontos2);

    return 0;
}