#include <stdio.h>

struct carta {
    char estado[2];
    char codigoCarta[3];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int numPontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

void calculo(struct carta *val) {
    val->densidadePopulacional = (float) val->populacao / val->area;
    val->pibPerCapita = val->pib / val->populacao;
}

void entrada(struct carta *val) {
    printf("Escolha um estado (Uma letra de A a H): ");
    scanf("%s", val->estado);
    printf("Escolha um codigo da carta (01 a 04): ");
    scanf("%s", val->codigoCarta);
    printf("Escolha uma cidade: ");
    scanf("%s", val->cidade);
    printf("Digite a quantidade de populacao: ");
    scanf("%d", &val->populacao);
    printf("Digite a area em KM (somente o numero): ");
    scanf("%f", &val->area);
    printf("Digite o pib: ");
    scanf("%f", &val->pib);
    printf("Escolha um numero de pontos turisticos: ");
    scanf("%d", &val->numPontosTuristicos);
    calculo(val);
}

void saida(struct carta *val){
    printf("Estado: %s\n", val->estado);
    printf("Codigo da Carta: %s%s\n", val->estado, val->codigoCarta);
    printf("Cidade: %s\n", val->cidade);
    printf("Populacao: %d\n", val->populacao);
    printf("Area: %.2f KM²\n", val->area);
    printf("PIB: %.2f bilhões de reais\n", val->pib);
    printf("Pontos Turisticos: %d\n", val->numPontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", val->densidadePopulacional);
    printf("PIB Per Capita: %.2f reais\n", val->pibPerCapita);
}

int main() {
    struct carta cartaUm, cartaDois;

    printf("Super Trunfo de Países");
    
    printf("\n\nIniciando Carta Um\n\n");
    entrada(&cartaUm);

    printf("\n\nIniciando Carta Dois\n\n");
    entrada(&cartaDois);

    printf("\n\nEssas são as Cartas\n\n");

    printf("\n\nCarta 1\n");
    saida(&cartaUm);

    printf("\n\nCarta 2\n");
    saida(&cartaDois);
};