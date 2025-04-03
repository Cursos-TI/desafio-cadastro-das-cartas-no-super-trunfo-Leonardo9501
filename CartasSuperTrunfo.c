#include <stdio.h>
#include <string.h>

int main() {
    char carta1;
    char estado1[3]; // Assumindo que o estado terá no máximo 2 letras + o caractere nulo
    char codigo1[10]; // Assumindo um tamanho razoável para o código
    char nomecidade1[50]; // Assumindo um tamanho máximo para o nome da cidade
    int populacao1;
    int area1;
    float pib1; // PIB geralmente é um valor decimal
    int pontoturistico1;
    char carta2;
    char estado2[3]; // Assumindo que o estado terá no máximo 2 letras + o caractere nulo
    char codigo2[10]; // Assumindo um tamanho razoável para o código
    char nomecidade2[50]; // Assumindo um tamanho máximo para o nome da cidade
    int populacao2;
    int area2;
    float pib2; // PIB geralmente é um valor decimal
    int pontoturistico2;

    printf("Digite o numero da primeira carta: \n");
    scanf(" %c", &carta1); // Use %c para caracteres

    printf("Digite o estado da primeira carta (ex: MG, SP): \n");
    scanf(" %s", estado1); // Use %s para strings

    printf("Digite o codigo da primeira carta: \n");
    scanf(" %s", codigo1); // Use %s para strings

    printf("Digite o nome da cidade: \n");
    scanf(" %s", nomecidade1); // Use %s para strings

    printf("Digite o numero da população na sua cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a area da sua cidade em Km: \n");
    scanf("%d", &area1);

    printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &pib1); // Use %f para float

    printf("Digite a quantidade de pontos turisticos da sua cidade: \n");
    scanf("%d", &pontoturistico1);

    printf("Digite o numero da segunda carta: \n");
    scanf(" %c", &carta2); // Use %c para caracteres

    printf("Digite o estado da segunda carta (ex: MG, SP): \n");
    scanf(" %s", estado2); // Use %s para strings

    printf("Digite o codigo da segunda carta: \n");
    scanf(" %s", codigo2); // Use %s para strings

    printf("Digite o nome da cidade: \n");
    scanf(" %s", nomecidade2); // Use %s para strings

    printf("Digite o numero da população na sua cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a area da sua cidade em Km: \n");
    scanf("%d", &area2);

    printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &pib2); // Use %f para float

    printf("Digite a quantidade de pontos turisticos da sua cidade: \n");
    scanf("%d", &pontoturistico2);

    // Opcional: Imprimir os dados lidos para verificar
    printf("\nDados da Primeira Carta:\n");
    printf("Numero da carta: %c\n", carta1);
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Area (Km): %d\n", area1);
    printf("PIB: %.2f\n", pib1); // Imprime o PIB com 2 casas decimais
    printf("Pontos turisticos: %d\n", pontoturistico1);

    printf("\nDados da Segunda Carta:\n");
    printf("Numero da carta: %c\n", carta2);
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Area (Km): %d\n", area2);
    printf("PIB: %.2f\n", pib2); // Imprime o PIB com 2 casas decimais
    printf("Pontos turisticos: %d\n", pontoturistico2);


    return 0;
}
