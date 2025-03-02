#include <stdio.h>

int main(){

    int carta1 = 1;
    char estado1[1] = "A";
    char cod1[3] = "A01";
    char cidade1[10];
    float populacao1;
    float area1;
    float pib1;
    int pontostur1;

    int carta2 = 2;
    char estado2[1] = "A";
    char cod2[3] = "B01";
    char cidade2[10];
    float populacao2;
    float area2;
    float bib2;
    int pontostur2;

    printf("%d\n", carta1);

    printf("Escolha uma letra de 'A' a 'H': %c\n");
    scanf("%s", &estado1, &cod1);
    printf("Codigo da letra escolhida: %s\n", cod1);

    printf("Digite a Cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a populacao: \n");
    scanf("%f", &populacao1);

    printf("Digite a area: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turisticos: \n");
    scanf("%d", &pontostur1);

    printf("A cidade escolhida foi: %s\n", cidade1);
    printf("A populaçao de %s é: %f\n", cidade1, populacao1);
    printf("A area de %s é: %f\n", cidade1, area1);
    printf("O PIB é: %f\n", pib1);
    printf("%s tem %d pontos turisticos\n", cidade1, pontostur1);
    printf("Codigo: %s", cod1);


}


