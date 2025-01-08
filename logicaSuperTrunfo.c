#desafio finalizado
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.
int main() {
    
    
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    // Declaração de variáveis
    char estado1[3], estado2[3];           // Para a sigla do estado
    char codigo_carta1[3], codigo_carta2[3]; // Código da carta
    char nome_cidade1[20], nome_cidade2[20]; // Nome da cidade
    int populacao1, populacao2;            // População
    float area1, area2;                    // Área
    float pib1, pib2;                      // PIB
    int pontos_turisticos1, pontos_turisticos2; // Pontos turísticos
    int escolha;                           // Atributo escolhido para a comparação

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

  // Entrada de dados do Jogador 1
    printf("\nJogador 1\nEntre com o estado (sigla): ");
    scanf("%2s", estado1);

    printf("Entre com o código da carta: ");
    scanf("%s", codigo_carta1);

    printf("Entre com o nome da cidade (use _ para espaços): ");
    scanf("%s", nome_cidade1);

    printf("Entre com a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Entre com a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Entre com o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Entre com o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Entrada de dados do Jogador 2
    printf("\nJogador 2\nEntre com o estado (sigla): ");
    scanf("%2s", estado2);

    printf("Entre com o código da carta: ");
    scanf("%s", codigo_carta2);

    printf("Entre com o nome da cidade (use _ para espaços): ");
    scanf("%s", nome_cidade2);

    printf("Entre com a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Entre com a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Entre com o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Entre com o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);


    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Escolha do atributo
    printf("\nEscolha o atributo para a comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("Digite o número do atributo escolhido: ");
    scanf("%d", &escolha);

    
    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
// Comparação com base no atributo escolhido
    if (escolha == 1) {
        if (populacao1 > populacao2) {
            printf("A cidade vencedora é: %s\n", nome_cidade1);
        } else {
            printf("A cidade vencedora é: %s\n", nome_cidade2);
        }
    } else if (escolha == 2) {
        if (area1 > area2) {
            printf("A cidade vencedora é: %s\n", nome_cidade1);
        } else {
            printf("A cidade vencedora é: %s\n", nome_cidade2);
        }
    } else if (escolha == 3) {
        if (pib1 > pib2) {
            printf("A cidade vencedora é: %s\n", nome_cidade1);
        } else {
            printf("A cidade vencedora é: %s\n", nome_cidade2);
        }
    } else if (escolha == 4) {
        if (pontos_turisticos1 > pontos_turisticos2) {
            printf("A cidade vencedora é: %s\n", nome_cidade1);
        } else {
            printf("A cidade vencedora é: %s\n", nome_cidade2);
        }
    } else {
        printf("Escolha inválida!\n");
    }
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
