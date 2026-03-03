// Aluno: Jeferson Santos
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Tema 2 - Densidade e Pib per capta

#include <stdio.h>

int main()
{
    char estado1[50], codigo1[50], nome1[50];
    int populacao1, pontosturisticos1;
    float area1, pib1, densidade1, pibpercapta1;

    printf("Digite a letra do estado (A-H): ");
    scanf("%49s", estado1);

    printf("Digite o codigo do estado (ex:A01 - A04): ");
    scanf("%49s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%49s", nome1);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos1);

    densidade1 = (float) populacao1 / area1;
    pibpercapta1 = pib1 / populacao1;

    printf("\n\nCarta 1:\n\n");
    printf("Estado: %s\n\n", estado1);
    printf("Codigo: %s\n\n", codigo1);
    printf("Nome da Cidade: %s\n\n", nome1);
    printf("Populacao: %d\n\n", populacao1);
    printf("Area: %.2f km²\n\n", area1);
    printf("PIB: %.2f bilhoes de reais\n\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n\n", densidade1);
    printf("PIB per Capita: %.2f reais por habitante\n\n", pibpercapta1);


    char estado2[50], codigo2[50], nome2[50];
    int populacao2, pontosturisticos2;
    float area2, pib2, densidade2, pibpercapta2;

    printf("Digite a letra do estado (B-H): ");
    scanf("%49s", estado2);

    printf("Digite o codigo do estado (ex:B01 - B04): ");
    scanf("%49s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%49s", nome2);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos2);

    densidade2 = (float) populacao2 / area2;
    pibpercapta2 = pib2 / populacao2;

    printf("\n\nCarta 2:\n\n");
    printf("Estado: %s\n\n", estado2);
    printf("Codigo: %s\n\n", codigo2);
    printf("Nome da Cidade: %s\n\n", nome2);
    printf("Populacao: %d\n\n", populacao2);
    printf("Area: %.2f km²\n\n", area2);
    printf("PIB: %.2f bilhoes de reais\n\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n\n", densidade2);
    printf("PIB per Capita: %.2f reais por pessoa\n\n", pibpercapta2);

    return 0;
}