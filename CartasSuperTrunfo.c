#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char codigo_cidade;
    char nome[20];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    // leitura do codigo da cidade
    printf("Digite o código da cidade: ");
    scanf(" %c", &codigo_cidade);

    // leitura do nome
    printf("Digite o nome da cidade: ");
    scanf("%s", &nome);

    // leitura da população
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    // leitura da area
    printf("Digite a área da cidade: ");
    scanf("%f", &area);

    // leitura do pib
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    // leitura dos pontos turisticos
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos);

    // imprimindo dados para o usuario
    printf("Código da cidade: %c\n", codigo_cidade);
    printf("Nome da cidade: %s\n", nome);
    printf("População da cidade: %d\n", &populacao);
    printf("Área da cidade: %f\n", area);
    printf("PIB da cidade: %f\n", pib);
    printf("Pontos turísticos da cidade: %d\n", pontos_turisticos);

    return 0;
}
