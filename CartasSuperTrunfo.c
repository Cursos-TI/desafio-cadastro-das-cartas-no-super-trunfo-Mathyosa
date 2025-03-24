#include <stdio.h>


int main() {

    char estado[50];
    char codigo[5];
    char cidade[50];
    int população;
    float area;
    float PIB;
    int pontos_turísticos; 

    printf("Digite o nome do estado: \n");
    scanf("%s", estado);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a população do estado: \n");
    scanf("%d", &população);

    printf("Digite a área do estado: \n");
    scanf("%f", &area);

    printf("Digite o PIB do estado: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos do estado: \n");
    scanf("%d", &pontos_turísticos);

    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", população);
    printf("Área: %3.f\n", area);
    printf("PIB: %3.f\n", PIB);
    printf("Pontos turísticos: %d\n", pontos_turísticos);

    return 0;
}