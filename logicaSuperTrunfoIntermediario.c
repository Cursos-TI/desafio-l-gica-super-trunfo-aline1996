#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países (Formato Estruturado)

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

    // Variáveis de contagem de vitórias
    int vitoriasCarta1 = 0, vitoriasCarta2 = 0;
    int escolha;

    // Menu interativo
    printf("\nEscolha o atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Densidade Populacional\n");
    printf("5. PIB per Capita\n");
    printf("Digite sua escolha (1-5): ");
    scanf("%d", &escolha);

    // Comparação de acordo com a escolha do usuário
    switch (escolha) {
        case 1: // Comparar População
            printf("\nComparação de População:\n");
            printf("Carta 1 - %s (%s): %lu\n", nome1, estado1, populacao1);
            printf("Carta 2 - %s (%s): %lu\n", nome2, estado2, populacao2);
            if (populacao1 > populacao2) {
                printf("\nA carta vencedora é: %s (%s) com a maior população (%lu)\n", nome1, estado1, populacao1);
                vitoriasCarta1++;
            } else if (populacao2 > populacao1) {
                printf("\nA carta vencedora é: %s (%s) com a maior população (%lu)\n", nome2, estado2, populacao2);
                vitoriasCarta2++;
            } else {
                printf("\nEmpate! Ambas as cartas possuem a mesma população (%lu).\n", populacao1);
            }
            break;

        case 2: // Comparar Área
            printf("\nComparação de Área:\n");
            printf("Carta 1 - %s (%s): %.2f km²\n", nome1, estado1, area1);
            printf("Carta 2 - %s (%s): %.2f km²\n", nome2, estado2, area2);
            if (area1 > area2) {
                printf("\nA carta vencedora é: %s (%s) com a maior área (%.2f km²)\n", nome1, estado1, area1);
                vitoriasCarta1++;
            } else if (area2 > area1) {
                printf("\nA carta vencedora é: %s (%s) com a maior área (%.2f km²)\n", nome2, estado2, area2);
                vitoriasCarta2++;
            } else {
                printf("\nEmpate! Ambas as cartas possuem a mesma área (%.2f km²).\n", area1);
            }
            break;

        case 3: // Comparar PIB
            printf("\nComparação de PIB:\n");
            printf("Carta 1 - %s (%s): %.2f bilhões\n", nome1, estado1, pib1);
            printf("Carta 2 - %s (%s): %.2f bilhões\n", nome2, estado2, pib2);
            if (pib1 > pib2) {
                printf("\nA carta vencedora é: %s (%s) com o maior PIB (%.2f bilhões)\n", nome1, estado1, pib1);
                vitoriasCarta1++;
            } else if (pib2 > pib1) {
                printf("\nA carta vencedora é: %s (%s) com o maior PIB (%.2f bilhões)\n", nome2, estado2, pib2);
                vitoriasCarta2++;
            } else {
                printf("\nEmpate! Ambas as cartas possuem o mesmo PIB (%.2f bilhões).\n", pib1);
            }
            break;

        case 4: // Comparar Densidade Populacional
            printf("\nComparação de Densidade Populacional:\n");
            printf("Carta 1 - %s (%s): %.2f hab/km²\n", nome1, estado1, densiPop1);
            printf("Carta 2 - %s (%s): %.2f hab/km²\n", nome2, estado2, densiPop2);
            if (densiPop1 < densiPop2) {
                printf("\nA carta vencedora é: %s (%s) com a menor densidade populacional (%.2f hab/km²)\n", nome1, estado1, densiPop1);
                vitoriasCarta1++;
            } else if (densiPop2 < densiPop1) {
                printf("\nA carta vencedora é: %s (%s) com a menor densidade populacional (%.2f hab/km²)\n", nome2, estado2, densiPop2);
                vitoriasCarta2++;
            } else {
                printf("\nEmpate! Ambas as cartas possuem a mesma densidade populacional (%.2f hab/km²).\n", densiPop1);
            }
            break;

        case 5: // Comparar PIB per Capita
            printf("\nComparação de PIB per Capita:\n");
            printf("Carta 1 - %s (%s): %.2f reais\n", nome1, estado1, pibPerCap1);
            printf("Carta 2 - %s (%s): %.2f reais\n", nome2, estado2, pibPerCap2);
            if (pibPerCap1 > pibPerCap2) {
                printf("\nA carta vencedora é: %s (%s) com o maior PIB per capita (%.2f reais)\n", nome1, estado1, pibPerCap1);
                vitoriasCarta1++;
            } else if (pibPerCap2 > pibPerCap1) {
                printf("\nA carta vencedora é: %s (%s) com o maior PIB per capita (%.2f reais)\n", nome2, estado2, pibPerCap2);
                vitoriasCarta2++;
            } else {
                printf("\nEmpate! Ambas as cartas possuem o mesmo PIB per capita (%.2f reais).\n", pibPerCap1);
            }
            break;

        default:
            printf("Opção inválida! Escolha um número entre 1 e 5.\n");
            return 1;
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
