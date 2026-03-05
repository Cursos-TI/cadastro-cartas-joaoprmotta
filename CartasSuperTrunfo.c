#include <stdio.h>

int main() {

        // Variáveis para armazenar os dados das cartas
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char cidade1[20], cidade2[20];
    int pontos_turisticos1, pontos_turisticos2;
    float populacao1, populacao2, area1, area2, pib1, pib2;


        // Solicita os dados da primeira carta
    printf("Cadastre a carta 1:\n");


    printf("Digite o estado: ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade1);

    printf("Digite a população em milhões: ");
    scanf("%f", &populacao1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("Digite a área em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB em bilhões: ");
    scanf("%f", &pib1);


        // Solicita os dados da segunda carta
    printf("\nCadastre a carta 2:\n");


    printf("Digite o estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade2);

    printf("Digite a população em milhões: ");
    scanf("%f", &populacao2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("Digite a área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhões: ");
    scanf("%f", &pib2);


    printf("\nCartas cadastradas:\n");

        // Exibe os dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %.1f milhões\n", populacao1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
    printf("Área em km²: %.2f\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);


        // Exibe os dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %.1f milhões\n", populacao2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
    printf("Área em km²: %.2f\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);

    return 0;
}
