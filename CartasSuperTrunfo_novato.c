#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Carta 1
    char estado1;
    char codigo1[5];
    char nome1[20];
    int populacao1;
    float area1;
    float pib1;
    int ptoturistico1;
    float pibperc1;
    float denspop1;
    float media;

    // Carta 2
    char estado2;
    char codigo2[5];
    char nome2[20];
    int populacao2;
    float area2;
    float pib2;
    int ptoturistico2;
    float pibperc2;
    float denspop2;

    int resultpop, resultarea, resultptotu, resultdens, resultpib, resultsuper, resultperc;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Cadastro da Carta 1:\n");
    printf("Nome do Estado (A-B): ");
    scanf(" %c", &estado1);

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", nome1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &ptoturistico1);
    

    printf("\nCadastro da Carta 2:\n");
    printf("Nome do Estado (A-B): ");
    scanf(" %c", &estado2);

    printf("Código da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", nome2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &ptoturistico2);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", ptoturistico1);
    denspop1 = populacao1 / area1;
    printf("Densidade populacional: %.2f hab/km²\n", denspop1);
    pibperc1 = (pib1 * 1000000000) / populacao1;
    printf("PIB per Capita: %.2f reais\n", pibperc1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", ptoturistico2);

    //Cálculo densidade e PIB per capita
    denspop2 = populacao2 / area2;
    printf("Densidade populacional: %.2f hab/km²\n", denspop2);
    pibperc2 = (pib2 * 1000000000) / populacao2;
    printf("PIB per Capita: %.2f reais\n", pibperc2);

    float superpoder1 = populacao1 + area1 + pib1 + ptoturistico1 + pibperc1 + ( 1 / denspop1);
    float superpoder2 = populacao2 + area2 + pib2 + ptoturistico2 + pibperc2 + ( 1 / denspop2);

    //Comparação das cartas
    printf("***Comparação das cartas***");
    resultpop = populacao1 > populacao2;
    resultarea = area1 > area2;
    resultpib = pib1 > pib2;
    resultptotu = ptoturistico1 > ptoturistico2;
    resultdens = denspop1 < denspop2;
    resultperc = pibperc1 > pibperc2;
    resultsuper = superpoder1 > superpoder2;

    //Impressão dos resultados
    printf("\nComparação das cartas:\n\n");

    printf("População: Carta %d venceu (%d)\n", 2 - resultpop, resultpop);
    printf("Área: Carta %d venceu (%d)\n", 2 - resultarea, resultarea);
    printf("PIB: Carta %d venceu (%d)\n", 2 - resultpib, resultpib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 2 - resultptotu, resultptotu);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 2 - resultdens, resultdens);
    printf("PIB per Capita: Carta %d venceu (%d)\n,", 2 - resultperc, resultperc);
    printf("Super poder: Carta %d venceu (%d)\n", 2 - resultsuper, resultsuper);



    return 0;
}
