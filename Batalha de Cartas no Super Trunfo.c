#include <stdio.h>

int main()
{
    // Kevin Lima pena - Aula 01 - 3.Nível Mestre - Hora de codar  :

    // variaveis 1
    char estado1[10];
    char carta1[10];
    char nomeCity1[500];

    float area1, PIB1, pontos1, DensidadePopulacional1, PIBPERCAPITAL1, SuperPoder1;

    unsigned long int populacao1;

    DensidadePopulacional1 = populacao1 / area1;
    PIBPERCAPITAL1 = (float)PIB1 / (float)populacao1;
    SuperPoder1 = (float)PIBPERCAPITAL1 - DensidadePopulacional1 + area1 + PIB1 + pontos1;

    // Resultados
    int resultado_Area, resultado_Populacao,
        resultado_Pontos_Turisticos, resultado_Pib,
        resultado_Densidade_Populacional,
        resultado_Pib_Per_Capital,
        resultado_Super_Poder;

    // variaveis 2
    unsigned long int populacao2;

    char estado2[10];
    char carta2[10];
    char nomeCity2[500];

    float area2, PIB2, pontos2, DensidadePopulacional2, PIBPERCAPITAL2, SuperPoder2;

    DensidadePopulacional2 = populacao2 / area2;
    PIBPERCAPITAL2 = (float)PIB2 / (float)populacao2;
    SuperPoder2 = (float)PIBPERCAPITAL2 - DensidadePopulacional2 + area2 + PIB2 + pontos2;

    // Conversa 1
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

    // Conversa 2
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

    // Comparação dos Resultados
    resultado_Area = area1 < area2;
    resultado_Pib = PIB1 < PIB2;
    resultado_Densidade_Populacional = DensidadePopulacional1 < DensidadePopulacional2;
    resultado_Pib_Per_Capital = PIBPERCAPITAL1 < PIBPERCAPITAL2;
    resultado_Populacao = populacao1 < populacao2;
    resultado_Super_Poder = SuperPoder1 < SuperPoder2;
    resultado_Pontos_Turisticos = pontos1 < pontos2;

    // Prints das Comparações dos Resultados
    printf("Comparação de Cartas: \n");
    printf("População: Carta %d ganhou \n", (resultado_Populacao * 2 + (1 - resultado_Populacao)));
    printf("Área: Carta %d ganhou \n", (resultado_Area * 2 + (1 - resultado_Area)));
    printf("PIB: Carta %d ganhou \n", (resultado_Pib * 2 + (1 - resultado_Pib)));
    printf("Pontos Turísticos: Carta %d ganhou \n", (resultado_Pontos_Turisticos * 2 + (1 - resultado_Pontos_Turisticos)));
    printf("Densidade Populacional: Carta %d ganhou \n", (resultado_Densidade_Populacional * 2 + (1 - resultado_Densidade_Populacional)));
    printf("PIB per Capita: Carta %d ganhou \n", (resultado_Pib_Per_Capital * 2 + (1 - resultado_Pib_Per_Capital)));
    printf("Super Poder: Carta %d ganhou \n", (resultado_Super_Poder * 2 + (1 - resultado_Super_Poder)));

    return 0;
}