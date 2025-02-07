#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
   
//Declarei as variaveis que irei usar para o desafio
 int codigo_cidade, populacao, pontos_turisticos = 0;
 float area_cidade, pib = 0;
 char nome[50];
 
 //Aqui foi solicitado para o usuário digitar as informações nescessárias para o cadastros das cartas
 printf("Digite o nome da cidade: ");
 scanf("%s", &nome);
 printf("\nDigite o Código da cidade: ");
 scanf(" %d", &codigo_cidade);
 printf("\nDigite a população da cidade: ");
 scanf(" %d", &populacao);
 printf("\nDigite quantos pontos turísticos a cidade possui: ");
 scanf(" %d", &pontos_turisticos);
 printf("\nDigite o PIB da cidade: ");
 scanf(" %f", &pib);
 printf("\nDigite a área da cidade: ");
 scanf(" %f", &area_cidade);
 //A saída de todos os dados que o usuário informou tudo de forma organizada
 printf("\nAbaixo estão os dados que você informou\n");
 printf("\nNome da cidade: %s\nCódigo da cidade: %d\nPopulação total da cidade: %d\nPontos turísticos da cidade: %d\nO PIB da cidade é: %f\n A área da cidade é: %f", nome, codigo_cidade, populacao, pontos_turisticos, pib, area_cidade);

    return 0;
}
