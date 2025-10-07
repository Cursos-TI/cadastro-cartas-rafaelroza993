#include <stdio.h>

int main() {
    char estado1[20], codigo1[10], cidade1[20];
    int populacao1, pontos_turisticos1;
    float area1, pib1;

    char estado2[20], codigo2[10], cidade2[20];
    int populacao2, pontos_turisticos2;
    float area2, pib2;

    printf("Desafio Super Trunfo!\n");

    // Cadastro da primeira carta
    printf("\nCADASTRO DA PRIMEIRA CARTA\n");

    printf("Digite o nome do estado (A-H): ");
    fflush(stdout);
    scanf("%s", estado1);

    printf("Digite o código da carta (ex: A01): ");
    fflush(stdout);
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    fflush(stdout);
    scanf("%s", cidade1);

    printf("Digite a população: ");
    fflush(stdout);
    scanf("%d", &populacao1);

    printf("Digite o número de pontos turísticos: ");
    fflush(stdout);
    scanf("%d", &pontos_turisticos1);

    printf("Digite a área (em km²): ");
    fflush(stdout);
    scanf("%f", &area1);

    printf("Digite o PIB (em milhões): ");
    fflush(stdout);
    scanf("%f", &pib1);

    // Cadastro da segunda carta
    printf("\nCADASTRO DA SEGUNDA CARTA\n");

    printf("Digite o nome do estado (A-H): ");
    fflush(stdout);
    scanf("%s", estado2);

    printf("Digite o código da carta (ex: A01): ");
    fflush(stdout);
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    fflush(stdout);
    scanf("%s", cidade2);

    printf("Digite a população: ");
    fflush(stdout);
    scanf("%d", &populacao2);

    printf("Digite o número de pontos turísticos: ");
    fflush(stdout);
    scanf("%d", &pontos_turisticos2);

    printf("Digite a área (em km²): ");
    fflush(stdout);
    scanf("%f", &area2);

    printf("Digite o PIB (em milhões): ");
    fflush(stdout);
    scanf("%f", &pib2);

    // Exibição das informações
    printf("\n--- EXIBIÇÃO DAS INFORMAÇÕES ---\n");

    printf("\nCARTA 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões\n", pib1);

    printf("\nCARTA 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões\n", pib2);

    return 0;
}


