#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    printf("Bem vindo ao Desafio Super Trunfo\n");

    char estado[3]; // Para a sigla do estado
    int codigo_carta;
    char nome_cidade[100]; // Para o nome da cidade
    int populacao; // População
    float area; // Área
    float pib; // PIB
    int pontos_turisticos; // Número de pontos turísticos

    printf("Entre com o estado (sigla): ");
    scanf("%2s", estado);

    printf("Entre com o código da carta: ");
    scanf("%d", &codigo_carta);

    // Limpa o buffer antes de ler uma string completa
    getchar(); // Remove o caractere '\n' que ficou no buffer

    printf("Entre com o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade); // Lê uma string com espaços até encontrar '\n'

    printf("Entre com a população da cidade: ");
    scanf("%d", &populacao);

    printf("Entre com a área da cidade (em km²): ");
    scanf("%f", &area);

    printf("Entre com o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Entre com o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);
    

    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio


    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
