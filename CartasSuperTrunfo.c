#include <stdio.h>

int main() {
    char estado01[50], estado02[50];
    char cidadeA01[50], cidadeB01[50];
    int populacaoA01, populacaoB01;
    int turismoA01, turismoB01;
    int areaA01, areaB01;
    int pibA01, pibB01;
    int superpodercartaA01, superpodercartaB01;
    float densidadepopulacionalA01, densidadepopulacionalB01;

    // Entradas para o estado 1
    printf("Escreva o nome do estado 1: \n");
    scanf("%s", estado01);

    printf("Escreva o nome da cidade A01:  \n");
    scanf("%s", cidadeA01);
    printf("Escreva o número da população A01:  \n");
    scanf("%d", &populacaoA01);
    printf("Escreva o número de pontos turisticos A01:  \n");
    scanf("%d", &turismoA01);
    printf("Escreva o número da área A01:  \n");
    scanf("%d", &areaA01);
    printf("Escreva o número do PIB A01:  \n");
    scanf("%d", &pibA01);

    superpodercartaA01 = (populacaoA01 + turismoA01 + areaA01 + pibA01);
    densidadepopulacionalA01 = populacaoA01/areaA01;

    printf("Carta letra A01, nome do estado: %s - nome da cidade: %s \n", estado01, cidadeA01);
    printf("população: %d\n",populacaoA01);
    printf("Número de pontos turisticos: %d \n", turismoA01);
    printf("A área: %d e o pib da cidade é: %d \n", areaA01,pibA01);
    printf("O superpoder da carta é %d\n", superpodercartaA01);
    printf("A densidade populacional de A01: %.2f\n", densidadepopulacionalA01);

    // Entradas para o estado 2
    printf("Escreva o nome do estado 2: \n");
    scanf("%s", estado02);

    printf("Escreva o nome da cidade B01:  \n");
    scanf("%s", cidadeB01);
    printf("Escreva o número da população B01:  \n");
    scanf("%d", &populacaoB01);
    printf("Escreva o número de pontos turisticos B01:  \n");
    scanf("%d", &turismoB01);
    printf("Escreva o número da área B01:  \n");
    scanf("%d", &areaB01);
    printf("Escreva o número do PIB B01:  \n");
    scanf("%d", &pibB01);

    superpodercartaB01 = (populacaoB01 + turismoB01 + areaB01 + pibB01);
    densidadepopulacionalB01 = populacaoB01/areaB01;

    printf("Carta letra B01, nome do estado: %s - nome da cidade: %s \n", estado02, cidadeB01);
    printf("população: %d\n",populacaoB01);
    printf("Número de pontos turisticos: %d \n", turismoB01);
    printf("A área: %d e o pib da cidade é: %d \n", areaB01,pibB01);
    printf("O superpoder da carta é %d\n", superpodercartaB01);
    printf("A densidade populacional de B01: %.2f\n", densidadepopulacionalB01);

    // Comparando os atributos de cada cidade
    printf("\nComparando as cartas de %s e %s:\n", cidadeA01, cidadeB01);

    // Comparando população
    printf("População: %s\n", populacaoA01 > populacaoB01 ? "Cidade A venceu" : populacaoA01 < populacaoB01 ? "Cidade B venceu" : "Empate");

    // Comparando pontos turísticos
    printf("Pontos turísticos: %s\n", turismoA01 > turismoB01 ? "Cidade A venceu" : turismoA01 < turismoB01 ? "Cidade B venceu" : "Empate");

    // Comparando área
    printf("Área: %s\n", areaA01 > areaB01 ? "Cidade A venceu" : areaA01 < areaB01 ? "Cidade B venceu" : "Empate");

    // Comparando PIB
    printf("PIB: %s\n", pibA01 > pibB01 ? "Cidade A venceu" : pibA01 < pibB01 ? "Cidade B venceu" : "Empate");

    // Comparando superpoder
    printf("Superpoder: %s\n", superpodercartaA01 > superpodercartaB01? "Cidade A venceu" : superpodercartaA01 < superpodercartaB01 ? "Cidade B venceu" : "Empate");

    // Comparar densidade populacional
    printf("Densidade populacional: %s\n", densidadepopulacionalA01 < densidadepopulacionalB01? "Cidade B venceu" : densidadepopulacionalA01 > densidadepopulacionalB01 ? "cidade A venceu" : "Empate");
    

    return 0;
}
