#include <stdio.h>

struct Cidade {
    char estado;              // A até H
    int codigo;               // 1 até 4
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {
    struct Cidade cidade;

    printf("Estado (A-H): ");
    scanf(" %c", &cidade.estado);

    printf("Codigo da cidade (1-4): ");
    scanf("%d", &cidade.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade.nome);

    printf("Populacao: ");
    scanf("%d", &cidade.populacao);

    printf("Area (km²): ");
    scanf("%f", &cidade.area);

    printf("PIB: ");
    scanf("%f", &cidade.pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &cidade.pontosTuristicos);

    printf("\n--- CARTA CADASTRADA ---\n");
    printf("Estado: %c\n", cidade.estado);
    printf("Codigo: %c%02d\n", cidade.estado, cidade.codigo);
    printf("Cidade: %s\n", cidade.nome);
    printf("Populacao: %d\n", cidade.populacao);
    printf("Area: %.2f km²\n", cidade.area);
    printf("PIB: %.2f\n", cidade.pib);
    printf("Pontos Turisticos: %d\n", cidade.pontosTuristicos);

    return 0;
}
