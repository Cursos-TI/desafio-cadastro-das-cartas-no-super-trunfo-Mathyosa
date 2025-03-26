#include <stdio.h>

int main() {
    //carta 1
   
    char estado1[15];
    char codigo1[5];
    char cidade1[15];
    int populacao1;
    float area1;
    float pib1;
    int ponto_turistico1;
    float densidade_populacional1; 
    float pib_per_capita1;
   
    printf("Digite o nome do estado1: \n");
    scanf("%s", &estado1);
   
    printf("Digite o codigo1 da carta: \n");
    scanf("%s", &codigo1);
   
    printf("Digite o nome da cidade1: \n");
    scanf("%s", &cidade1);
   
    printf("Digite a populacao1: \n");
    scanf("%d", &populacao1);
   
    printf("Digite a area1(km²): \n");
    scanf("%f", &area1);
   
    printf("Digite o PIB1(bilhões de reais): \n");
    scanf("%f", &pib1);
   
    printf("Digite número de pontos turistico1: \n");
    scanf("%d", &ponto_turistico1);

    //calculo de densidade e pib per capita carta 1

    densidade_populacional1 = populacao1 / area1;

    pib_per_capita1 =  pib1 / populacao1;
   
    //Exibição da carta1
   
    printf("nome do estado1: %s\n", estado1);
    printf("codigo1: %s\n", codigo1);
    printf("cidade1: %s\n", cidade1);
    printf("populacao1: %d\n", populacao1);
    printf("area1: %f\n", area1);
    printf("pib1: %f\n", pib1);
    printf("ponto turistico1: %d\n",ponto_turistico1);
    printf("densidade populacional1: %.2f\n", densidade_populacional1);
    printf("pib per capita1: %.2f\n", pib_per_capita1);
   
    //carta 2
   
    char estado2[15];
    char codigo2[5];
    char cidade2[15];
    int populacao2;
    float area2;
    float pib2;
    int ponto_turistico2;
    float densidade_populacional2;
    float pib_per_capita2;

    printf("Digite o nome do estado2: \n");
    scanf("%s", &estado2);
   
    printf("Digite o codigo2: \n");
    scanf("%s", &codigo2);
   
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);
   
    printf("Digite populacao2: \n");
    scanf("%d",&populacao2);
   
    printf("Digite a area2(km2): \n");
    scanf("%f", &area2);
   
    printf("Digite o PIB2(bilhões de reais): \n");
    scanf("%f", &pib2);
   
    printf("Digite número de pontos turistico2: \n");
    scanf("%d", &ponto_turistico2);
  
    //calculo de densidade e pib per capita carta 2

    densidade_populacional2 = populacao2 / area2;

    pib_per_capita2 =  pib2 / populacao2;

   
    //Exibição da carta2
   
    printf("estado2: %s\n", estado2);
    printf("codigo2: %s\n", codigo2);
    printf("cidade2: %s\n", cidade2);
    printf("populacao2: %d\n", populacao2);
    printf("area2: %f\n", area2);
    printf("pib2: %f\n", pib2);
    printf("turistico2: %d\n", ponto_turistico2);
    printf("densidade populacional1: %.2f\n", densidade_populacional2);
    printf("pib per capita1: %.2f\n", pib_per_capita2);
   
   
    return 0;
   }
   