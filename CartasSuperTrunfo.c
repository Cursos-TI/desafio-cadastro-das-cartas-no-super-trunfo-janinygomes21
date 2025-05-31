#include <stdio.h>

 //Tamanho máximo para strings
    #define Tam_codigo 4
    #define Tam_nome 100

int main(){

// Declaração das variaveis para a carta 1

char estado1;
char codigo1[Tam_codigo];
char nomeCidade1[Tam_nome];
int populacao1;
float area1;
float pib1;
int pontosTuristicos1;

// Declaração das variaveis para a carta 2

char estado2; 
char codigo2[Tam_codigo];
char nomeCidade2[Tam_nome];
int populacao2;
float area2;
float pib2;
int pontosTuristicos2;

// Entrada de dados da carta 1

printf("Digite os dados da carta 1: \n");
printf("Estados (A-H)");
scanf("%c", &estado1);

printf("Codigo da carta (ex:A01)");
scanf("%s\n", &codigo1);

printf("Nome da Cidade");
scanf("%[^\n]", nomeCidade1);

printf("populacao:\n");
scanf("%d\n", &populacao1);

printf("area (em km^2)\n");
scanf("%f\n", &area1);

printf("pib (em bilhõesde reais)\n");
scanf("%f\n", &pib1);

printf("numero de pontos turisticos: \n");
scanf("%d\n", &pontosTuristicos1);

// Entrada de dados da carta 2


printf("Digite os dados da carta 2: \n");
printf("Estados (A-H)");
scanf("%c\n", &estado2);

printf("Codigo da carta (ex:B02)\n");
scanf("%s\n", &codigo2);

printf("Nome da Cidade: \n");
scanf("%[^\n]", nomeCidade2);

printf("populacao:\n");
scanf("%d\n", &populacao2);

printf("area (em km^2)\n");
scanf("%f\n", &area2);

printf("pib (em bilhõesde reais)\n");
scanf("%f\n", &pib2);

printf("numero de pontos turisticos: \n");
scanf("%d\n", &pontosTuristicos2);


 // Exibição de dados da carta 1

 printf("\ncarta 1:\n");
 printf("Estado: %c\n", estado1);
 printf("Codigo:%s\n", codigo1);
 printf("Nome da Cidade: %s\n", nomeCidade1);
 printf("populacao: %s\n",populacao1);
 printf("area:%2f km^2\n", area1);
 printf("pib: %2f bilhões de reais\n", pib1 );
 printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

 // Exibição de dados da carta 2

printf("\ncarta 2:\n");
 printf("Estado: %c\n", estado2);
 printf("Codigo:%s\n", codigo2);
 printf("Nome da Cidade: %s\n", nomeCidade2);
 printf("populacao: %s\n",populacao2);
 printf("area:%2f km^2\n", area2);
 printf("pib: %2f bilhões de reais\n", pib2 );
 printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

 return 0;

   
}
