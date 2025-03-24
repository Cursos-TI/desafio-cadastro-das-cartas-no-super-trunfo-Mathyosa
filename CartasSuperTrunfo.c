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
   
    printf("digite o nome do estado1: \n");
    scanf("%s", &estado1);
   
    printf("digite o codigo1 da carta: \n");
    scanf("%s", &codigo1);
   
    printf("digite o nome da cidade1: \n");
    scanf("%s", &cidade1);
   
    printf("digite a populacao1: \n");
    scanf("%d", &populacao1);
   
    printf("digite a area1: \n");
    scanf("%f", &area1);
   
    printf("digite o pib1: \n");
    scanf("%f", &pib1);
   
    printf("digite pontos turistico1: \n");
    scanf("%d", &ponto_turistico1);
   
    printf("nome do estado1: %s\n", estado1);
    printf("codigo1: %s\n", codigo1);
    printf("cidade1: %s\n", cidade1);
    printf("populacao1: %d\n", populacao1);
    printf("area1: %f\n", area1);
    printf("pib1: %f\n", pib1);
    printf("ponto turistico1: %d\n",ponto_turistico1);
   
    //carta 2
   
    char estado2[15];
    char codigo2[5];
    char cidade2[15];
    int populacao2;
    float area2;
    float pib2;
    int ponto_turistico2;
   
    printf("digite o nome do estado2: \n");
    scanf("%s", &estado2);
   
    printf("digite o codigo2: \n");
    scanf("%s", &codigo2);
   
    printf("digite o nome da cidade: \n");
    scanf("%s", &cidade2);
   
    printf("digite populacao2: \n");
    scanf("%d",&populacao2);
   
    printf("digite a area2: \n");
    scanf("%f", &area2);
   
    printf("digite o pib2: \n");
    scanf("%f", &pib2);
   
    printf("digite ponto turistico2: \n");
    scanf("%d", &ponto_turistico2);
   
    printf("estado2: %s\n", estado2);
    printf("codigo2: %s\n", codigo2);
    printf("cidade2: %s\n", cidade2);
    printf("populacao2: %d\n", populacao2);
    printf("area2: %f\n", area2);
    printf("pib2: %f\n", pib2);
    printf("turistico2: %d\n", ponto_turistico2);
   
    return 0;
   }
   