#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Declaração de variáveis
    char estado1[30], estado2[30];
    char codigo1[10], codigo2[10];
    char nome1[50], nome2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int qtdPontoTuristico1, qtdPontoTuristico2;
    float densiPop1, densiPop2, pibPerCap1, pibPerCap2;

    // Cadastro da Carta 1
    printf("Insira os dados da primeira carta\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Código da carta: ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf("%s", nome1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &qtdPontoTuristico1);

    // Cadastro da Carta 2
    printf("\nInsira os dados da segunda carta\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Código da carta: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf("%s", nome2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &qtdPontoTuristico2);

    // Cálculo de atributos derivados
    densiPop1 = (float)populacao1 / area1;
    pibPerCap1 = (pib1 * 1000000000.0f) / (float)populacao1;
    densiPop2 = (float)populacao2 / area2;
    pibPerCap2 = (pib2 * 1000000000.0f) / (float)populacao2;

    // Inicializar contadores de vitórias
    int vitoriasCarta1 = 0, vitoriasCarta2 = 0;

    // Comparação dos atributos
    printf("\nComparação de cartas:\n");

    // População
    printf("População:\n");
    if (populacao1 > populacao2) {
        printf("Carta 1 (%s - %s) venceu! %lu vs %lu\n", nome1, estado1, populacao1, populacao2);
        vitoriasCarta1++;
    } else if (populacao2 > populacao1) {
        printf("Carta 2 (%s - %s) venceu! %lu vs %lu\n", nome2, estado2, populacao2, populacao1);
        vitoriasCarta2++;
    } else {
        printf("Empate! Ambas as cartas possuem %lu habitantes.\n", populacao1);
    }

    // Área
    printf("\nÁrea:\n");
    if (area1 > area2) {
        printf("Carta 1 (%s - %s) venceu! %.2f km² vs %.2f km²\n", nome1, estado1, area1, area2);
        vitoriasCarta1++;
    } else if (area2 > area1) {
        printf("Carta 2 (%s - %s) venceu! %.2f km² vs %.2f km²\n", nome2, estado2, area2, area1);
        vitoriasCarta2++;
    } else {
        printf("Empate! Ambas as cartas possuem %.2f km².\n", area1);
    }

    // PIB
    printf("\nPIB:\n");
    if (pib1 > pib2) {
        printf("Carta 1 (%s - %s) venceu! %.2f bilhões vs %.2f bilhões\n", nome1, estado1, pib1, pib2);
        vitoriasCarta1++;
    } else if (pib2 > pib1) {
        printf("Carta 2 (%s - %s) venceu! %.2f bilhões vs %.2f bilhões\n", nome2, estado2, pib2, pib1);
        vitoriasCarta2++;
    } else {
        printf("Empate! Ambas as cartas possuem %.2f bilhões.\n", pib1);
    }

    // Densidade Populacional (menor vence)
    printf("\nDensidade Populacional:\n");
    if (densiPop1 < densiPop2) {
        printf("Carta 1 (%s - %s) venceu! %.2f hab/km² vs %.2f hab/km²\n", nome1, estado1, densiPop1, densiPop2);
        vitoriasCarta1++;
    } else if (densiPop2 < densiPop1) {
        printf("Carta 2 (%s - %s) venceu! %.2f hab/km² vs %.2f hab/km²\n", nome2, estado2, densiPop2, densiPop1);
        vitoriasCarta2++;
    } else {
        printf("Empate! Ambas as cartas possuem %.2f hab/km².\n", densiPop1);
    }

    // PIB Per Capita
    printf("\nPIB per Capita:\n");
    if (pibPerCap1 > pibPerCap2) {
        printf("Carta 1 (%s - %s) venceu! %.2f reais vs %.2f reais\n", nome1, estado1, pibPerCap1, pibPerCap2);
        vitoriasCarta1++;
    } else if (pibPerCap2 > pibPerCap1) {
        printf("Carta 2 (%s - %s) venceu! %.2f reais vs %.2f reais\n", nome2, estado2, pibPerCap2, pibPerCap1);
        vitoriasCarta2++;
    } else {
        printf("Empate! Ambas as cartas possuem %.2f reais.\n", pibPerCap1);
    }

    // Exibição do Resultado Final
    if (vitoriasCarta1 > vitoriasCarta2) {
        printf("\nA cidade vencedora é: %s (%s)\n", nome1, estado1);
    } else if (vitoriasCarta2 > vitoriasCarta1) {
        printf("\nA cidade vencedora é: %s (%s)\n", nome2, estado2);
    } else {
        printf("\nEmpate! Ambas as cartas têm o mesmo número de vitórias.\n");
    }

    return 0;
}
