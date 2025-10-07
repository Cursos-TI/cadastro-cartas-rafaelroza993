#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    printf("Desafio Super Trunfo! \n");
  // Área para definição das variáveis para armazenar as propriedades das cidades

    // Declaração das variáveis para a primeira carta
   char estado1[20], codigo1[4], cidade1[20];
   int populacao1, ponto_turistico1;
   float area1, pib1;

    // Declaração das variáveis para a segunda carta
   char estado2[20], codigo2[4], cidade2[20];
   int populacao2, ponto_turistico2;
   float area2, pib2;

// Área para entrada de dados
    // Cadastro da primeira carta
  printf("CADASTRO DA PRIMEIRA CARTA\n");

  printf("Digite o nome do estado (A-H): ");
  scanf("%s", estado1);

   printf("Digite o código da carta (ex: A01): ");
   scanf("%s", codigo1);

   printf("Digite o nome da cidade: ");
   scanf("%s", cidade1);

   printf("Digite a populacao: ");
   scanf("%d", &populacao1);

   printf("Digite o ponto turistico: ");
   scanf("%d", &ponto_turistico1);

   printf("Digite a area (em km²): ");
   scanf("%f", &area1);

   printf("Digite o pib (em milhoes): ");
   scanf("%f", &pib1);

    // Cadastro da segunda carta
   printf("CADASTRO DA SEGUNDA CARTA\n");

   printf("Digite o nome do estado (A-H): ");
   scanf("%s", estado2);

   printf("Digite o código da carta (ex: A01): ");
   scanf("%s", codigo2);

   printf("Digite o nome da cidade: ");
   scanf("%s", cidade2);

   printf("Digite a populacao: ");
   scanf("%d", &populacao2);

   printf("Digite o ponto turistico: ");
   scanf("%d", &ponto_turistico2);

   printf("Digite a area (em km²): ");
   scanf("%f", &area2);

   printf("Digite o pib (em milhoes): ");
   scanf("%f", &pib2);


   // Exibição das informações da primeira carta
  printf("\nCARTA 1\n");
  printf("Estado: %s\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Ponto Turístico: %d\n", ponto_turistico1);
  printf("Área: %f km²\n", area1);
  printf("PIB: %f milhões\n", pib1);
   // Exibição das informações da segunda carta
  printf("\nCARTA 2\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Ponto Turístico: %d\n", ponto_turistico2);
  printf("Área: %f km²\n", area2);
  printf("PIB: %f milhões\n", pib2);


return 0;
}
