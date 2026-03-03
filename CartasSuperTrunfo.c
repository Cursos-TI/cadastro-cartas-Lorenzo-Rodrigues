#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
    char estado1, estado2;
    
    char codigoDaCarta1[5], codigoDaCarta2[5], nomeDaCidade1[20], nomeDaCidade2[20];
    
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    
    float area1, area2, pib1, pib2;
    
    float densidadePopulacional1, densidadePopulacional2, pibPerCapita1, pibPerCapita2;
    
    int comparacaoPopulacao, comparacaoArea, comparacaoPib, comparacaoPontosTuristicos;
    
    int comparacaoDensidadePopulacional, comparacaoPibPerCapita, comparacaoSuperPoder;
    
    printf("Cadastre a primeira carta:\n");
    printf("Digite o estado:");
    scanf(" %c",&estado1);
    printf("Digite o codigo:");
    scanf("%s", codigoDaCarta1);
    printf("Digite o nome da cidade:");
    scanf("%s", nomeDaCidade1);
    printf("Digite o numero de habitantes:");
    scanf("%d", &populacao1);
    printf("Digite a area em quilometros quadrados:");
    scanf("%f", &area1);
    printf("Digite o pib:");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos:");
    scanf("%d", &pontosTuristicos1);
    
    
    printf("--------------------------------------- \n");
    printf("Cadastre a segunda carta:\n");
    printf("Digite o estado:");
    scanf(" %c",&estado2);
    printf("Digite o codigo:");
    scanf("%s", codigoDaCarta2);
    printf("Digite o nome da cidade:");
    scanf("%s", nomeDaCidade2);
    printf("Digite o numero de habitantes:");
    scanf("%d", &populacao2);
    printf("Digite a area em quilometros quadrados:");
    scanf("%f", &area2);
    printf("Digite o pib:");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos:");
    scanf("%d", &pontosTuristicos2);
    
    densidadePopulacional1 = populacao1 / area1;
    densidadePopulacional2 = populacao2 / area2;
    
    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;
    
    printf("--------------------------------------\n");
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %s \n", codigoDaCarta1);
    printf("Nome da cidade: %s \n", nomeDaCidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Número de pontos turísticos: %d \n", pontosTuristicos1);
    printf("Densidade populacional: %.2f \n", densidadePopulacional1);
    printf("PIB per Capita: %.2f \n", pibPerCapita1);
    
    printf("---------------------------------------\n");
    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n", codigoDaCarta2);
    printf("Nome da cidade: %s \n", nomeDaCidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Número de pontos turísticos: %d \n", pontosTuristicos2);
    printf("Densidade populacional: %.2f \n", densidadePopulacional2);
    printf("PIB per Capita: %.2f \n", pibPerCapita2);
    
    float superPoder1, superPoder2;
    
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1/densidadePopulacional1);
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1/densidadePopulacional2);
    
    
    comparacaoPopulacao = populacao1 > populacao2;
    comparacaoArea = area1 > area2;
    comparacaoPib = pib1 > pib2;
    comparacaoPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
    comparacaoDensidadePopulacional = densidadePopulacional1 < densidadePopulacional2;
    comparacaoPibPerCapita = pibPerCapita1 > pibPerCapita2;
    comparacaoSuperPoder = superPoder1 > superPoder2;
    
    
    
    printf("------------------------ \n");
    printf("Comparação de atributos entre as cartas");
    printf("O vencedor é decidido (1) para carta 1 e (0) para carta 2\n");
    printf("População: %d\n",comparacaoPopulacao);
    printf("Área:%d \n", comparacaoArea);
    printf("PIB:%d \n", comparacaoPib);
    printf("Pontos turísticos:%d \n", comparacaoPontosTuristicos);
    printf("Densidade populacional:%d \n", comparacaoDensidadePopulacional);
    printf("PIB per Capita:%d \n",comparacaoPibPerCapita);
    printf("Super poder: %d\n", comparacaoSuperPoder);
    
    return 0;
}
