#include <stdio.h>

struct Carta {
    char estado[2];
    char codigoCarta[3];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int numPontosTuristicos;
};

int main() {
    struct Carta cartaUm = {" ", " ", " ", 0, 0.0, 0.0, 0};
    struct Carta cartaDois = {" ", " ", " ", 0, 0.0, 0.0, 0};

    printf("Super Trunfo de Países\n\n");

    printf("Iniciando Carta 1\n\n");
    
    printf("Escolha um estado (Uma letra de A a H): ");
    scanf("%s", cartaUm.estado);
    printf("Escolha um codigo da carta (01 a 04): ");
    scanf("%s", cartaUm.codigoCarta);
    printf("Escolha uma cidade: ");
    scanf("%s", cartaUm.cidade);
    printf("Digite a quantidade de populacao: ");
    scanf("%d", &cartaUm.populacao);
    printf("Digite a area em KM (somente o numero): ");
    scanf("%f", &cartaUm.area);
    printf("Digite o pib: ");
    scanf("%f", &cartaUm.pib);
    printf("Escolha um numero de pontos turisticos: ");
    scanf("%d", &cartaUm.numPontosTuristicos);

    printf("\n\nIniciando Carta 2\n\n");
    
    printf("Escolha um estado (Uma letra de A a H): ");
    scanf("%s", cartaDois.estado);
    printf("Escolha um codigo da carta (01 a 04): ");
    scanf("%s", cartaDois.codigoCarta);
    printf("Escolha uma cidade: ");
    scanf("%s", cartaDois.cidade);
    printf("Digite a quantidade de populacao: ");
    scanf("%d", &cartaDois.populacao);
    printf("Digite a area em KM (somente o numero): ");
    scanf("%f", &cartaDois.area);
    printf("Digite o pib: ");
    scanf("%f", &cartaDois.pib);
    printf("Escolha um numero de pontos turisticos: ");
    scanf("%d", &cartaDois.numPontosTuristicos);

    printf("\n\nEssas são as Cartas\n\n");

    printf("\n\nCarta 1\n");
    printf("Estado: %s\n", cartaUm.estado);
    printf("Codigo da Carta: %s%s\n", cartaUm.estado, cartaUm.codigoCarta);
    printf("Cidade: %s\n", cartaUm.cidade);
    printf("Populacao: %d\n", cartaUm.populacao);
    printf("Area: %.2f KM\n", cartaUm.area);
    printf("PIB: %.2f\n", cartaUm.pib);
    printf("Pontos Turisticos: %d\n", cartaUm.numPontosTuristicos);

    printf("\n\nCarta 2\n");
    printf("Estado: %s\n", cartaDois.estado);
    printf("Codigo da Carta: %s%s\n", cartaDois.estado, cartaDois.codigoCarta);
    printf("Cidade: %s\n", cartaDois.cidade);
    printf("Populacao: %d\n", cartaDois.populacao);
    printf("Area: %.2f KM\n", cartaDois.area);
    printf("PIB: %.2f\n", cartaDois.pib);
    printf("Pontos Turisticos: %d\n", cartaDois.numPontosTuristicos);

    return 0;
};