#include <stdio.h>

struct Cidade {
    char estado;
    int codigo;
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {
    struct Cidade cidade1, cidade2;

    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    /* ===== CARTA 1 ===== */
    printf("=== CADASTRO DA CARTA 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &cidade1.estado);

    printf("Codigo da cidade (1-4): ");
    scanf("%d", &cidade1.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1.nome);

    printf("Populacao: ");
    scanf("%d", &cidade1.populacao);

    printf("Area (km²): ");
    scanf("%f", &cidade1.area);

    printf("PIB: ");
    scanf("%f", &cidade1.pib);

    printf("Pontos turisticos: ");
    scanf("%d", &cidade1.pontosTuristicos);

    densidade1 = cidade1.populacao / cidade1.area;
    pibPerCapita1 = cidade1.pib / cidade1.populacao;

    /* ===== CARTA 2 ===== */
    printf("\n=== CADASTRO DA CARTA 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &cidade2.estado);

    printf("Codigo da cidade (1-4): ");
    scanf("%d", &cidade2.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2.nome);

    printf("Populacao: ");
    scanf("%d", &cidade2.populacao);

    printf("Area (km²): ");
    scanf("%f", &cidade2.area);

    printf("PIB: ");
    scanf("%f", &cidade2.pib);

    printf("Pontos turisticos: ");
    scanf("%d", &cidade2.pontosTuristicos);

    densidade2 = cidade2.populacao / cidade2.area;
    pibPerCapita2 = cidade2.pib / cidade2.populacao;

    /* ===== EXIBIÇÃO ===== */
    printf("\n--- CARTA 1 ---\n");
    printf("Codigo: %c%02d\n", cidade1.estado, cidade1.codigo);
    printf("Cidade: %s\n", cidade1.nome);
    printf("Populacao: %d\n", cidade1.populacao);
    printf("Area: %.2f km²\n", cidade1.area);
    printf("PIB: %.2f\n", cidade1.pib);
    printf("Pontos Turisticos: %d\n", cidade1.pontosTuristicos);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);

    printf("\n--- CARTA 2 ---\n");
    printf("Codigo: %c%02d\n", cidade2.estado, cidade2.codigo);
    printf("Cidade: %s\n", cidade2.nome);
    printf("Populacao: %d\n", cidade2.populacao);
    printf("Area: %.2f km²\n", cidade2.area);
    printf("PIB: %.2f\n", cidade2.pib);
    printf("Pontos Turisticos: %d\n", cidade2.pontosTuristicos);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    /* ===== COMPARAÇÕES ===== */
    printf("\n=== RESULTADO DAS COMPARACOES ===\n");

    printf("Populacao: %s\n",
        cidade1.populacao > cidade2.populacao ? "Carta 1 venceu" :
        cidade2.populacao > cidade1.populacao ? "Carta 2 venceu" : "Empate");

    printf("Area: %s\n",
        
cidade1.area > cidade2.area ? "Carta 1 venceu" :
        cidade2.area > cidade1.area ? "Carta 2 venceu" : "Empate");

    printf("PIB: %s\n",
        cidade1.pib > cidade2.pib ? "Carta 1 venceu" :
        cidade2.pib > cidade1.pib ? "Carta 2 venceu" : "Empate");

    printf("Pontos Turisticos: %s\n",
        cidade1.pontosTuristicos > cidade2.pontosTuristicos ? "Carta 1 venceu" :
        cidade2.pontosTuristicos > cidade1.pontosTuristicos ? "Carta 2 venceu" : "Empate");

    printf("Densidade Populacional: %s\n",
        densidade1 < densidade2 ? "Carta 1 venceu" :
        densidade2 < densidade1 ? "Carta 2 venceu" : "Empate");

    /* ===== SUPER PODER ===== */
    superPoder1 = cidade1.populacao + cidade1.area + cidade1.pib +
                  cidade1.pontosTuristicos + pibPerCapita1 - densidade1;

    superPoder2 = cidade2.populacao + cidade2.area + cidade2.pib +
                  cidade2.pontosTuristicos + pibPerCapita2 - densidade2;

    printf("\nSuper Poder: %s\n",
        superPoder1 > superPoder2 ? "Carta 1 venceu" :
        superPoder2 > superPoder1 ? "Carta 2 venceu" : "Empate");

    return 0;
}

