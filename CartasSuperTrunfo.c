#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Variaveis da Carta 1
    char estado_1, codigo_1[4], cidade_1[50];
    int populacao_1, turistico_1;
    float area_1, pib_1, densidadePopulacional_1, PIBPerCapita_1;

    // Variaveis da Carta 2
    char estado_2, codigo_2[4], cidade_2[50];
    int populacao_2, turistico_2;
    float area_2, pib_2, densidadePopulacional_2, PIBPerCapita_2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Instruções para o usuário
    printf("Cadastro da Carta 1:\n");

    // Leitura dos dados da carta 1
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado_1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo_1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade_1); // Lê até a quebra de linha

    printf("Digite a população: ");
    scanf("%d", &populacao_1);

    printf("Digite a área em km²: ");
    scanf("%f", &area_1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib_1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turistico_1);

    // Cadastro da carta 2
    printf("Cadastro da Carta 2:\n");

    // Leitura dos dados da carta 2
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado_2);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo_2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade_2); // Lê até a quebra de linha

    printf("Digite a população: ");
    scanf("%d", &populacao_2);

    printf("Digite a área em km²: ");
    scanf("%f", &area_2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib_2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turistico_2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Tratamento para calcular a Densidade Populacional e o PIB per Capita
    densidadePopulacional_1 = populacao_1 / area_1;
    PIBPerCapita_1 = (pib_1 * 1000000000) / populacao_1;
    densidadePopulacional_2 = populacao_2 / area_2;
    PIBPerCapita_2 = (pib_2 * 1000000000) / populacao_2;

    // Exibindo os dados cadastrados de forma organizada
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_1);
    printf("Nome da Cidade: %s\n", cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", turistico_1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional_1);
    printf("PIB per Capita: %.2f reais\n", PIBPerCapita_1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("Nome da Cidade: %s\n", cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", turistico_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional_2);
    printf("PIB per Capita: %.2f reais\n", PIBPerCapita_2);

    return 0;
}
