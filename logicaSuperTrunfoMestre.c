#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Nível Mestre

int main() {
    // Declaração de variáveis
    char estado1[30], estado2[30];
    char codigo1[10], codigo2[10];
    char nome1[50], nome2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int qtdPontoTuristico1, qtdPontoTuristico2;
    float densiPop1, densiPop2, pibPerCap1, pibPerCap2;
    int atributo1, atributo2;
    char continuar;

    // Cadastro das cartas
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

    do {
        // Menu de seleção de atributos
        printf("\nEscolha o primeiro atributo para comparação:\n");
        printf("1. População\n2. Área\n3. PIB\n4. Densidade Populacional\n5. PIB per Capita\nDigite sua escolha (1-5): ");
        scanf("%d", &atributo1);

        do {
            printf("\nEscolha o segundo atributo para comparação (diferente do primeiro):\n");
            for (int i = 1; i <= 5; i++) {
                if (i != atributo1) {
                    printf("%d. %s\n", i, (i == 1 ? "População" : i == 2 ? "Área" : i == 3 ? "PIB" : i == 4 ? "Densidade Populacional" : "PIB per Capita"));
                }
            }
            printf("Digite sua escolha (1-5): ");
            scanf("%d", &atributo2);
        } while (atributo2 == atributo1 || atributo2 < 1 || atributo2 > 5);

        // Mapeando os atributos
        float atributos1[] = {(float)populacao1, area1, pib1 * 1000000000.0f, densiPop1, pibPerCap1};
        float atributos2[] = {(float)populacao2, area2, pib2 * 1000000000.0f, densiPop2, pibPerCap2};
        char* nomesAtributos[] = {"População", "Área", "PIB", "Densidade Populacional", "PIB per Capita"};

        // Calculando somas
        float soma1 = atributos1[atributo1 - 1] + atributos1[atributo2 - 1];
        float soma2 = atributos2[atributo1 - 1] + atributos2[atributo2 - 1];

        // Exibindo resultado
        printf("\nComparando os atributos selecionados:\n");
        printf("%s: %.2f vs %.2f\n", nomesAtributos[atributo1 - 1], atributos1[atributo1 - 1], atributos2[atributo1 - 1]);
        printf("%s: %.2f vs %.2f\n", nomesAtributos[atributo2 - 1], atributos1[atributo2 - 1], atributos2[atributo2 - 1]);
        printf("Soma total: %.2f vs %.2f\n", soma1, soma2);

        // Decisão com operadores ternários
        (soma1 > soma2) ? printf("\nA carta vencedora é: %s (%s)\n", nome1, estado1) :
        (soma2 > soma1) ? printf("\nA carta vencedora é: %s (%s)\n", nome2, estado2) :
        printf("\nEmpate! Ambas as cartas possuem a mesma soma de atributos.\n");

        // Opção de continuar ou sair
        printf("\nDeseja realizar outra comparação? (S/N): ");
        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');

    printf("\nObrigado por jogar!\n");
    return 0;
}
