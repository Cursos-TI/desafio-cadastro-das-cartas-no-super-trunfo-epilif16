#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    // Declaração de variaveis:

    int menu, atributos, regra, sair;
    char letra1[10], letra2[10];
    char cod1[5], cod2[5];
    char pais1[20], pais2[20];
    unsigned long int populacao1, populacao2, pib1, pib2;
    float area1, area2;
    int pontostur1, pontostur2;
    float pibpercapita1, pibpercapita2;
    float denspop1, denspop2;
    unsigned long int superpoderA, superpoderB;

    // Menu interativo usando "switch":
    
    printf("*Bem vindo ao SUPER TRUNFO*\n");
    printf("MENU PRINCIPAL\n");
    printf("Escolha uma opção:\n");
    printf("1. JOGAR\n");
    printf("2. REGRA DO JOGO\n");
    printf("3. SAIR\n");
    scanf("%d", &menu);

    switch (menu){
        //Cadastro da primeira carta, usando "printf" e "scanf"
    case 1:
    printf("Vamos cadastrar a primeira carta.\n");
    
    printf("Escolha uma letra de A a H para representar um Estado:\n");
    scanf("%s", letra1);
   
    printf("Digite um numero de 01 a 04 para o codigo da sua carta: \n");
    scanf("%s", cod1);

    printf("Digite um País: \n");
    scanf("%s", pais1);

    printf("Digite a populacao do país escolhida: \n");
    scanf("%lu", &populacao1);

    printf("Digite a area em km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%lu", &pib1);

    printf("Digite quantos pontos turisticos: \n");
    scanf("%d", &pontostur1);

    //Calculo pib percapita e densidade demografica da primeira carta;
    pibpercapita1 = (float) pib1 / populacao1;
    denspop1 = (float) populacao1 / area1;

    printf("Primeira carta cadastrada!\n");
    printf("O país escolhido foi: %s\n", pais1);
    printf("A populaçao de %s é de: %lu habitantes.\n", pais1, populacao1);
    printf("A area de %s é de: %.3fkm².\n", pais1, area1);
    printf("O PIB é de: %.2lu de reais.\n", pib1);
    printf("PIB Percapita é: %.2f reais.\n", pibpercapita1);
    printf("A densidade demografica é: %.3f mil hab/km².\n", denspop1);
    printf("%s possui %d pontos turisticos.\n", pais1, pontostur1);
    printf("Codigo: %s%s\n", letra1,cod1);
    printf("\n");

    //Cadastro da segunda carta, usando "printf" e "scanf"
    printf("Agora vamos cadastrar a segunda carta.\n");

    printf("Escolha uma letra de A a H para representar um País:\n");
    scanf(" %s", letra2);
    
    printf("Digite um numero de 01 a 04 para o codigo da sua segunda carta:\n");
    scanf("%s", cod2);

    printf("Digite um País: \n");
    scanf("%s", pais2);

    printf("Digite a populacao: \n");
    scanf("%lu", &populacao2);

    printf("Digite a area em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%lu", &pib2);

    printf("Digite quantos pontos turisticos: \n");
    scanf("%d", &pontostur2);

    //Calculo pib percapita e densidade demografica da segunda carta;
    pibpercapita2 = (float) pib2 / populacao2;
    denspop2 = (float) populacao2 / area2;

    printf("Segunda carta cadastrada!\n");
    printf("O país escolhido foi: %s\n", pais2);
    printf("A populaçao de %s é de: %lu habitantes.\n", pais2, populacao2);
    printf("A area de %s é de: %.3fkm²\n", pais2, area2);
    printf("O PIB é de: %.2lu de reais.\n", pib2);
    printf("PIB Percapita é: %.2f reais.\n", pibpercapita2);
    printf("A densidade demografica é: %.3f mil hab/km².\n", denspop2);
    printf("%s possui %d pontos turisticos.\n", pais2, pontostur2);
    printf("Codigo: %s%s\n", letra2, cod2);

    //caulculo super poder das duas cartas:
    superpoderA = (unsigned long int) populacao1 + area1 + pib1 + pontostur1 + denspop1;
    superpoderB = (unsigned long int) populacao2 + area2 + pib2 + pontostur2 + denspop2;


    //imprimindo resultado das comparaçoes de atributos e super poder:

    printf("**Comparação de atributos entre as duas cartas**\n");
    printf("Escolha qual atributo queira comparar: \n");
    printf("1. POPULAÇÃO\n");
    printf("2. PIB\n");
    printf("3. AREA\n");
    printf("4. PIB PERCAPITA\n");
    printf("5. PONTOS TURISTICOS\n");
    printf("6. DENSIDADE DEMOGRAFICA\n");
    printf("7. SUPER PODER\n");
    scanf("%d", &atributos);

    switch (atributos){
        case 1: //populacao
        printf("População CARTA 1 (%s): %lu\n", pais1, populacao1);
        printf("População CARTA 2 (%s): %lu\n", pais2, populacao2);
     if (populacao1 > populacao2) {
        printf("Atributo POPULAÇÃO: Carta 1 venceu!\n");
    } else if (populacao1 < populacao2){
        printf("Atributo POPULAÇÃO: Carta 2 venceu!\n");
    } else {
            printf("EMPATE!\n");
    }
    break;

    case 2:
        printf("PIB CARTA 1 (%s): %.2lu\n", pais1, pib1);
        printf("PIB CARTA 2 (%s): %.2lu\n", pais2, pib2);
        if (pib1 > pib2) {
            printf("Atributo PIB: Carta 1 VENCEU!\n");
        } else if(pib1 < pib2){
            printf("Atributo PIB: Carta 2 VENCEU!\n");
        }    else {
                printf("EMPATE!\n"); 
        }
        break;

        case 3: // area/m2
        printf("AREA CARTA 1 (%s): %.3fkm²\n", pais1, area1);
        printf("AREA CARTA 2 (%s): %.3f\nkm²", pais2, area2);
     if (area1 > area2) {
        printf("Atributo AREA: Carta 1 VENCEU!\n");
    }    else if (area1 < area2){
            printf("Atributo AREA: Carta 2 VENCEU!\n");
    }   else{
            printf("EMPATE!\n"); 
    }
    break;
    case 4: //pibpercapita
        printf("PIB PERCAPITA CARTA 1 (%s): %.3f\n", pais1, pibpercapita1);
        printf("PIB PERCAPITA CARTA 2 (%s): %.3f\n", pais2, pibpercapita2);
    if (pibpercapita1 > pibpercapita2) {
        printf("Atributo PIB PERCAPITA: Carta 1 VENCEU!\n");
    } else if (pibpercapita1 < pibpercapita2){
        printf("Atributo PIB PERCAPITA: Carta 2 VENCEU!\n");}
        else{
            printf("EMPATE!\n"); 
        }
        break;

        case 5://pontos turiscos
    printf("PONTOS TURISTICOS CARTA 1 (%s): %d\n", pais1, pontostur1);
    printf("PONTOS TURISTICOS CARTA 2 (%s): %d\n", pais2, pontostur2);
    if (pontostur1 > pontostur2) {
        printf("Atributo PONTOS TURISTICOS: %d Carta 1 VENCEU!\n");
    } else if (pontostur1 < pontostur2){
        printf("Atributo PONTOS TURISTICOS: %d Carta 2 VENCEU!\n");
    } else{
        printf("EMPATE!\n"); 
    }
    break;

    case 6://densidade demografica
    printf("DENSIDADE demografica CARTA 1 (%s): %.3f\n", pais1, denspop1);
    printf("DENSIDADE demografica CARTA 2 (%s): %.3f\n", pais2, denspop2);
    if (denspop1 < denspop2) {
    printf("Atributo DENSIDADE POPULACIONAL: Carta 1 VENCEU!\n");
    } else if (denspop1 > denspop2){
    printf("Atributo DENSIDADE DEMOGRAFICA: Carta 2 VENCEU!\n");
    }  else {
     printf("EMPATE!\n"); 
    }
    break;

    case 7:
    printf("Todos atributos: *SUPER PODER*\n");
    printf("CARTA 1:%lu\n", superpoderA);
    printf("CARTA 2:%lu\n", superpoderB);
    if (superpoderA > superpoderB){
    printf("PRIMEIRA CARTA VENCEU!\n");
    }else if (superpoderA < superpoderB){
    printf("SEGUNDA CARTA VENCEU!\n");
    }else{
        printf("EMPATE!\n");}
    }
    break;

case 2: //Regra do jogo
printf("Regra geral do jogo:\n");
printf("A regra geral é: vence a carta com o maior valor no atributo escolhido.\n");
printf("Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.\n");

    
    break;

case 3:
printf("O jogo foi encerrado.\n");
scanf("%d", &sair);
    
break;
    
    default:
        printf("Opção invalida.\n");
}

    return 0;
}
    
