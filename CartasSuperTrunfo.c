#include <stdio.h>

int main() {
    
    // Declaracao das variaveis para a carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaracao das variaveis para a carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada de dados para a carta 1
    printf("Digite o estado da cidade 1: \n");
    printf("Estado: (letra de A a Z):\n");
    scanf(" %c", &estado1);
    printf("Codigo da Carta 1: \n");
    scanf("%s", codigo1);
    printf("Nome da Cidade 1: \n");
    scanf(" %[^\n]", nomeCidade); // O espaço antes de %s permite ler espaços em branco
    printf("Populacao: \n");
    scanf("%d", &populacao1);
    printf("Area (em km2): \n");
    scanf("%f", &area1);
    printf("PIB (em milhoes de reais): \n");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: \n");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados para a carta 2
    printf("Digite o estado da cidade 2: \n");
    printf("Estado: (letra de A a Z):\n");
    scanf(" %c", &estado2);
    printf("Codigo da Carta 2: \n");
    scanf("%s", codigo2);
    printf("Nome da Cidade 2: \n");
    scanf(" %[^\n]", nomeCidade2); // O espaço antes de %s permite ler espaços em branco
    printf("Populacao: \n");
    scanf("%d", &populacao2);
    printf("Area (em km2): \n");
    scanf("%f", &area2);
    printf("PIB (em milhoes de reais): \n");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: \n");
    scanf("%d", &pontosTuristicos2);


    //Exibicao dos dados da carta 1
    printf("\n\nDados da Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f milhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    //Exibicao dos dados da carta 2
    printf("\n\nDados da Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f milhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    

    return 0;
}
