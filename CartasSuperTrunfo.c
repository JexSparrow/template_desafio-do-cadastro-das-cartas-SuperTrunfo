// Aluno: Jeferson Santos
// Desafio Super Trunfo - Países (Novato, Intermediário e Avançado)

// utils: gcc super_trunfo.c && ./a.out

#include <stdio.h>

int main()
{
    char estado1[50], codigo1[50], nome1[50];
    unsigned long int populacao1;
    int pontosturisticos1;
    float area1, pib1, densidade1, pibpercapta1;
    float poder1, poder2;

    printf("Digite a letra do estado (A-H): ");
    scanf("%49s", estado1);

    printf("Digite o codigo do estado (ex:A01 - A04): ");
    scanf("%49s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%49s", nome1);

    printf("Digite a populacao da cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a area da cidade (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos1);

    // Cálculo da densidade populacional
    densidade1 = (float)populacao1 / area1;

    // Cálculo do PIB per capita
    pibpercapta1 = pib1 / populacao1;

    /*
    ===============================
    CÁLCULO DO SUPER PODER
    ===============================

    O Super Poder é a soma de todos os atributos numéricos:

    - população
    - área
    - PIB
    - pontos turísticos
    - PIB per capita
    - inverso da densidade populacional

    O inverso da densidade é calculado como:

        1 / densidade

    Isso é feito porque no jogo a menor densidade deve vencer.
    Ao usar o inverso, densidades menores geram valores maiores,
    o que permite somar corretamente no cálculo do poder.

    Exemplo:

        densidade = 10000
        1 / densidade = 0.0001

        densidade = 2000
        1 / densidade = 0.0005

    Assim, a cidade com menor densidade ganha mais "poder".

    O valor 1.0f é usado para garantir divisão em ponto flutuante,
    evitando divisão inteira em C.
    */

    poder1 =
        (float)populacao1 +
        area1 +
        pib1 +
        (float)pontosturisticos1 +
        pibpercapta1 +
        (1.0f / densidade1);

    printf("\n\nCarta 1\n\n");
    printf("Estado: %s\n\n", estado1);
    printf("Codigo: %s\n\n", codigo1);
    printf("Nome da Cidade: %s\n\n", nome1);
    printf("Populacao: %lu\n\n", populacao1);
    printf("Area: %.2f km²\n\n", area1);
    printf("PIB: %.2f bilhoes de reais\n\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n\n", densidade1);
    printf("PIB per Capita: %.2f reais por habitante\n\n", pibpercapta1);

    char estado2[50], codigo2[50], nome2[50];
    unsigned long int populacao2;
    int pontosturisticos2;
    float area2, pib2, densidade2, pibpercapta2;

    printf("Digite a letra do estado (B-H): ");
    scanf("%49s", estado2);

    printf("Digite o codigo do estado (ex:B01 - B04): ");
    scanf("%49s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%49s", nome2);

    printf("Digite a populacao da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a area da cidade (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos2);

    // Cálculo da densidade populacional
    densidade2 = (float)populacao2 / area2;

    // Cálculo do PIB per capita
    pibpercapta2 = pib2 / populacao2;

    // Cálculo do Super Poder da carta 2
    poder2 =
        (float)populacao2 +
        area2 +
        pib2 +
        (float)pontosturisticos2 +
        pibpercapta2 +
        (1.0f / densidade2);

    printf("\n\nCarta 2\n\n");
    printf("Estado: %s\n\n", estado2);
    printf("Codigo: %s\n\n", codigo2);
    printf("Nome da Cidade: %s\n\n", nome2);
    printf("Populacao: %lu\n\n", populacao2);
    printf("Area: %.2f km²\n\n", area2);
    printf("PIB: %.2f bilhoes de reais\n\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n\n", densidade2);
    printf("PIB per Capita: %.2f reais por pessoa\n\n", pibpercapta2);

    printf("Vamos comparar as cartas...\n\n");

    int resultadoPopulacao = populacao1 > populacao2;
    int resultadoArea = area1 > area2;
    int resultadoPib = pib1 > pib2;
    int resultadoPontosTuristicos = pontosturisticos1 > pontosturisticos2;
    int resultadoDensidade = densidade1 < densidade2; // menor densidade vence
    int resultadoPibPerCapta = pibpercapta1 > pibpercapta2;
    int resultadoPoder = poder1 > poder2;

    printf("\nComparação de Cartas:\n\n");

    printf("População - %s: %lu hab | %s: %lu hab | Cidade 1 vence? (%d)\n",
           nome1, populacao1, nome2, populacao2, resultadoPopulacao);

    printf("Área - %s: %.2f km² | %s: %.2f km² | Cidade 1 vence? (%d)\n",
           nome1, area1, nome2, area2, resultadoArea);

    printf("PIB - %s: %.2f bilhões | %s: %.2f bilhões | Cidade 1 vence? (%d)\n",
           nome1, pib1, nome2, pib2, resultadoPib);

    printf("Pontos Turísticos - %s: %d | %s: %d | Cidade 1 vence? (%d)\n",
           nome1, pontosturisticos1, nome2, pontosturisticos2, resultadoPontosTuristicos);

    printf("Densidade Populacional (menor vence) - %s: %.4f | %s: %.4f | Cidade 1 vence? (%d)\n",
           nome1, densidade1, nome2, densidade2, resultadoDensidade);

    printf("PIB per Capita - %s: %.2f | %s: %.2f | Cidade 1 vence? (%d)\n",
           nome1, pibpercapta1, nome2, pibpercapta2, resultadoPibPerCapta);

    printf("Super Poder - %s: %.2f | %s: %.2f | Cidade 1 vence? (%d)\n",
           nome1, poder1, nome2, poder2, resultadoPoder);

    return 0;
}