#include <stdio.h>
//Recebimento de dados para criação das cartas
int main (){
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    char estado1[50], estado2[50], carta1[50], carta2[50], nome1[50], nome2[50];
    float area1, area2, pib1, pib2;
 //Leitura de dados   
    printf("Escreva o nome do estado 1: \n");
    scanf("%s", estado1);

    printf("Escreva o nome do estado 2: \n");
    scanf("%s", estado2);

    printf("Escreva o número do código da carta 1:  \n");
    scanf("%s", carta1);

    printf("Escreva o número do código da carta 2:  \n");
    scanf("%s", carta2);

    printf("Escreva o nome da cidade 1: \n");
    scanf("%s", nome1);

    printf("Escreva o nome da cidade 2: \n");
    scanf("%s", nome2);

    printf("Escreva o número da população da cidade 1:  \n");
    scanf("%d", &populacao1);

    printf("Escreva o número da população da cidade 2:  \n");
    scanf("%d", &populacao2);

    printf("Escreva o número da área da cidade 1: \n");
    scanf("%f", &area1);

    printf("Escreva o número da área da cidade 2: \n");
    scanf("%f", &area2);

    printf("Escreva o PIB da cidade 1: \n");
    scanf("%f", &pib1);

    printf("Escreva o PIB da cidade 2: \n");
    scanf("%f", &pib2);

    printf("Escreva o número de pontos turisticos da cidade 1: \n");
    scanf("%d", &pontosTuristicos1);

    printf("Escreva o número de pontos turisticos da cidade 2: \n");
    scanf("%d", &pontosTuristicos2);
//resultado dos dados
    printf("Carta número 1, nome do estado: %s - número do código da carta: %s \n", estado1, carta1 );
    printf("Nome da cidade: %s - população: %d\n", nome1, populacao1);
    printf("Número de pontos turisticos: %d \n", pontosTuristicos1);
    printf("A área: %f e o pib da cidade é: %f \n", area1,pib1);

    printf("Carta número 2, nome do estado: %s - número do código da carta: %s \n", estado2, carta2 );
    printf("Nome da cidade: %s - população: %d\n", nome2, populacao2);
    printf("Número de pontos turisticos: %d \n", pontosTuristicos2);
    printf("A área: %f e o pib da cidade é: %f \n", area2,pib2);

    return 0;
}
