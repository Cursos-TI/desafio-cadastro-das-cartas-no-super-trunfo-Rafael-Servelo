#include <stdio.h>
#include <windows.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main()
{
    SetConsoleOutputCP(CP_UTF8); // Força a saída do console para UTF-8
    // Variáveis para armazenar os dados das cartas

    // Variaveis da Carta 1
    char estado_1, codigo_1[4], cidade_1[50];
    int turistico_1;
    unsigned long int populacao_1;
    float area_1, pib_1, densidadePopulacional_1, PIBPerCapita_1, SuperPoder_1;

    // Variaveis da Carta 2
    char estado_2, codigo_2[4], cidade_2[50];
    int turistico_2;
    unsigned long int populacao_2;
    float area_2, pib_2, densidadePopulacional_2, PIBPerCapita_2, SuperPoder_2;

    // Cadastro das Cartas:

    // Cadastro da carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Digite o estado (letra de A a H):\n");
    scanf(" %c", &estado_1);

    printf("Digite o código da carta (ex: A01):\n");
    scanf("%s", codigo_1);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", cidade_1); // Lê até a quebra de linha

    printf("Digite a população:\n");
    scanf("%lu", &populacao_1);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_1);

    printf("Digite o PIB (em bilhões de reais):\n");
    scanf("%f", &pib_1);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &turistico_1);

    // Cadastro da carta 2
    printf("Cadastro da Carta 2:\n");

    // Leitura dos dados da carta 2
    printf("Digite o estado (letra de A a H):\n");
    scanf(" %c", &estado_2);

    printf("Digite o código da carta (ex: A01):\n");
    scanf("%s", codigo_2);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", cidade_2); // Lê até a quebra de linha

    printf("Digite a população:\n");
    scanf("%lu", &populacao_2);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_2);

    printf("Digite o PIB (em bilhões de reais):\n");
    scanf("%f", &pib_2);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &turistico_2);

    // Tratamento para calcular a Densidade Populacional e o PIB per Capita da Carta 1
    densidadePopulacional_1 = populacao_1 / area_1;
    PIBPerCapita_1 = (pib_1 * 1000000000) / populacao_1;
    // Cálculo de Super Poder baseado na soma de atributos
    SuperPoder_1 =
        (populacao_1 / 100000) +
        (area_1 / 10) + (pib_1 * 1000) +
        (float)turistico_1 + (PIBPerCapita_1 / 1000) +
        (1.0 / densidadePopulacional_1 * 100);

    // Tratamento para calcular a Densidade Populacional e o PIB per Capita da Carta 2
    densidadePopulacional_2 = populacao_2 / area_2;
    PIBPerCapita_2 = (pib_2 * 1000000000) / populacao_2;
    // Cálculo de Super Poder baseado na soma de atributos
    SuperPoder_2 =
        (populacao_2 / 100000) +
        (area_2 / 10) + (pib_2 * 1000) +
        (float)turistico_2 + (PIBPerCapita_2 / 1000) +
        (1.0 / densidadePopulacional_2 * 100);

    // Exibindo os dados cadastrados de forma organizada
    printf("\nDados das Cartas Cadastradas:\n\n");

    // Exibição dos Dados da Carta 1:
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_1);
    printf("Nome da Cidade: %s\n", cidade_1);
    printf("População: %lu\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", turistico_1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional_1);
    printf("PIB per Capita: %.2f reais\n", PIBPerCapita_1);
    printf("Super Poder: %.2f\n", SuperPoder_1);

    // Exibição dos Dados da Carta 2:
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("Nome da Cidade: %s\n", cidade_2);
    printf("População: %lu\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", turistico_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional_2);
    printf("PIB per Capita: %.2f reais\n", PIBPerCapita_2);
    printf("Super Poder: %.2f\n\n", SuperPoder_2);

    // Comparação das Cartas
    printf("Comparação das Cartas:\n\n");

    printf("Legenda:\n");
    printf("Carta %s = 1\n", codigo_1);
    printf("Carta %s = 0\n\n", codigo_2);

    int venceuPop = populacao_1 > populacao_2;
    int venceuArea = area_1 > area_2;
    int venceuPIB = pib_1 > pib_2;
    int venceuTuristico = turistico_1 > turistico_2;
    int venceuDensidade = densidadePopulacional_1 < densidadePopulacional_2; // Menor densidade é melhor
    int venceuPIBPerCapita = PIBPerCapita_1 > PIBPerCapita_2;
    int venceuSuperPoder = SuperPoder_1 > SuperPoder_2;

    printf("População: Carta %s (%d)\n", venceuPop ? codigo_1 : codigo_2, venceuPop);
    printf("Área: Carta %s (%d)\n", venceuArea ? codigo_1 : codigo_2, venceuArea);
    printf("PIB: Carta %s (%d)\n", venceuPIB ? codigo_1 : codigo_2, venceuPIB);
    printf("Número de Pontos Turísticos: Carta %s (%d)\n", venceuTuristico ? codigo_1 : codigo_2, venceuTuristico);
    printf("Densidade Populacional: Carta %s (%d)\n", venceuDensidade ? codigo_1 : codigo_2, venceuDensidade);
    printf("PIB per Capita: Carta %s (%d)\n", venceuPIBPerCapita ? codigo_1 : codigo_2, venceuPIBPerCapita);
    printf("Super Poder: Carta %s (%d)\n", venceuSuperPoder ? codigo_1 : codigo_2, venceuSuperPoder);

    return 0;
}
