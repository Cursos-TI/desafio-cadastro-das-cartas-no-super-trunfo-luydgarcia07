#include <stdio.h>

int main (){
    char estado01[50], estado02[50], estado03[50], estado04[50];
    char cidadeA01[50], cidadeA02[50], cidadeA03[50], cidadeA04[50], cidadeB01[50], cidadeB02[50], cidadeB03[50], cidadeB04[50];
    char cidadeC01[50], cidadeC02[50], cidadeC03[50], cidadeC04[50], cidadeD01[50], cidadeD02[50], cidadeD03[50], cidadeD04[50];
    int populacaoA01, populacaoA02, populacaoA03, populacaoA04, populacaoB01, populacaoB02, populacaoB03, populacaoB04;
    int populacaoC01, populacaoC02, populacaoC03, populacaoC04, populacaoD01, populacaoD02, populacaoD03, populacaoD04;
    int turismoA01, turismoA02, turismoA03, turismoA04, turismoB01, turismoB02, turismoB03, turismoB04;
    int turismoC01, turismoC02, turismoC03, turismoC04, turismoD01, turismoD02, turismoD03, turismoD04;
    float areaA01, areaA02, areaA03, areaA04, areaB01, areaB02, areaB03, areaB04;
    float areaC01, areaC02, areaC03, areaC04, areaD01, areaD02, areaD03, areaD04;
    float pibA01, pibA02, pibA03, pibA04, pibB01, pibB02, pibB03, pibB04;
    float pibC01, pibC02, pibC03, pibC04, pibD01, pibD02, pibD03, pibD04;
    float densidadePopulacional1, densidadePopulacional2, densidadePopulacional3, densidadePopulacional4, pibpercapita1, pibpercapita2;
    
    printf("Escreva o nome do estado 1: \n");
    scanf("%s", estado01);

    printf("Escreva o nome do estado 2: \n");
    scanf("%s", estado02);

    printf("Escreva o nome do estado 3: \n");
    scanf("%s", estado03);

    printf("Escreva o nome do estado 4: \n");
    scanf("%s", estado04);

    printf("Escreva o nome da cidade A01:  \n");
    scanf("%s", cidadeA01);

    printf("Escreva o nome da cidade A02:  \n");
    scanf("%s", cidadeA02);

    printf("Escreva o nome da cidade A03:  \n");
    scanf("%s", cidadeA03);

    printf("Escreva o nome da cidade A04:  \n");
    scanf("%s", cidadeA04);

    printf("Escreva o nome da cidade B01:  \n");
    scanf("%s", cidadeB01);

    printf("Escreva o nome da cidade B02:  \n");
    scanf("%s", cidadeB02);

    printf("Escreva o nome da cidade B03:  \n");
    scanf("%s", cidadeB03);

    printf("Escreva o nome da cidade B04:  \n");
    scanf("%s", cidadeB04);

    printf("Escreva o nome da cidade C01:  \n");
    scanf("%s", cidadeC01);

    printf("Escreva o nome da cidade C02:  \n");
    scanf("%s", cidadeC02);

    printf("Escreva o nome da cidade C03:  \n");
    scanf("%s", cidadeC03);

    printf("Escreva o nome da cidade C04:  \n");
    scanf("%s", cidadeC04);
    
    printf("Escreva o nome da cidade D01:  \n");
    scanf("%s", cidadeD01);

    printf("Escreva o nome da cidade D02:  \n");
    scanf("%s", cidadeD02);

    printf("Escreva o nome da cidade D03:  \n");
    scanf("%s", cidadeD03);

    printf("Escreva o nome da cidade D04:  \n");
    scanf("%s", cidadeD04);

    printf("Escreva o número da população A01:  \n");
    scanf("%d", populacaoA01);

    printf("Escreva o número da população A02:  \n");
    scanf("%d", populacaoA02);

    printf("Escreva o número da população A03:  \n");
    scanf("%d", populacaoA03);

    printf("Escreva o número da população A04:  \n");
    scanf("%d", populacaoA04);

    printf("Escreva o número da população B01:  \n");
    scanf("%d", populacaoB01);

    printf("Escreva o número da população B02:  \n");
    scanf("%d", populacaoB02);

    printf("Escreva o número da população B03:  \n");
    scanf("%d", populacaoB03);

    printf("Escreva o número da população B04:  \n");
    scanf("%d", populacaoB04);

    printf("Escreva o número da população C01:  \n");
    scanf("%d", populacaoC01);

    printf("Escreva o número da população C02:  \n");
    scanf("%d", populacaoC02);

    printf("Escreva o número da população C03:  \n");
    scanf("%d", populacaoC03);

    printf("Escreva o número da população C04:  \n");
    scanf("%d", populacaoC04);

    printf("Escreva o número da população D01:  \n");
    scanf("%d", populacaoD01);

    printf("Escreva o número da população D02:  \n");
    scanf("%d", populacaoD02);

    printf("Escreva o número da população D03:  \n");
    scanf("%d", populacaoD03);

    printf("Escreva o número da população D04:  \n");
    scanf("%d", populacaoD04);

    printf("Escreva o número de pontos turisticos A01:  \n");
    scanf("%d", &turismoA01);

    printf("Escreva o número de pontos turisticos A02:  \n");
    scanf("%d", &turismoA02);

    printf("Escreva o número de pontos turisticos A03:  \n");
    scanf("%d", &turismoA03);

    printf("Escreva o número de pontos turisticos A04:  \n");
    scanf("%d", &turismoA04);

    printf("Escreva o número de pontos turisticos B01:  \n");
    scanf("%d", &turismoB01);

    printf("Escreva o número de pontos turisticos B02:  \n");
    scanf("%d", &turismoB02);

    printf("Escreva o número de pontos turisticos B03:  \n");
    scanf("%d", &turismoB03);

    printf("Escreva o número de pontos turisticos B04:  \n");
    scanf("%d", &turismoB04);

    printf("Escreva o número de pontos turisticos C01:  \n");
    scanf("%d", &turismoC01);

    printf("Escreva o número de pontos turisticos C02:  \n");
    scanf("%d", &turismoC02);

    printf("Escreva o número de pontos turisticos C03:  \n");
    scanf("%d", &turismoC03);

    printf("Escreva o número de pontos turisticos C04:  \n");
    scanf("%d", &turismoC04);

    printf("Escreva o número de pontos turisticos D01:  \n");
    scanf("%d", &turismoD01);

    printf("Escreva o número de pontos turisticos D02:  \n");
    scanf("%d", &turismoD02);

    printf("Escreva o número de pontos turisticos D03:  \n");
    scanf("%d", &turismoD03);

    printf("Escreva o número de pontos turisticos D04:  \n");
    scanf("%d", &turismoD04);

    printf("Escreva o número da area A01:  \n");
    scanf("%2.f", &areaA01);

    printf("Escreva o número da area A02:  \n");
    scanf("%2.f", &areaA02);

    printf("Escreva o número da area A03:  \n");
    scanf("%2.f", &areaA03);

    printf("Escreva o número da area A04:  \n");
    scanf("%2.f", &areaA04);

    printf("Escreva o número da area B01:  \n");
    scanf("%2.f", &areaB01);

    printf("Escreva o número da area B02:  \n");
    scanf("%2.f", &areaB02);

    printf("Escreva o número da area B03:  \n");
    scanf("%2.f", &areaB03);

    printf("Escreva o número da area B04:  \n");
    scanf("%2.f", &areaB04);

    printf("Escreva o número da area C01:  \n");
    scanf("%2.f", &areaC01);

    printf("Escreva o número da area C02:  \n");
    scanf("%2.f", &areaC02);

    printf("Escreva o número da area C03:  \n");
    scanf("%2.f", &areaC03);

    printf("Escreva o número da area C04:  \n");
    scanf("%2.f", &areaC04);

    printf("Escreva o número da area D01:  \n");
    scanf("%2.f", &areaD01);

    printf("Escreva o número da area D02:  \n");
    scanf("%2.f", &areaD02);

    printf("Escreva o número da area D03:  \n");
    scanf("%2.f", &areaD03);

    printf("Escreva o número da area D04:  \n");
    scanf("%2.f", &areaD04);

    printf("Escreva o número do pib A01:  \n");
    scanf("%2.f", &pibA01);

    printf("Escreva o número do pib A02:  \n");
    scanf("%2.f", &pibA02);

    printf("Escreva o número do pib A03:  \n");
    scanf("%2.f", &pibA03);

    printf("Escreva o número do pib A04:  \n");
    scanf("%2.f", &pibA04);

    printf("Escreva o número do pib B01:  \n");
    scanf("%2.f", &pibB01);

    printf("Escreva o número do pib B02:  \n");
    scanf("%2.f", &pibB02);

    printf("Escreva o número do pib B03:  \n");
    scanf("%2.f", &pibB03);

    printf("Escreva o número do pib B04:  \n");
    scanf("%2.f", &pibB04);

    printf("Escreva o número do pib C01:  \n");
    scanf("%2.f", &pibC01);

    printf("Escreva o número do pib C02:  \n");
    scanf("%2.f", &pibC02);

    printf("Escreva o número do pib C03:  \n");
    scanf("%2.f", &pibC03);

    printf("Escreva o número do pib C04:  \n");
    scanf("%2.f", &pibC04);

    printf("Escreva o número do pib D01:  \n");
    scanf("%2.f", &pibD01);

    printf("Escreva o número do pib D02:  \n");
    scanf("%2.f", &pibD02);

    printf("Escreva o número do pib D03:  \n");
    scanf("%2.f", &pibD03);

    printf("Escreva o número do pib D04:  \n");
    scanf("%2.f", &pibD04);


    printf("Carta letra A01, nome do estado: %s - nome da cidade: %s \n", estado01, cidadeA01);
    printf("população: %d\n",populacaoA01);
    printf("Número de pontos turisticos: %d \n", turismoA01);
    printf("A área: %2.f e o pib da cidade é: %2.f \n", areaA01,pibA01);

    printf("Carta letra A02, nome do estado: %s - nome da cidade: %s \n", estado01, cidadeA02);
    printf("população: %d\n",populacaoA02);
    printf("Número de pontos turisticos: %d \n", turismoA02);
    printf("A área: %2.f e o pib da cidade é: %2.f \n", areaA02,pibA02);

    printf("Carta letra A03, nome do estado: %s - nome da cidade: %s \n", estado01, cidadeA03);
    printf("população: %d\n",populacaoA03);
    printf("Número de pontos turisticos: %d \n", turismoA03);
    printf("A área: %2.f e o pib da cidade é: %2.f \n", areaA03,pibA03);

    printf("Carta letra A04, nome do estado: %s - nome da cidade: %s \n", estado01, cidadeA04);
    printf("população: %d\n",populacaoA04);
    printf("Número de pontos turisticos: %d \n", turismoA04);
    printf("A área: %2.f e o pib da cidade é: %2.f \n", areaA04,pibA04);

    printf("Carta letra B01, nome do estado: %s - nome da cidade: %s \n", estado02, cidadeB01);
    printf("população: %d\n",populacaoB01);
    printf("Número de pontos turisticos: %d \n", turismoB01);
    printf("A área: %2.f e o pib da cidade é: %2.f \n", areaB01,pibB01);

    printf("Carta letra B02, nome do estado: %s - nome da cidade: %s \n", estado02, cidadeB02);
    printf("população: %d\n",populacaoB02);
    printf("Número de pontos turisticos: %d \n", turismoB02);
    printf("A área: %2.f e o pib da cidade é: %2.f \n", areaB02,pibB02);

    printf("Carta letra B03, nome do estado: %s - nome da cidade: %s \n", estado02, cidadeB03);
    printf("população: %d\n",populacaoB03);
    printf("Número de pontos turisticos: %d \n", turismoB03);
    printf("A área: %2.f e o pib da cidade é: %2.f \n", areaB03,pibB03);

    printf("Carta letra B04, nome do estado: %s - nome da cidade: %s \n", estado02, cidadeB04);
    printf("população: %d\n",populacaoB04);
    printf("Número de pontos turisticos: %d \n", turismoB04);
    printf("A área: %2.f e o pib da cidade é: %2.f \n", areaB04,pibB04);

    printf("Carta letra C01, nome do estado: %s - nome da cidade: %s \n", estado03, cidadeC01);
    printf("população: %d\n",populacaoC01);
    printf("Número de pontos turisticos: %d \n", turismoC01);
    printf("A área: %2.f e o pib da cidade é: %2.f \n", areaC01,pibC01);

    printf("Carta letra C02, nome do estado: %s - nome da cidade: %s \n", estado03, cidadeC02);
    printf("população: %d\n",populacaoC02);
    printf("Número de pontos turisticos: %d \n", turismoC02);
    printf("A área: %2.f e o pib da cidade é: %2.f \n", areaC02,pibC02);

    printf("Carta letra C03, nome do estado: %s - nome da cidade: %s \n", estado03, cidadeC03);
    printf("população: %d\n",populacaoC03);
    printf("Número de pontos turisticos: %d \n", turismoC03);
    printf("A área: %2.f e o pib da cidade é: %2.f \n", areaC03,pibC03);

    printf("Carta letra C04, nome do estado: %s - nome da cidade: %s \n", estado03, cidadeC04);
    printf("população: %d\n",populacaoC04);
    printf("Número de pontos turisticos: %d \n", turismoC04);
    printf("A área: %2.f e o pib da cidade é: %2.f \n", areaC04,pibC04);

    printf("Carta letra D01, nome do estado: %s - nome da cidade: %s \n", estado04, cidadeD01);
    printf("população: %d\n",populacaoD01);
    printf("Número de pontos turisticos: %d \n", turismoD01);
    printf("A área: %2.f e o pib da cidade é: %2.f \n", areaD01,pibD01);

    printf("Carta letra D02, nome do estado: %s - nome da cidade: %s \n", estado04, cidadeD02);
    printf("população: %d\n",populacaoD02);
    printf("Número de pontos turisticos: %d \n", turismoD02);
    printf("A área: %2.f e o pib da cidade é: %2.f \n", areaD02,pibD02);

    printf("Carta letra D03, nome do estado: %s - nome da cidade: %s \n", estado04, cidadeD03);
    printf("população: %d\n",populacaoD03);
    printf("Número de pontos turisticos: %d \n", turismoD03);
    printf("A área: %2.f e o pib da cidade é: %2.f \n", areaD03,pibD03);

    printf("Carta letra D04, nome do estado: %s - nome da cidade: %s \n", estado04, cidadeD04);
    printf("população: %d\n",populacaoD04);
    printf("Número de pontos turisticos: %d \n", turismoD04);
    printf("A área: %2.f e o pib da cidade é: %2.f \n", areaD04,pibD04);



    densidadePopulacional1 = (float) (populacaoA01/areaA01);
    ("A densidade populacional é: %2.f \n", densidadePopulacional1);

    densidadePopulacional2 = (float) (populacaoA02/areaA02);
    ("A densidade populacional é: %2.f \n", densidadePopulacional2);

    pibpercapita1 = (float) (populacaoA01/pibA01);
    ("O pib per capita é: %2.f \n", pibpercapita1);

    pibpercapita2 = (float) (populacaoA02/pibA02);
    ("O pib per capita é: %2.f \n", pibpercapita2);








    return 0;
}
